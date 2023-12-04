//#include"head.h"
//#define _CRT_SECURE_NO_WARNINGS
////typedef struct LNode* PtrToLNode;
//// #define MaxSize 100
////struct LNode
////{
////	ElementType Data;
////	PtrToLNode Next;
////};
////typedef PtrToLNode Position;
////typedef PtrToLNode List;
////
////int Length(List L)// 计算表长
////{
////	Position p = L;
////	int cnt = 0;
////	while (p)
////	{
////		p = p->Next;
////		cnt++;
////	}
////	return cnt;
////}
////
////ElementType FindKth(List L, int K)//查找第K个结点的值，并返回
////{
////	Position P=L;
////	int cnt = 1;
////	while (P && cnt < K)
////	{
////		P = P->Next;
////		cnt++;
////	}
////	if ((cnt == K) && P)
////		return P->Data;
////	else
////		return -1;
////}
////
////Position Find(List L, ElementType X)//找值，返回位置
////{
////	Position P = L;
////	while (P && P->Data != X)
////		P = P->Next;
////	if (P)
////		return P;
////	else
////		return NULL;
////}
////
////Position FindPrevious(List L, ElementType X)//找值，返回前一个位置
////{
////	Position P = L;
////	while (P->Next && P->Next->Data != X)
////		P = P->Next;
////	if (P)
////		return P;
////	else
////		return NULL;
////}
////
////int IsEmpty(List L)//判断链表是否非空
////{
////	return L->Next == NULL;
////}
////
////int IsLast(List L,Position P)//判断P是否是尾结点
////{
////	return P->Next == NULL;
////}
////
////void Insert(List L, ElementType X, Position P)//后插
////{
////	Position TmpCell;
////	TmpCell = (Position)malloc(sizeof(struct LNode));
////	TmpCell->Data = X;
////	TmpCell->Next = P->Next;
////	P->Next = TmpCell;
////}
////
////void Delete(List L, ElementType X)
////{
////	Position P, Tmp;
////	P = FindPrevious(L, X);//找要删除结点的前结点
////	if (!IsLast(L, P))
////	{
////		Tmp = P->Next;
////		P->Next = Tmp->Next;
////		free(Tmp);
////	}
////}
//
////typedef int Position;//顺序存储，Top指向的是堆栈顶部
////struct SNode
////{
////	ElementType* Data;
////	Position Top;
////	int MaxSize;
////};
////typedef struct SNode* Stack;
////
////Stack CreateStack(int MaxSize)
////{
////	Stack S = (Stack)malloc(sizeof(struct SNode));
////	S->Data = (ElementType*)malloc(sizeof(ElementType) * MaxSize);
////	S->Top = -1;
////	S->MaxSize = MaxSize;
////	return S;
////}
////
////bool IsFull(Stack S)
////{
////	return (S->Top == S->MaxSize - 1);
////}
////
////bool IsEmpty(Stack S)
////{
////	return S->Top == -1;
////}
////
////void Push(Stack S, ElementType X)
////{
////	if (!(IsFull(S)))
////	{
////		S->Data[++(S->Top)] = X;
////	}
////}
////
////ElementType Pop(Stack S)
////{
////	if (!(IsEmpty(S)))
////	{
////		return (S->Data[(S->Top)--]);
////	}
////}
//
////typedef struct SNode* PtrToSNode;//链式存储，S指向的为堆栈顶部的再上一个
////struct SNode
////{
////	ElementType Data;
////	PtrToSNode Next;
////};
////typedef PtrToSNode Stack;
////
////Stack CreateStack()
////{
////	Stack S = (Stack)malloc(sizeof(struct SNode));
////	S->Next = NULL;
////	return S;
////}
////
////bool IsEmpty(Stack S)
////{
////	return (S->Next == NULL);
////}
////
////void Push(Stack S, ElementType X)
////{
////	PtrToSNode TmpCell = (PtrToSNode)malloc(sizeof(struct SNode));
////	TmpCell->Data = X;
////	TmpCell->Next = S->Next;
////	S->Next = TmpCell;
////}
////
////ElementType Pop(Stack S)
////{
////	PtrToSNode FirstCell;
////	ElementType TopElem;
////	if (!(IsEmpty(S)))
////	{
////		FirstCell = S->Next;
////		TopElem = FirstCell->Data;
////		S->Next = FirstCell->Next;
////		free(FirstCell);
////		return TopElem;
////	}
////}
//
////typedef int Position;//队列顺序存储，Front指向队列头的前一个
////struct QNode
////{
////	ElementType* Data;
////	Position Front, Rear;
////	int MaxSize;
////};
////typedef struct QNode* Queue;
////Queue CreateQueue(int MaxSize)
////{
////	Queue Q = (Queue)malloc(sizeof(struct QNode));
////	Q->Data = (ElementType*)malloc(sizeof(ElementType) * MaxSize);
////	Q->Front = Q->Rear = 0;
////	Q->MaxSize = MaxSize;
////	return Q;
////}
////
////bool IsFull(Queue Q)
////{
////	return ((Q->Rear + 1) % Q->MaxSize == Q->Front);
////}
////
////bool IsEmpty(Queue Q)
////{
////	return Q->Front == Q->Rear;
////}
////
////void AddQ(Queue Q, ElementType X)
////{
////	if (!(IsFull(Q)))
////	{
////		Q->Rear = (Q->Rear + 1) % Q->MaxSize;
////		Q->Data[Q->Rear] = X;
////	}
////}
////
////ElementType DeleteQ(Queue Q)
////{
////	if (!(IsEmpty(Q)))
////	{
////		Q->Front = (Q->Front + 1) % Q->MaxSize;
////		return Q->Data[Q->Front];
////	}
////}
//
////typedef struct Node* PtrToNode;
////struct Node { /* 队列中的结点 */
////    ElementType Data;
////    PtrToNode Next;
////};
////typedef PtrToNode Position;
////
////struct QNode {
////    Position Front, Rear;  /* 队列的头、尾指针 */
////    int MaxSize;           /* 队列最大容量 */
////};
////typedef struct QNode* Queue;
////
////bool IsEmpty(Queue Q)
////{
////    return (Q->Front == NULL);
////}
////
////ElementType DeleteQ(Queue Q)
////{
////    Position FrontCell;
////    ElementType FrontElem;
////
////    if (!(IsEmpty(Q))) 
////    {
////        FrontCell = Q->Front;
////        if (Q->Front == Q->Rear) /* 若队列只有一个元素 */
////            Q->Front = Q->Rear = NULL; /* 删除后队列置为空 */
////        else
////            Q->Front = Q->Front->Next;
////        FrontElem = FrontCell->Data;
////
////        free(FrontCell);  /* 释放被删除结点空间  */
////        return  FrontElem;
////    }
////}