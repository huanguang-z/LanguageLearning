import sys
# # string = "Hello world"
# # print(string)
# import io
# import Hello
# from Hello import z
# a=b=c=10
# if a==b:
#     print(a)
# print(z)
#
# # TODO 打印Hello中的z
# print(Hello.z)
#
# # 函数声明，类声明，方法声明之前保留两个空行
#
# a = 1 + 2j
# b = 3 + 4j
# print(a*b)
#
# name = 'Mary'
# age = 19
# s = 'Her age is {0} year'.format(age)
# print(s)
# print(len(s))
# c = s.rfind('r')
# print(c)
# str1 = str(168465435468566546565566)
# print(len(str1))
#
# class Person:
#     def _init_(self, name, age):
#         self.name = name
#         self.age = age
#
#     def __eq__(self, other):
#         if self.name == other.name and self.age == other.age:
#             return True
#         else:
#             return False
#
# p1 = Person('Tony', 18)
# p2 = Person('Tony', 18)
#
# print(p1 == p2)
# print(p1 is not p2)


# score = int(sys.argv[1])
# if score >= 60:
#     print('及格')
#     if score >= 90:
#         print('Excellent')
# else:
#     print('foolish')

i = 0
while i * i < 100_000:
    i+=1
print('i = {0}'.format(i))
print('i * i = {0}'.format(i*i))

for item in 'Hello':
    print(item)

for item in range(10, 50, 2):
    if item % 3 == 0 :
        continue
    print('Count is : {0}'.format(item))

