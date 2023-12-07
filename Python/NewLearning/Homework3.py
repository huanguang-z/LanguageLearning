# a = {'Hello', 12, "World"}
# tuple(a)
# for item in a:
#     print(item)
#
# for i, item in enumerate(a):
#     print('{0} - {1}'.format(i, item))
#
# stu_list = ['111', '222', '333']
#
# stu_list.append('32')
# stu_list.insert(2, '77')
# print(len(stu_list))
#

stu_dic = {102: 'zwr', 103: 'wjy', 104: 'hxf' }
for stu_id in stu_dic.keys():
    print(str(stu_id))
for stu_name in stu_dic.values():
    print(stu_name)
