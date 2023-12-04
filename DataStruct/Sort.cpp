//#include"head.h"
//void InsertionSort(ElementType A[], int N)
//{//插入排序
//	int P, i;
//	ElementType Tmp;
//	for (P = 1; P < N; P++)
//	{//取出未排序序列中的第P个元素,第一个无需排序,逐个遍历
//		Tmp = A[P];
//		for (i = P; i > 0 && A[i - 1] > Tmp; i--)
//			A[i] = A[i - 1];//依次与已排序序列中元素比较并右移
//		A[i] = Tmp;//放进合适的位置
//	}
//}
//
//void ShellSort(ElementType A[], int N)
//{//希尔排序，Sedgewick增量序列
//	int Si, D, P, i;
//	//Si Sedgewick序列的位置
//	ElementType Tmp;
//	int Sedgewick[] = { 929,505,209,109,41,19,5,1,0 };
//	for (Si = 0; Sedgewick[Si] >= N; Si++);
//	for (D = Sedgewick[Si]; D > 0; D = Sedgewick[++Si])
//	{//D为增量数值，每次for均减小，直至减至1
//		for (P = D; P < N; P++)//因增量为D，故遍历的头为D
//		{
//			Tmp = A[P];
//			for (i = P; i >= D && A[i - D] > Tmp; i -= D)
//				A[i] = A[i - D];//每隔D进行元素比较，并元素右移
//			A[i] = Tmp;//找到正确位置，将A[P]放入
//		}
//	}
//}
//
//void Swap(ElementType* a, ElementType* b)
//{
//	ElementType t = *a; *a = *b; *b = t;
//}
//
//void PercDown(ElementType A[], int p, int N)
//{ /* 改编代码4.24的PercDown( MaxHeap H, int p )    */
//  /* 将N个元素的数组中以A[p]为根的子堆调整为最大堆 */
//	int Parent, Child;
//	ElementType X;
//
//	X = A[p]; /* 取出根结点存放的值 */
//	for (Parent = p; (Parent * 2 + 1) < N; Parent = Child) {
//		Child = Parent * 2 + 1;
//		if ((Child != N - 1) && (A[Child] < A[Child + 1]))
//			Child++;  /* Child指向左右子结点的较大者 */
//		if (X >= A[Child]) break; /* 找到了合适位置 */
//		else  /* 下滤X */
//			A[Parent] = A[Child];
//	}
//	A[Parent] = X;
//}
//
//void HeapSort(ElementType A[], int N)
//{//堆排序
//	int i;
//	for (i = N / 2; i >= 0; i--)//i代表根结点位置
//		PercDown(A, i, N);//建立最大堆
//	for (i = N - 1; i > 0; i--)
//	{//因建立了初始堆，故交换后需要考虑的堆的规模已经为N-1，故i初值为N-1
//		Swap(&A[0], &A[i]);//将最大值放在当前数组的最后一个位置
//		//i可表征未排序好的数组的最后下标
//		PercDown(A, 0, i);//0为根结点位置，i为堆的规模
//	}
//}
//
//void Merge(ElementType A[], ElementType TmpA[], int L, int R, int RightEnd)
//{//L = 左边起始位置, R = 右边起始位置, RightEnd = 右边终点位置
//	//将有序的A[L]~A[R-1]和A[R]~A[RightEnd]归并成一个有序序列
//	int LeftEnd, NumElements, Tmp;
//	int i;
//	LeftEnd = R - 1;//左边终点位置
//	Tmp = L;//有序序列的起始位置
//	NumElements = RightEnd - L + 1;//元素总个数
//	while (L <= LeftEnd && R <= RightEnd)
//	{
//		if (A[L] <= A[R])
//			TmpA[Tmp++] = A[L++];//将左边元素复制到TmpA
//		else
//			TmpA[Tmp++] = A[R++];//将右边元素复制到TmpA
//	}
//	while(L<=LeftEnd)
//		TmpA[Tmp++] = A[L++];//直接复制左边剩下的
//	while (R <= RightEnd)
//		TmpA[Tmp++] = A[R++];//直接复制右边剩下的
//	for (i = 0; i < NumElements; i++, RightEnd--)
//		A[RightEnd] = TmpA[RightEnd];//将有序的TmpA[]复制回A[]
//}
//
//void MSort(ElementType A[], ElementType TmpA[], int L, int RightEnd)
//{
//	int Center;
//	if (L < RightEnd)
//	{
//		Center = (L + RightEnd) / 2;
//		MSort(A, TmpA, L, Center);//递归解决左边
//		MSort(A, TmpA, Center + 1, RightEnd);//递归解决右边
//		Merge(A, TmpA, L, Center + 1, RightEnd);//合并两段有序序列
//	}
//}
//
//void MergeSort(ElementType A[], int N)
//{
//	ElementType* TmpA;
//	TmpA = (ElementType*)malloc(sizeof(ElementType) * N);
//	if (!TmpA)
//	{
//		MSort(A, TmpA, 0, N - 1);
//		free(TmpA);
//	}
//}
//
//void MergePass(ElementType A[], ElementType TmpA[], int N, int length)
//{
//	int  i, j;
//	for (i = 0; i <= N - 2 * length; i += 2 * length)
//		//两两归并相邻有序子列
//		Merge(A, TmpA, i, i + length, i + 2 * length - 1);
//	if (i + length < N)//归并最后2个子列
//		Merge(A, TmpA, i, i + length, N - 1);
//	else//最后只剩1个子列
//		for (j = i; j < N; j++)
//			TmpA[j] = A[j];//反拷贝回合并后数组
//}
//
//void Merge_Sort(ElementType A[], int N)
//{
//	int length;
//	ElementType* TmpA;
//	length = 1;//初始化子序列长度
//	TmpA = (ElementType*)malloc(sizeof(ElementType) * N);
//	if (!TmpA)
//	{
//		while (length < N)
//		{
//			MergePass(A, TmpA, N, length);
//			length *= 2;
//			MergePass(TmpA, A, N, length);
//			length *= 2;
//		}
//		free(TmpA);
//	}
//}
//
//ElementType Median(ElementType A[], int Left, int Right)
//{
//	int Center = (Left + Right) / 2;
//	if (A[Left] > A[Center])
//		Swap(&A[Left], &A[Center]);
//	if (A[Left] > A[Right])
//		Swap(&A[Left], &A[Right]);
//	if (A[Center] > A[Right])
//		Swap(&A[Center], &A[Right]);
//	//此时A[Left] <= A[Center] <= A[Right]
//	Swap(&A[Center], &A[Right - 1]);
//	//将基准Pivot藏到右边
//	//Left为最小，Right-1为最大，
//	//子集划分不用考虑左右元素，只需要考虑A[Left+1] … A[Right-2]
//	return A[Right - 1];
//}
//
//void Qsort(ElementType A[], int Left, int Right)
//{
//	int Pivot, CutOff, Low, High;
//	if (CutOff <= Right - Left)//如果序列元素充分多，进入快排
//	{
//		Pivot = Median(A, Left, Right);
//		Low = Left;
//		High = Right - 1;
//		while (1)
//		{
//			while (A[++Low] < Pivot);
//			while (A[--High] > Pivot);
//			//此时A[Low]>=Pivot>=A[High]
//			if (Low < High)
//				Swap(&A[Low], &A[High]);
//			else
//				break;
//		}
//		Swap(&A[Low], &A[Right - 1]);
//		//此时A[Low]为Pivot的最终位置
//		Qsort(A, Left, Low - 1);//递归解决Pivot左边
//		Qsort(A, Low + 1, Right);//递归解决Pivot右边
//	}
//	else
//		InsertionSort(A + Left, Right - Left + 1);//元素太少，用简单排序
//}
//
//void QuickSort(ElementType A[], int N)
//{//统一接口
//	Qsort(A, 0, N - 1);
//}
//
//#define MaxDigit 4
//#define Radix 10
//typedef struct Node* PtrToNode;
//struct Node
//{
//	int key;
//	PtrToNode next;
//};
//struct HeadNode//桶头结点
//{
//	PtrToNode head, tail;
//};
//typedef struct HeadNode Bucket[Radix];
//
//int GetDigit(int X, int D)
//{
//	//默认次位D=1, 主位D<=MaxDigit
//	int d, i;
//	for (i = 1; i <= D; i++)
//	{
//		d = X % Radix;
//		X /= Radix;
//	}
//	return d;//d为当前关键字
//}
//
//void LSDSort(ElementType A[], int N)
//{//均为头插
//	int D, Di, i;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	for (i = 0; i < Radix; i++)
//		B[i].head = B[i].tail = NULL;
//	for (i = 0; i < N; i++)
//	{//将原始序列逆序存入初始链表List
//		tmp = (PtrToNode)malloc(sizeof(struct Node));
//		tmp->key = A[i];
//		tmp->next = List;
//		List = tmp;
//	}
//	for (D = 1; D <= MaxDigit; D++)//开始排序,对数据的每一位循环处理
//	{
//		p = List;
//		while (p)
//		{
//			Di = GetDigit(p->key, D);//获得当前元素的当前位数字
//			tmp = p;
//			p = p->next;
//			tmp->next = NULL;
//			//从List中摘除,插入B[Di]号桶尾
//			if (B[i].head == NULL)//当桶空时
//				B[Di].head = B[Di].tail = tmp;
//			else
//			{
//				B[Di].tail->next = tmp;
//				B[Di].tail = tmp;
//			}
//		}
//		List = NULL;
//		for (Di = Radix - 1; Di >= 0; D--)//将每个桶的元素顺序收集入List
//		{
//			if (B[Di].head)
//			{//如果桶不为空,整桶插入List表头
//				B[Di].tail->next = List;
//				List = B[Di].head;
//				B[Di].head = B[Di].tail = NULL;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{//将List倒入A[]并释放空间
//		tmp = List;
//		List = List->next;
//		A[i] = tmp->key;
//		free(tmp);
//	}
//}
//
//void MSD(ElementType A[], int L, int R, int D)
////主位优先，即先建几个主桶，各个主桶进行排序，再把主桶合起来
//{//核心递归函数: 对A[L]...A[R]的第D位数进行排序
//	int Di, i, j;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	if (D == 0)
//		return;//递归终止条件
//	for (i = 0; i < Radix; i++)
//		B[i].head = B[i].tail = NULL;
//	for (i = L; i <= R; i++)
//	{
//		tmp = (PtrToNode)malloc(sizeof(struct Node));
//		tmp->key = A[i];
//		tmp->next = List;
//		List = tmp;
//	}
//	p = List;
//	while (p) {
//		Di = GetDigit(p->key, D); /* 获得当前元素的当前位数字 */
//		 //从List中摘除,插入B[Di]号桶 
//		tmp = p; 
//		p = p->next;
//		if (B[Di].head == NULL)
//			B[Di].tail = tmp;
//		tmp->next = B[Di].head;
//		B[Di].head = tmp;
//	}
//	i = j = L;//i, j记录当前要处理的A[]的左右端下标
//	for (Di = 0; Di < Radix; Di++)
//	{//对于每个桶,将非空的桶整桶倒入A[], 递归排序
//		if (B[Di].head)
//		{
//			p = B[Di].head;
//			while (p)
//			{
//				tmp = p;
//				p = p->next;
//				A[j++] = tmp->key;
//				free(tmp);
//			}
//			MSD(A, i, j - 1, D - 1);//递归对该桶数据排序, 位数减1
//			i = j;//为下一个桶对应的A[]左端
//		}
//	}
//}
//
//void MSDSort(ElementType A[], int N)
//{
//	MSD(A, 0, N - 1, MaxDigit);
//}
