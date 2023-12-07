# -*- coding: utf-8 -*                                   #修改编码格式，支持中文
from socket import *

HOST = ''
PORT = 2002
BUFSIZE = 1024
ADDR = (HOST, PORT)

tcpSerSock = socket(AF_INET, SOCK_STREAM)                 # 创建TCP服务器套接字
tcpSerSock.bind(ADDR)                                     # 将地址绑定到套接字上
tcpSerSock.listen(1)                           # 设置并启动TCP监听器，监听是否有客户端连接到本端口

while True:
	print('waiting for connection...')
	tcpCliSock, addr = tcpSerSock.accept() # 被动接收TCP客户端连接，一直等待直到连接到达（阻塞）
        print('connecting...')  #接收到连接
	try:
		data = tcpCliSock.recv(BUFSIZE)           # 接收TCP消息
		#print(data)			 #data是一个get（请求方法）的http请求报文
		filename = data.split()[1]      #filename = /Hello.html 请求行=请求方法+路径+版本
		#print(filename[1:])
		f = open(filename[1:])          #f = Hello.html
		outputdata = f.read()
		header = 'HTTP/1.1 200 OK\r\n\r\n'       #响应报文，状态代码200，客户端请求成功
		tcpCliSock.send(header.encode())         #浏览器发出响应
		for i in range(0, len(outputdata)):
			tcpCliSock.send(outputdata[i].encode())  #运行html代码
		tcpCliSock.close()
	except IOError:
		header = 'HTTP/1.1 404 NOT FOUND\r\n\r\n'  #状态行
		tcpCliSock.send(header.encode())
		tcpCliSock.close()
tcpSerSock.close()


