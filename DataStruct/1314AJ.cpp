//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//#define MaxData 1001
//#define MinData -1
//#define Error -6
//#define ElementType long long int
//#define Maxsize 100002
//
//
//typedef struct HNode* Heap;
//struct HNode
//{
//	ElementType* Data;
//	int Size;
//	int Capacity;
//};
//typedef Heap MinHeap;
//int IsEmpty(Heap H)
//{
//	return (H->Size == 0);
//}
//int IsFull(Heap H)
//{
//	return (H->Capacity == H->Size);
//}
//
//MinHeap CreateMinHeap(int MaxSize)
//{
//	MinHeap H = (MinHeap)malloc(sizeof(struct HNode));
//	H->Data = (ElementType*)malloc((MaxSize + 2) * sizeof(ElementType));
//	H->Size = 0;
//	H->Data[0] = MinData;
//	H->Capacity = MaxSize;
//	return H;
//}
//
//void InsertMinHeap(MinHeap H, ElementType X)
//{//将元素X插入最小堆H，其中H->Data[0]已经定义为哨兵
//	long long int i;
//	if (!IsFull(H))
//	{
//		i = ++H->Size;
//		for (; H->Data[i / 2] > X; i /= 2)
//			H->Data[i] = H->Data[i / 2];
//		H->Data[i] = X;
//	}
//}
//
//void PercDownMinHeap(MinHeap H, int p)
//{
//	//下滤：将H中以H->Data[p]为根的子堆调整为最小堆
//	long long int Parent, Child;
//	ElementType X;
//	X = H->Data[p];
//	for (Parent = p; Parent * 2 <= H->Size; Parent = Child)
//	{
//		Child = Parent * 2;
//		if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
//			Child++;//Child指向左右子结点的较小者
//		if (X <= H->Data[Child])
//			break;
//		else
//			H->Data[Parent] = H->Data[Child];
//	}
//	H->Data[Parent] = X;
//}
//
//void BuildMinHeap(MinHeap H)//建造最小堆
//{
//	//调整H->Data[]中的元素，使满足最小堆的有序性
//	//假设所有H->Size个元素已经存在H->Data[]中
//	long long int i;
//	for (i = H->Size / 2; i > 0; i--)
//		PercDownMinHeap(H, i);
//}
//
//ElementType DeletMin(MinHeap H)
//{	//从最小堆H中取出键值为最小的元素，并删除一个结点
//	long long int Parent, Child;
//	ElementType MinItem, X;
//	if (!IsEmpty(H))
//	{
//		MinItem = H->Data[1];//取出根结点存放的最小值
//		X = H->Data[H->Size--];//用最小堆中最后一个元素从根结点开始向上过滤下层结点,当前堆的规模要减小
//		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
//		{
//			Child = Parent * 2;
//			if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
//				Child++;//Child指向左右子结点的较小者
//			if (X <= H->Data[Child])
//				break;//找到了合适位置
//			else
//				H->Data[Parent] = H->Data[Child];//下滤X
//		}
//		H->Data[Parent] = X;
//		return MinItem;
//	}
//	else
//		return Error;
//}
//int main(void) {
//	long long int n;
//	long long int i = 0;
//	long long int tmp1, tmp2, TmpSum,sum = 0;
//	while (scanf("%lld", &n) != NULL) {
//		sum = 0;
//		Heap H = CreateMinHeap(n);
//		for (i = 1; i <= n; i++) {
//			scanf("%lld", &H->Data[i]);
//		}
//		H->Size = n;
//		BuildMinHeap(H);
//		while (H->Size != 1) {
//			tmp1 = DeletMin(H);
//			tmp2 = DeletMin(H);
//			TmpSum = tmp1 + tmp2;
//			sum += TmpSum;
//			InsertMinHeap(H, TmpSum);
//		}
//		printf("%lld\n", sum);
//	}
//	return 0;
//}