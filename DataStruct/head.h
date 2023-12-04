#pragma once
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#pragma warning(disable:6011)
#pragma warning(disable:6001)
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<map>
using namespace std;
#define ElementType int
//#define MaxSize 100
#define Error NULL

typedef int Position;//队列顺序存储，Front指向队列头的前一个
struct QNode
{
	ElementType* Data;
	Position Front, Rear;
	int MaxSize;
};
typedef struct QNode* Queue;
Queue CreateQueue(int MaxSize)
{
	Queue Q = (Queue)malloc(sizeof(struct QNode));
	Q->Data = (ElementType*)malloc(sizeof(ElementType) * MaxSize);
	Q->Front = Q->Rear = 0;
	Q->MaxSize = MaxSize;
	return Q;
}

bool IsFull(Queue Q)
{
	return ((Q->Rear + 1) % Q->MaxSize == Q->Front);
}

bool IsEmpty(Queue Q)
{
	return Q->Front == Q->Rear;
}

void AddQ(Queue Q, ElementType X)
{
	if (!(IsFull(Q)))
	{
		Q->Rear = (Q->Rear + 1) % Q->MaxSize;
		Q->Data[Q->Rear] = X;
	}
}
//
ElementType DeleteQ(Queue Q)
{
	if (!(IsEmpty(Q)))
	{
		Q->Front = (Q->Front + 1) % Q->MaxSize;
		return Q->Data[Q->Front];
	}
}
