
# 代码 7-4
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.metrics import fowlkes_mallows_score, calinski_harabasz_score
import warnings
warnings.filterwarnings("ignore")

airline_scale = np.load('../tmp/airline_scale.npz')['arr_0']

k = 5  # 聚类中心数
kmeans_model = KMeans(n_clusters=k, random_state=123)
# 聚类中心数，并行的CPU核的数量，随机数种子
fit_kmeans = kmeans_model.fit(airline_scale)  # 模型训练
print(kmeans_model.cluster_centers_)  # 查看聚类中心
print(kmeans_model.labels_)  # 查看样本的类别标

cluster_center = pd.DataFrame(kmeans_model.cluster_centers_, columns=['ZL', 'ZR', 'ZF', 'ZM', 'ZC'])   # 将聚类中心放在数据框中
cluster_center.index = pd.DataFrame(kmeans_model.labels_). drop_duplicates().iloc[:, 0]  # 去重

# 统计不同类别样本的数目
r1 = pd.Series(kmeans_model.labels_).value_counts()

print('最终每个类别的数目为：\n', r1)

# FMI评价

for i in range(2, 7):
    kmeans = KMeans(n_clusters=i, random_state=123).fit(airline_scale)
    # print(kmeans.labels_)
    # print(type(kmeans.labels_))
    score = fowlkes_mallows_score(kmeans_model.labels_, kmeans.labels_)
    print('iris数据聚%d类FMI评价分值为：%f' % (i, score))

# Calinski-Harabaz评价

for i in range(2, 7):
    # 构建并训练模型
    kmeans = KMeans(n_clusters=i, random_state=123).fit(airline_scale)
    score = calinski_harabasz_score(airline_scale, kmeans.labels_)
    print('iris数据聚%d类 Calinski-Harabaz指数为：%f' % (i, score))


labels = ['ZL', 'ZR', 'ZF', 'ZM', 'ZC']
ClientBase = ['客户群' + str(i + 1) for i in range(0, 5)]  # 客户群命名，作为雷达图的图例
kinds = list(cluster_center.iloc[:, 0])
# 由于雷达图要保证数据闭合，因此再添加L列，并转换为 np.ndarray
cluster_center = pd.concat([cluster_center, cluster_center[['ZL']]], axis=1)
centers = np.array(cluster_center.iloc[:, 0:])

# 分割圆周长，并让其闭合
n = len(labels)
angle = np.linspace(0, 2 * np.pi, n, endpoint=False)
angle = np.concatenate((angle, [angle[0]]))
labels = np.concatenate((labels, [labels[0]]))

# 绘图
fig = plt.figure(figsize=(8, 6))
ax = fig.add_subplot(111, polar=True)  # 以极坐标的形式绘制图形
plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False  # 用来正常显示负号
# 画线
for i in range(len(kinds)):
    ax.plot(angle, centers[i], linewidth=2, label=kinds[i])
# 添加属性标签
ax.set_thetagrids(angle*180/np.pi, labels)

plt.title('特征分析雷达图')
plt.legend(ClientBase)
plt.show()
plt.close()
