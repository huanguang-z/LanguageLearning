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
////int Length(List L)// �����
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
////ElementType FindKth(List L, int K)//���ҵ�K������ֵ��������
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
////Position Find(List L, ElementType X)//��ֵ������λ��
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
////Position FindPrevious(List L, ElementType X)//��ֵ������ǰһ��λ��
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
////int IsEmpty(List L)//�ж������Ƿ�ǿ�
////{
////	return L->Next == NULL;
////}
////
////int IsLast(List L,Position P)//�ж�P�Ƿ���β���
////{
////	return P->Next == NULL;
////}
////
////void Insert(List L, ElementType X, Position P)//���
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
////	P = FindPrevious(L, X);//��Ҫɾ������ǰ���
////	if (!IsLast(L, P))
////	{
////		Tmp = P->Next;
////		P->Next = Tmp->Next;
////		free(Tmp);
////	}
////}
//
////typedef int Position;//˳��洢��Topָ����Ƕ�ջ����
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
////typedef struct SNode* PtrToSNode;//��ʽ�洢��Sָ���Ϊ��ջ����������һ��
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
////typedef int Position;//����˳��洢��Frontָ�����ͷ��ǰһ��
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
////struct Node { /* �����еĽ�� */
////    ElementType Data;
////    PtrToNode Next;
////};
////typedef PtrToNode Position;
////
////struct QNode {
////    Position Front, Rear;  /* ���е�ͷ��βָ�� */
////    int MaxSize;           /* ����������� */
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
////        if (Q->Front == Q->Rear) /* ������ֻ��һ��Ԫ�� */
////            Q->Front = Q->Rear = NULL; /* ɾ���������Ϊ�� */
////        else
////            Q->Front = Q->Front->Next;
////        FrontElem = FrontCell->Data;
////
////        free(FrontCell);  /* �ͷű�ɾ�����ռ�  */
////        return  FrontElem;
////    }
////}