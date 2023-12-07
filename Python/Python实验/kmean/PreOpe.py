
import numpy as np
import pandas as pd
from sklearn.preprocessing import StandardScaler

# 导入航空数据

airline_data = pd.read_csv("../data/air_data.csv",
                            encoding="gb18030")
print('原始数据的形状为：', airline_data.shape)
print(airline_data.describe().T)
explore = airline_data.describe().T  # 对数据的统计性描述,T是我进行了转置

exp1 = airline_data["SUM_YR_1"].notnull()
exp2 = airline_data["SUM_YR_2"].notnull()
exp = exp1 & exp2  # 多条件筛选
airline_notnull = airline_data.loc[exp, :]
print('删除缺失记录后数据的形状为：', airline_notnull.shape)


# 只保留票价非零的，或者平均折扣率不为0且总飞行公里数大于0的记录。
index1 = airline_notnull['SUM_YR_1'] != 0
index2 = airline_notnull['SUM_YR_2'] != 0
index3 = (airline_notnull['SEG_KM_SUM'] > 0) & \
         (airline_notnull['avg_discount'] != 0)
airline = airline_notnull[(index1 | index2) & index3]
print('删除异常记录后数据的形状为：', airline.shape)

# 选取需求特征

airline_selection = airline[["FFP_DATE", "LOAD_TIME",
                            "LAST_TO_END", "FLIGHT_COUNT",
                             "SEG_KM_SUM", "avg_discount"]]
'''
入会时间，观测窗口的结束时间，最后一次乘机时间至观测窗口的结束时长，观测窗口内的飞行次数
观测窗口的总飞行公里数，平均折扣率
'''
# 构建L特征
L = pd.to_datetime(airline_selection["LOAD_TIME"]) - \
    pd.to_datetime(airline_selection["FFP_DATE"])
# print(L)
L = L.astype("str").str.split().str[0]
# print(L)
L = L.astype("int") / 30

'''
    打印之后发现数据格式为  2706 days，分隔之后去掉days，保留下来的就是天数
    分析下来L就等于 (LOAD_TIME - FFP_DATE)/30,其中两个时间都是以天为单位
    计算了用户入会到现在的月数
'''

# 合并特征
airline_features = pd.concat([L, airline_selection.iloc[:, 2:]], axis=1)

print('构建的LRFMC特征前5行为：\n', airline_features.head())
airline_features.columns = airline_features.columns.astype(str)

data = StandardScaler().fit_transform(airline_features)

# 标准化 通过删除平均值并缩放到单位方差来标准化特征。

np.savez('../tmp/airline_scale.npz', data)

print('标准化后LRFMC五个特征为：\n', data[:5, :])
