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
//{//��Ԫ��X������С��H������H->Data[0]�Ѿ�����Ϊ�ڱ�
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
//	//���ˣ���H����H->Data[p]Ϊ�����Ӷѵ���Ϊ��С��
//	long long int Parent, Child;
//	ElementType X;
//	X = H->Data[p];
//	for (Parent = p; Parent * 2 <= H->Size; Parent = Child)
//	{
//		Child = Parent * 2;
//		if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
//			Child++;//Childָ�������ӽ��Ľ�С��
//		if (X <= H->Data[Child])
//			break;
//		else
//			H->Data[Parent] = H->Data[Child];
//	}
//	H->Data[Parent] = X;
//}
//
//void BuildMinHeap(MinHeap H)//������С��
//{
//	//����H->Data[]�е�Ԫ�أ�ʹ������С�ѵ�������
//	//��������H->Size��Ԫ���Ѿ�����H->Data[]��
//	long long int i;
//	for (i = H->Size / 2; i > 0; i--)
//		PercDownMinHeap(H, i);
//}
//
//ElementType DeletMin(MinHeap H)
//{	//����С��H��ȡ����ֵΪ��С��Ԫ�أ���ɾ��һ�����
//	long long int Parent, Child;
//	ElementType MinItem, X;
//	if (!IsEmpty(H))
//	{
//		MinItem = H->Data[1];//ȡ��������ŵ���Сֵ
//		X = H->Data[H->Size--];//����С�������һ��Ԫ�شӸ���㿪ʼ���Ϲ����²���,��ǰ�ѵĹ�ģҪ��С
//		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
//		{
//			Child = Parent * 2;
//			if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
//				Child++;//Childָ�������ӽ��Ľ�С��
//			if (X <= H->Data[Child])
//				break;//�ҵ��˺���λ��
//			else
//				H->Data[Parent] = H->Data[Child];//����X
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