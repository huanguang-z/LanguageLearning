//#include"head.h"
////typedef struct TNode* Position;
////typedef Position BinTree;
////struct TNode
////{
////	ElementType Data;
////	BinTree Left;
////	BinTree Right;
////};
//
//
////void InOrderTraversal(BinTree BT)
////{
////	if (BT) {
////		InOrderTraversal(BT->Left);
////		printf("%d ", BT->Data);
////	}
////	InOrderTraversal(BT->Right);
////}
////
////void PreOrderTraversal(BinTree BT)
////{
////	if (BT)
////	{
////		printf("%d ", BT->Data);
////		PreOrderTraversal(BT->Left);
////		PreOrderTraversal(BT->Right);
////	}
////}
////
////void PostOrderTraversal(BinTree BT)
////{
////	if (BT)
////	{
////		PostOrderTraversal(BT->Left);
////		PostOrderTraversal(BT->Right);
////		printf("%d ", BT->Data);
////	}
////}
////
////void LevelorderTraversal(BinTree BT)
////{
////	Queue Q;
////	BinTree T;
////
////	if (!BT) return; /* ���ǿ�����ֱ�ӷ��� */
////
////	Q = CreatQueue(); /* �����ն���Q */
////	AddQ(Q, BT);
////	while (!IsEmpty(Q)) {
////		T = DeleteQ(Q);
////		printf("%d ", T->Data); /* ����ȡ�����еĽ�� */
////		if (T->Left)   AddQ(Q, T->Left);
////		if (T->Right)  AddQ(Q, T->Right);
////	}
////}
//
////Position FindMin(BinTree BST)
////{
////	if (!BST)
////		return NULL;//���գ�����NULL
////	else if (!BST->Left)
////		return BST;//�ҵ�����˵㣬����
////	else
////		return FindMin(BST->Left);//�ݹ�������֧
////}
////
////Position FindMax(BinTree BST)
////{
////	if (BST)
////	{
////		while (BST->Right)
////			BST = BST->Right;
////	}
////	return BST;
////}
////
////BinTree Insert(BinTree BST, ElementType X)
////{
////	if (!BST)//��ԭ��Ϊ�գ����ɲ�����һ�����Ķ���������
////	{
////		BST = (BinTree)malloc(sizeof(struct TNode));
////		BST->Data = X;
////		BST->Left = BST->Right = NULL;
////	}
////	else//�Ҳ���λ��
////	{
////		if (X < BST->Data)//�ݹ����������
////			BST->Left = Insert(BST->Left, X);
////		else if (X > BST->Data)//�ݹ����������
////			BST->Right = Insert(BST->Right, X);
////	}
////	return BST;
////}
////
////BinTree Delete(BinTree BST, ElementType X)
////{
////	Position Tmp;//�洢��������Ľ�����Ϣ
////	if (BST)
////	{
////		if (X < BST->Data)
////			BST->Left = Delete(BST->Left, X);//���������ݹ�ɾ��
////		else if (X > BST->Data)
////			BST->Right = Delete(BST->Right, X);//���������ݹ�ɾ��
////		else//BSTΪҪɾ���Ľ��
////		{
////			if (BST->Left && BST->Right)//�������ӽ��
////			{
////				Tmp = FindMin(BST->Right);//��������������������С����Ϊ��������С
////				BST->Data = Tmp->Data;
////				BST->Right = Delete(BST->Right, BST->Data);//����������ɾ����СԪ��
////			}
////			else//��ɾ�������һ�������ӽ��
////			{
////				Tmp = BST;
////				if (!BST->Left)//ֻ���Һ��ӻ����ӽ��
////					BST = BST->Right;
////				else//ֻ������
////					BST = BST->Right;
////				free(Tmp);
////			}
////		}
////	}
////	return BST;
////}
//
////typedef struct AVLNode* Position;
////typedef Position AVLTree;
////struct AVLNode
////{
////	ElementType Data;
////	AVLTree Left;
////	AVLTree Right;
////	int Height;
////};
////
////int GetHeight(AVLTree A)
////{
////	int HL, HR, MaxH;
////	if (A)
////	{
////		HL = GetHeight(A->Left);
////		HR = GetHeight(A->Right);
////		MaxH = HL > HR ? HL : HR;
////		return (MaxH + 1);
////	}else
////		return 0;
////}
////
////int Max(int a, int b)
////{
////	return a > b ? a : b;
////}
////
////AVLTree SingleLeftRotation(AVLTree A)//A������һ�����ӽ��B
////{
////	//��A��B������������A��B�ĸ߶ȣ������µĸ����B
////	AVLTree B = A->Left;
////	A->Left = B->Right;
////	B->Right = A;
////	A->Height = Max(GetHeight(A->Left), GetHeight(A->Right)) + 1;
////	B->Height = Max(GetHeight(B->Left), A->Height) + 1;
////	return B;
////}
////
////AVLTree SingleRightRotation(AVLTree A)//A������һ�����ӽ��B
////{
////	//��A��B���ҵ���������A��B�ĸ߶ȣ������µĸ����B
////	AVLTree B = A->Right;
////	A->Right = B->Left;
////	B->Left = A;
////	A->Height = Max(GetHeight(A->Left), GetHeight(A->Right)) + 1;
////	B->Height = Max(GetHeight(B->Right), A->Height) + 1;
////	return B;
////}
////
////AVLTree DoubleLeftRightRotation(AVLTree A)
////{
////	//��������������������ϣ������ȶ�����������RR��ת���ٶ���������LL��ת
////	A->Left = SingleRightRotation(A->Left);
////	return SingleLeftRotation(A);
////}
////
////AVLTree DoubleRightLeftRotation(AVLTree A)
////{
////	//��������������������ϣ������ȶ�����������LL��ת���ٶ���������RR��ת
////	A->Right = SingleLeftRotation(A->Right);
////	return SingleRightRotation(A);
////}
////
////AVLTree Insert(AVLTree T, ElementType X)//��X����AVL��T�У����ҷ��ص������AVL��
////{
////	if (!T)//�������
////	{
////		T = (AVLTree)malloc(sizeof(struct AVLNode));
////		T->Data = X;
////		T->Height = 0;
////		T->Left = T->Right = NULL;
////	}
////	else if (X < T->Data)//����������
////	{
////		T->Left = Insert(T->Left, X);
////		if (GetHeight(T->Left) - GetHeight(T->Right) == 2)//��Ҫ����
////		{
////			if (X < T->Left->Data)//LL��ת
////				T = SingleLeftRotation(T);
////			else//LR��ת
////				T = DoubleLeftRightRotation(T);
////		}
////	}
////	else if (X > T->Data)//����������
////	{
////		T->Right = Insert(T->Right, X);
////		if (GetHeight(T->Left) - GetHeight(T->Right) == -2)//��Ҫ����
////		{
////			if (X > T->Right->Data)//RR��ת
////				T = SingleRightRotation(T);
////			else//RL��ת
////				T = DoubleRightLeftRotation(T);
////		}
////	}
////	else//�������
////		X == T->Data;
////	T->Height = Max(GetHeight(T->Left), GetHeight(T->Right)) + 1;//��������
////	return T;
////}
//
////typedef struct HNode* Heap;
////struct HNode
////{
////	ElementType* Data;
////	HuffmanTree* DataForHuffman;
////	int Size;
////	int Capacity;
////};
////typedef Heap MaxHeap;
////typedef Heap MinHeap;
////#define MaxData 1001
////#define MinData -1
////#define Error -6
////
////int IsEmpty(Heap H)
////{
////	return (H->Size == 0);
////}
////int IsFull(Heap H)
////{
////	return (H->Capacity == H->Size);
////}
////
////MaxHeap CreateMaxHeap(int MaxSize)
////{
////	MaxHeap H = (MaxHeap)malloc(sizeof(struct HNode));
////	H->Data = (ElementType*)malloc((MaxSize + 1) * sizeof(ElementType));
////	H->Size = 0;
////	H->Data[0] = MaxData;
////	H->Capacity = MaxSize;
////	return H;
////}
////
////MinHeap CreateMinHeap(int MaxSize)
////{
////	MinHeap H = (MinHeap)malloc(sizeof(struct HNode));
////	H->Data = (ElementType*)malloc((MaxSize + 2) * sizeof(ElementType));
////	H->Size = 0;
////	H->Data[0] = MinData;
////	H->Capacity = MaxSize;
////	return H;
////}
////
////void InsertMaxHeap(MaxHeap H, ElementType X)
////{//��Ԫ��X��������H������H->Data[0]�Ѿ�����Ϊ�ڱ�
////	int i;
////	if (!IsFull(H))
////	{
////		i = ++H->Size;
////		for (; H->Data[i / 2] < X; i /= 2)
////			H->Data[i] = H->Data[i / 2];
////		H->Data[i] = X;
////	}
////}
////
////void InsertMinHeap(MinHeap H, ElementType X)
////{//��Ԫ��X������С��H������H->Data[0]�Ѿ�����Ϊ�ڱ�
////	int i;
////	if (!IsFull(H))
////	{
////		i = ++H->Size;
////		for (; H->Data[i / 2] > X; i /= 2)
////			H->Data[i] = H->Data[i / 2];
////		H->Data[i] = X;
////	}
////}
////
////void PercDownMaxHeap(MaxHeap H, int p)
////{
////	//���ˣ���H����H->Data[p]Ϊ�����Ӷѵ���Ϊ����
////	int Parent, Child;
////	ElementType X;
////	X = H->Data[p];
////	for (Parent = p; Parent * 2 <= H->Size; Parent = Child)
////	{
////		Child = Parent * 2;
////		if ((Child != H->Size) && (H->Data[Child] < H->Data[Child + 1]))
////			Child++;//Childָ�������ӽ��Ľϴ���
////		if (X >= H->Data[Child])
////			break;
////		else
////			H->Data[Parent] = H->Data[Child];
////	}
////	H->Data[Parent] = X;
////}
////
////void PercDownMinHeap(MinHeap H, int p)
////{
////	//���ˣ���H����H->Data[p]Ϊ�����Ӷѵ���Ϊ��С��
////	int Parent, Child;
////	ElementType X;
////	X = H->Data[p];
////	for (Parent = p; Parent * 2 <= H->Size; Parent = Child)
////	{
////		Child = Parent * 2;
////		if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
////			Child++;//Childָ�������ӽ��Ľ�С��
////		if (X <= H->Data[Child])
////			break;
////		else
////			H->Data[Parent] = H->Data[Child];
////	}
////	H->Data[Parent] = X;
////}
////
////void BuildMaxHeap(MaxHeap H)//��������
////{
////	//����H->Data[]�е�Ԫ�أ�ʹ�������ѵ�������
////	//��������H->Size��Ԫ���Ѿ�����H->Data[]��
////	int i;
////	for (i = H->Size / 2; i > 0; i--)
////		PercDownMaxHeap(H, i);
////}
////
////void BuildMinHeap(MinHeap H)//������С��
////{
////	//����H->Data[]�е�Ԫ�أ�ʹ������С�ѵ�������
////	//��������H->Size��Ԫ���Ѿ�����H->Data[]��
////	int i;
////	for (i = H->Size / 2; i > 0; i--)
////		PercDownMinHeap(H, i);
////}
////
////ElementType DeleteMax(MaxHeap H)
////{	//������H��ȡ����ֵΪ����Ԫ�أ���ɾ��һ�����
////	int Parent, Child;
////	ElementType MaxItem, X;
////	if (!IsEmpty(H))
////	{
////		MaxItem = H->Data[1];//ȡ��������ŵ����ֵ
////		X = H->Data[H->Size--];//�����������һ��Ԫ�شӸ���㿪ʼ���Ϲ����²���,��ǰ�ѵĹ�ģҪ��С
////		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
////		{
////			Child = Parent * 2;
////			if ((Child != H->Size) && (H->Data[Child] < H->Data[Child + 1]))
////				Child++;//Childָ�������ӽ��Ľϴ���
////			if (X >= H->Data[Child])
////				break;//�ҵ��˺���λ��
////			else
////				H->Data[Parent] = H->Data[Child];//����X
////		}
////		H->Data[Parent] = X;
////		return MaxItem;
////	}
////	else
////		return Error;
////}
////
////ElementType DeletMin(MinHeap H)
////{	//����С��H��ȡ����ֵΪ��С��Ԫ�أ���ɾ��һ�����
////	int Parent, Child;
////	ElementType MinItem, X;
////	if (!IsEmpty(H))
////	{
////		MinItem = H->Data[1];//ȡ��������ŵ���Сֵ
////		X = H->Data[H->Size--];//����С�������һ��Ԫ�شӸ���㿪ʼ���Ϲ����²���,��ǰ�ѵĹ�ģҪ��С
////		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
////		{
////			Child = Parent * 2;
////			if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
////				Child++;//Childָ�������ӽ��Ľ�С��
////			if (X <= H->Data[Child])
////				break;//�ҵ��˺���λ��
////			else
////				H->Data[Parent] = H->Data[Child];//����X
////		}
////		H->Data[Parent] = X;
////		return MinItem;
////	}
////	else
////		return Error;
////}
////
////typedef struct HTNode* HuffmanTree;
////struct HTNode
////{
////	int Weight;//Ȩ��
////	HuffmanTree Left;
////	HuffmanTree Right;
////};
////
////HuffmanTree DeletMinForHuffman(MinHeap H)
////{	//����С��H��ȡ����ֵΪ��С��Ԫ�أ���ɾ��һ�����
////	int Parent, Child;
////	HuffmanTree MinItem, X;
////	if (!IsEmpty(H))
////	{
////		MinItem = H->DataForHuffman[1];//ȡ��������ŵ���Сֵ
////		X = H->DataForHuffman[H->Size--];//����С�������һ��Ԫ�شӸ���㿪ʼ���Ϲ����²���,��ǰ�ѵĹ�ģҪ��С
////		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
////		{
////			Child = Parent * 2;
////			if ((Child != H->Size) && (H->DataForHuffman[Child] > H->DataForHuffman[Child + 1]))
////				Child++;//Childָ�������ӽ��Ľ�С��
////			if (X <= H->DataForHuffman[Child])
////				break;//�ҵ��˺���λ��
////			else
////				H->Data[Parent] = H->Data[Child];//����X
////		}
////		H->DataForHuffman[Parent] = X;
////		return MinItem;
////	}
////	else
////		return NULL;
////}
////
////void InsertForHuffman(MinHeap H, HuffmanTree X)
////{//��Ԫ��X������С��H������H->Data[0]�Ѿ�����Ϊ�ڱ�
////	int i;
////	if (!IsFull(H))
////	{
////		i = ++H->Size;
////		for (; H->DataForHuffman[i / 2] > X; i /= 2)
////			H->DataForHuffman[i] = H->DataForHuffman[i / 2];
////		H->DataForHuffman[i] = X;
////	}
////}
////
////HuffmanTree Huffman(MinHeap H)
////{
////	int i, N;//��С��Ԫ������ΪHuffmanTree
////	//Ȩֵ�Ѵ����H->DataForHuffman[]->Weight��
////	HuffmanTree T;
////	BuildMinHeap(H);//��H->DataForHuffman[]��ȨֵWeight����Ϊ��С��
////	N = H->Size;
////	for (i = 1; i < N; i++)
////	{//��H->Size-1�κϲ�
////		T = (HuffmanTree)malloc(sizeof(struct HTNode));//�����½��
////		T->Left = DeletMinForHuffman(H);//��С��ɾ��һ����㣬��Ϊ��T�����ӽ��
////		T->Right = DeletMinForHuffman(H);//��С��ɾ��һ����㣬��Ϊ��T�����ӽ��
////		T->Weight = T->Left->Weight + T->Right->Weight;//������Ȩֵ
////		InsertForHuffman(H, T);//��T������С��
////	}
////	return DeletMinForHuffman(H);//��С�������һ��Ԫ�ؼ�Ϊָ��Huffman��������ָ��
////}
//
////#define MaxSize 1001//�������Ԫ�ظ���
////typedef int SetName;//Ĭ���ø������±���Ϊ��������
////typedef ElementType SetType[MaxSize];
////
////SetName Find(SetType S, ElementType X)//����ĳԪ����������
////{
////	for (; S[X] > 0; X = S[X]);
////	return X;
////}
////void Union(SetType S, SetName Root1, SetName Root2)//���Ⱥϲ�
////{//��������Ӧ�±��⣬�������±��Ӧ�����ֵΪ�ý��ĸ�����±�
////  Ĭ��Root1��Root2Ϊ��ͬ���ϸ����
////	if (S[Root2] < S[Root1])//�������2�Ƚϴ�
////	{//S[Root]��ֵΪ������Ԫ�ظ������෴��
////		S[Root2] += S[Root1];//����1���뼯��2
////		S[Root1] = Root2;
////	}
////	else//�������1�Ƚϴ�
////	{
////		S[Root1] += S[Root2];//����2���뼯��1
////		S[Root2] = Root1;
////	}
////}
////
////SetName Find(SetType S, ElementType X)//�ݹ齫X�ĸ�����ֵS[X]����Ϊ���䵱ǰ�����S[X]ִ��Find�Ľ��
////{//ʹ��X�����ڵ�·�������н���Ϊ���ڵ���ӽ��
////	if (S[X] < 0)//�ҵ����ϵĸ�
////		return X;
////	else
////		return S[X] = Find(S, S[X]);//·��ѹ��
////}