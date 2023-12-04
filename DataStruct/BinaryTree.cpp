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
////	if (!BT) return; /* 若是空树则直接返回 */
////
////	Q = CreatQueue(); /* 创建空队列Q */
////	AddQ(Q, BT);
////	while (!IsEmpty(Q)) {
////		T = DeleteQ(Q);
////		printf("%d ", T->Data); /* 访问取出队列的结点 */
////		if (T->Left)   AddQ(Q, T->Left);
////		if (T->Right)  AddQ(Q, T->Right);
////	}
////}
//
////Position FindMin(BinTree BST)
////{
////	if (!BST)
////		return NULL;//树空，返回NULL
////	else if (!BST->Left)
////		return BST;//找到最左端点，返回
////	else
////		return FindMin(BST->Left);//递归查找左分支
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
////	if (!BST)//若原树为空，生成并返回一个结点的二叉搜索树
////	{
////		BST = (BinTree)malloc(sizeof(struct TNode));
////		BST->Data = X;
////		BST->Left = BST->Right = NULL;
////	}
////	else//找插入位置
////	{
////		if (X < BST->Data)//递归插入左子树
////			BST->Left = Insert(BST->Left, X);
////		else if (X > BST->Data)//递归插入右子树
////			BST->Right = Insert(BST->Right, X);
////	}
////	return BST;
////}
////
////BinTree Delete(BinTree BST, ElementType X)
////{
////	Position Tmp;//存储用于替代的结点的信息
////	if (BST)
////	{
////		if (X < BST->Data)
////			BST->Left = Delete(BST->Left, X);//从左子树递归删除
////		else if (X > BST->Data)
////			BST->Right = Delete(BST->Right, X);//从右子树递归删除
////		else//BST为要删除的结点
////		{
////			if (BST->Left && BST->Right)//有左右子结点
////			{
////				Tmp = FindMin(BST->Right);//找左子树最大或右子树最小，此为右子树最小
////				BST->Data = Tmp->Data;
////				BST->Right = Delete(BST->Right, BST->Data);//从右子树中删除最小元素
////			}
////			else//被删除结点有一个或无子结点
////			{
////				Tmp = BST;
////				if (!BST->Left)//只有右孩子或无子结点
////					BST = BST->Right;
////				else//只有左结点
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
////AVLTree SingleLeftRotation(AVLTree A)//A必须有一个左子结点B
////{
////	//将A与B做左单旋，更新A与B的高度，返回新的根结点B
////	AVLTree B = A->Left;
////	A->Left = B->Right;
////	B->Right = A;
////	A->Height = Max(GetHeight(A->Left), GetHeight(A->Right)) + 1;
////	B->Height = Max(GetHeight(B->Left), A->Height) + 1;
////	return B;
////}
////
////AVLTree SingleRightRotation(AVLTree A)//A必须有一个右子结点B
////{
////	//将A与B做右单旋，更新A与B的高度，返回新的根结点B
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
////	//插得在左子树的右子树上，所以先对左子树进行RR旋转，再对整个进行LL旋转
////	A->Left = SingleRightRotation(A->Left);
////	return SingleLeftRotation(A);
////}
////
////AVLTree DoubleRightLeftRotation(AVLTree A)
////{
////	//插得在右子树的左子树上，所以先对右子树进行LL旋转，再对整个进行RR旋转
////	A->Right = SingleLeftRotation(A->Right);
////	return SingleRightRotation(A);
////}
////
////AVLTree Insert(AVLTree T, ElementType X)//将X插入AVL树T中，并且返回调整后的AVL树
////{
////	if (!T)//插入空树
////	{
////		T = (AVLTree)malloc(sizeof(struct AVLNode));
////		T->Data = X;
////		T->Height = 0;
////		T->Left = T->Right = NULL;
////	}
////	else if (X < T->Data)//插入左子树
////	{
////		T->Left = Insert(T->Left, X);
////		if (GetHeight(T->Left) - GetHeight(T->Right) == 2)//需要左旋
////		{
////			if (X < T->Left->Data)//LL旋转
////				T = SingleLeftRotation(T);
////			else//LR旋转
////				T = DoubleLeftRightRotation(T);
////		}
////	}
////	else if (X > T->Data)//插入右子树
////	{
////		T->Right = Insert(T->Right, X);
////		if (GetHeight(T->Left) - GetHeight(T->Right) == -2)//需要右旋
////		{
////			if (X > T->Right->Data)//RR旋转
////				T = SingleRightRotation(T);
////			else//RL旋转
////				T = DoubleRightLeftRotation(T);
////		}
////	}
////	else//无需插入
////		X == T->Data;
////	T->Height = Max(GetHeight(T->Left), GetHeight(T->Right)) + 1;//更新树高
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
////{//将元素X插入最大堆H，其中H->Data[0]已经定义为哨兵
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
////{//将元素X插入最小堆H，其中H->Data[0]已经定义为哨兵
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
////	//下滤：将H中以H->Data[p]为根的子堆调整为最大堆
////	int Parent, Child;
////	ElementType X;
////	X = H->Data[p];
////	for (Parent = p; Parent * 2 <= H->Size; Parent = Child)
////	{
////		Child = Parent * 2;
////		if ((Child != H->Size) && (H->Data[Child] < H->Data[Child + 1]))
////			Child++;//Child指向左右子结点的较大者
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
////	//下滤：将H中以H->Data[p]为根的子堆调整为最小堆
////	int Parent, Child;
////	ElementType X;
////	X = H->Data[p];
////	for (Parent = p; Parent * 2 <= H->Size; Parent = Child)
////	{
////		Child = Parent * 2;
////		if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
////			Child++;//Child指向左右子结点的较小者
////		if (X <= H->Data[Child])
////			break;
////		else
////			H->Data[Parent] = H->Data[Child];
////	}
////	H->Data[Parent] = X;
////}
////
////void BuildMaxHeap(MaxHeap H)//建造最大堆
////{
////	//调整H->Data[]中的元素，使满足最大堆的有序性
////	//假设所有H->Size个元素已经存在H->Data[]中
////	int i;
////	for (i = H->Size / 2; i > 0; i--)
////		PercDownMaxHeap(H, i);
////}
////
////void BuildMinHeap(MinHeap H)//建造最小堆
////{
////	//调整H->Data[]中的元素，使满足最小堆的有序性
////	//假设所有H->Size个元素已经存在H->Data[]中
////	int i;
////	for (i = H->Size / 2; i > 0; i--)
////		PercDownMinHeap(H, i);
////}
////
////ElementType DeleteMax(MaxHeap H)
////{	//从最大堆H中取出键值为最大的元素，并删除一个结点
////	int Parent, Child;
////	ElementType MaxItem, X;
////	if (!IsEmpty(H))
////	{
////		MaxItem = H->Data[1];//取出根结点存放的最大值
////		X = H->Data[H->Size--];//用最大堆中最后一个元素从根结点开始向上过滤下层结点,当前堆的规模要减小
////		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
////		{
////			Child = Parent * 2;
////			if ((Child != H->Size) && (H->Data[Child] < H->Data[Child + 1]))
////				Child++;//Child指向左右子结点的较大者
////			if (X >= H->Data[Child])
////				break;//找到了合适位置
////			else
////				H->Data[Parent] = H->Data[Child];//下滤X
////		}
////		H->Data[Parent] = X;
////		return MaxItem;
////	}
////	else
////		return Error;
////}
////
////ElementType DeletMin(MinHeap H)
////{	//从最小堆H中取出键值为最小的元素，并删除一个结点
////	int Parent, Child;
////	ElementType MinItem, X;
////	if (!IsEmpty(H))
////	{
////		MinItem = H->Data[1];//取出根结点存放的最小值
////		X = H->Data[H->Size--];//用最小堆中最后一个元素从根结点开始向上过滤下层结点,当前堆的规模要减小
////		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
////		{
////			Child = Parent * 2;
////			if ((Child != H->Size) && (H->Data[Child] > H->Data[Child + 1]))
////				Child++;//Child指向左右子结点的较小者
////			if (X <= H->Data[Child])
////				break;//找到了合适位置
////			else
////				H->Data[Parent] = H->Data[Child];//下滤X
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
////	int Weight;//权重
////	HuffmanTree Left;
////	HuffmanTree Right;
////};
////
////HuffmanTree DeletMinForHuffman(MinHeap H)
////{	//从最小堆H中取出键值为最小的元素，并删除一个结点
////	int Parent, Child;
////	HuffmanTree MinItem, X;
////	if (!IsEmpty(H))
////	{
////		MinItem = H->DataForHuffman[1];//取出根结点存放的最小值
////		X = H->DataForHuffman[H->Size--];//用最小堆中最后一个元素从根结点开始向上过滤下层结点,当前堆的规模要减小
////		for (Parent = 1; Parent * 2 <= H->Size; Parent = Child)
////		{
////			Child = Parent * 2;
////			if ((Child != H->Size) && (H->DataForHuffman[Child] > H->DataForHuffman[Child + 1]))
////				Child++;//Child指向左右子结点的较小者
////			if (X <= H->DataForHuffman[Child])
////				break;//找到了合适位置
////			else
////				H->Data[Parent] = H->Data[Child];//下滤X
////		}
////		H->DataForHuffman[Parent] = X;
////		return MinItem;
////	}
////	else
////		return NULL;
////}
////
////void InsertForHuffman(MinHeap H, HuffmanTree X)
////{//将元素X插入最小堆H，其中H->Data[0]已经定义为哨兵
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
////	int i, N;//最小堆元素类型为HuffmanTree
////	//权值已存放在H->DataForHuffman[]->Weight中
////	HuffmanTree T;
////	BuildMinHeap(H);//将H->DataForHuffman[]按权值Weight调整为最小堆
////	N = H->Size;
////	for (i = 1; i < N; i++)
////	{//做H->Size-1次合并
////		T = (HuffmanTree)malloc(sizeof(struct HTNode));//创建新结点
////		T->Left = DeletMinForHuffman(H);//最小堆删除一个结点，作为新T的左子结点
////		T->Right = DeletMinForHuffman(H);//最小堆删除一个结点，作为新T的右子结点
////		T->Weight = T->Left->Weight + T->Right->Weight;//计算新权值
////		InsertForHuffman(H, T);//新T插入最小堆
////	}
////	return DeletMinForHuffman(H);//最小堆中最后一个元素即为指向Huffman树根结点的指针
////}
//
////#define MaxSize 1001//集合最大元素个数
////typedef int SetName;//默认用根结点的下标作为集合名称
////typedef ElementType SetType[MaxSize];
////
////SetName Find(SetType S, ElementType X)//查找某元素所属集合
////{
////	for (; S[X] > 0; X = S[X]);
////	return X;
////}
////void Union(SetType S, SetName Root1, SetName Root2)//按秩合并
////{//除根结点对应下标外，其余结点下标对应数组的值为该结点的父结点下标
////  默认Root1和Root2为不同集合根结点
////	if (S[Root2] < S[Root1])//如果集合2比较大
////	{//S[Root]的值为集合中元素个数的相反数
////		S[Root2] += S[Root1];//集合1并入集合2
////		S[Root1] = Root2;
////	}
////	else//如果集合1比较大
////	{
////		S[Root1] += S[Root2];//集合2并入集合1
////		S[Root2] = Root1;
////	}
////}
////
////SetName Find(SetType S, ElementType X)//递归将X的父结点的值S[X]设置为对其当前父结点S[X]执行Find的结果
////{//使得X到根节点路径上所有结点成为根节点的子结点
////	if (S[X] < 0)//找到集合的根
////		return X;
////	else
////		return S[X] = Find(S, S[X]);//路径压缩
////}