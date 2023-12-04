//#include"head.h"
//void InsertionSort(ElementType A[], int N)
//{//��������
//	int P, i;
//	ElementType Tmp;
//	for (P = 1; P < N; P++)
//	{//ȡ��δ���������еĵ�P��Ԫ��,��һ����������,�������
//		Tmp = A[P];
//		for (i = P; i > 0 && A[i - 1] > Tmp; i--)
//			A[i] = A[i - 1];//������������������Ԫ�رȽϲ�����
//		A[i] = Tmp;//�Ž����ʵ�λ��
//	}
//}
//
//void ShellSort(ElementType A[], int N)
//{//ϣ������Sedgewick��������
//	int Si, D, P, i;
//	//Si Sedgewick���е�λ��
//	ElementType Tmp;
//	int Sedgewick[] = { 929,505,209,109,41,19,5,1,0 };
//	for (Si = 0; Sedgewick[Si] >= N; Si++);
//	for (D = Sedgewick[Si]; D > 0; D = Sedgewick[++Si])
//	{//DΪ������ֵ��ÿ��for����С��ֱ������1
//		for (P = D; P < N; P++)//������ΪD���ʱ�����ͷΪD
//		{
//			Tmp = A[P];
//			for (i = P; i >= D && A[i - D] > Tmp; i -= D)
//				A[i] = A[i - D];//ÿ��D����Ԫ�رȽϣ���Ԫ������
//			A[i] = Tmp;//�ҵ���ȷλ�ã���A[P]����
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
//{ /* �ı����4.24��PercDown( MaxHeap H, int p )    */
//  /* ��N��Ԫ�ص���������A[p]Ϊ�����Ӷѵ���Ϊ���� */
//	int Parent, Child;
//	ElementType X;
//
//	X = A[p]; /* ȡ��������ŵ�ֵ */
//	for (Parent = p; (Parent * 2 + 1) < N; Parent = Child) {
//		Child = Parent * 2 + 1;
//		if ((Child != N - 1) && (A[Child] < A[Child + 1]))
//			Child++;  /* Childָ�������ӽ��Ľϴ��� */
//		if (X >= A[Child]) break; /* �ҵ��˺���λ�� */
//		else  /* ����X */
//			A[Parent] = A[Child];
//	}
//	A[Parent] = X;
//}
//
//void HeapSort(ElementType A[], int N)
//{//������
//	int i;
//	for (i = N / 2; i >= 0; i--)//i��������λ��
//		PercDown(A, i, N);//��������
//	for (i = N - 1; i > 0; i--)
//	{//�����˳�ʼ�ѣ��ʽ�������Ҫ���ǵĶѵĹ�ģ�Ѿ�ΪN-1����i��ֵΪN-1
//		Swap(&A[0], &A[i]);//�����ֵ���ڵ�ǰ��������һ��λ��
//		//i�ɱ���δ����õ����������±�
//		PercDown(A, 0, i);//0Ϊ�����λ�ã�iΪ�ѵĹ�ģ
//	}
//}
//
//void Merge(ElementType A[], ElementType TmpA[], int L, int R, int RightEnd)
//{//L = �����ʼλ��, R = �ұ���ʼλ��, RightEnd = �ұ��յ�λ��
//	//�������A[L]~A[R-1]��A[R]~A[RightEnd]�鲢��һ����������
//	int LeftEnd, NumElements, Tmp;
//	int i;
//	LeftEnd = R - 1;//����յ�λ��
//	Tmp = L;//�������е���ʼλ��
//	NumElements = RightEnd - L + 1;//Ԫ���ܸ���
//	while (L <= LeftEnd && R <= RightEnd)
//	{
//		if (A[L] <= A[R])
//			TmpA[Tmp++] = A[L++];//�����Ԫ�ظ��Ƶ�TmpA
//		else
//			TmpA[Tmp++] = A[R++];//���ұ�Ԫ�ظ��Ƶ�TmpA
//	}
//	while(L<=LeftEnd)
//		TmpA[Tmp++] = A[L++];//ֱ�Ӹ������ʣ�µ�
//	while (R <= RightEnd)
//		TmpA[Tmp++] = A[R++];//ֱ�Ӹ����ұ�ʣ�µ�
//	for (i = 0; i < NumElements; i++, RightEnd--)
//		A[RightEnd] = TmpA[RightEnd];//�������TmpA[]���ƻ�A[]
//}
//
//void MSort(ElementType A[], ElementType TmpA[], int L, int RightEnd)
//{
//	int Center;
//	if (L < RightEnd)
//	{
//		Center = (L + RightEnd) / 2;
//		MSort(A, TmpA, L, Center);//�ݹ������
//		MSort(A, TmpA, Center + 1, RightEnd);//�ݹ����ұ�
//		Merge(A, TmpA, L, Center + 1, RightEnd);//�ϲ�������������
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
//		//�����鲢������������
//		Merge(A, TmpA, i, i + length, i + 2 * length - 1);
//	if (i + length < N)//�鲢���2������
//		Merge(A, TmpA, i, i + length, N - 1);
//	else//���ֻʣ1������
//		for (j = i; j < N; j++)
//			TmpA[j] = A[j];//�������غϲ�������
//}
//
//void Merge_Sort(ElementType A[], int N)
//{
//	int length;
//	ElementType* TmpA;
//	length = 1;//��ʼ�������г���
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
//	//��ʱA[Left] <= A[Center] <= A[Right]
//	Swap(&A[Center], &A[Right - 1]);
//	//����׼Pivot�ص��ұ�
//	//LeftΪ��С��Right-1Ϊ���
//	//�Ӽ����ֲ��ÿ�������Ԫ�أ�ֻ��Ҫ����A[Left+1] �� A[Right-2]
//	return A[Right - 1];
//}
//
//void Qsort(ElementType A[], int Left, int Right)
//{
//	int Pivot, CutOff, Low, High;
//	if (CutOff <= Right - Left)//�������Ԫ�س�ֶ࣬�������
//	{
//		Pivot = Median(A, Left, Right);
//		Low = Left;
//		High = Right - 1;
//		while (1)
//		{
//			while (A[++Low] < Pivot);
//			while (A[--High] > Pivot);
//			//��ʱA[Low]>=Pivot>=A[High]
//			if (Low < High)
//				Swap(&A[Low], &A[High]);
//			else
//				break;
//		}
//		Swap(&A[Low], &A[Right - 1]);
//		//��ʱA[Low]ΪPivot������λ��
//		Qsort(A, Left, Low - 1);//�ݹ���Pivot���
//		Qsort(A, Low + 1, Right);//�ݹ���Pivot�ұ�
//	}
//	else
//		InsertionSort(A + Left, Right - Left + 1);//Ԫ��̫�٣��ü�����
//}
//
//void QuickSort(ElementType A[], int N)
//{//ͳһ�ӿ�
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
//struct HeadNode//Ͱͷ���
//{
//	PtrToNode head, tail;
//};
//typedef struct HeadNode Bucket[Radix];
//
//int GetDigit(int X, int D)
//{
//	//Ĭ�ϴ�λD=1, ��λD<=MaxDigit
//	int d, i;
//	for (i = 1; i <= D; i++)
//	{
//		d = X % Radix;
//		X /= Radix;
//	}
//	return d;//dΪ��ǰ�ؼ���
//}
//
//void LSDSort(ElementType A[], int N)
//{//��Ϊͷ��
//	int D, Di, i;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	for (i = 0; i < Radix; i++)
//		B[i].head = B[i].tail = NULL;
//	for (i = 0; i < N; i++)
//	{//��ԭʼ������������ʼ����List
//		tmp = (PtrToNode)malloc(sizeof(struct Node));
//		tmp->key = A[i];
//		tmp->next = List;
//		List = tmp;
//	}
//	for (D = 1; D <= MaxDigit; D++)//��ʼ����,�����ݵ�ÿһλѭ������
//	{
//		p = List;
//		while (p)
//		{
//			Di = GetDigit(p->key, D);//��õ�ǰԪ�صĵ�ǰλ����
//			tmp = p;
//			p = p->next;
//			tmp->next = NULL;
//			//��List��ժ��,����B[Di]��Ͱβ
//			if (B[i].head == NULL)//��Ͱ��ʱ
//				B[Di].head = B[Di].tail = tmp;
//			else
//			{
//				B[Di].tail->next = tmp;
//				B[Di].tail = tmp;
//			}
//		}
//		List = NULL;
//		for (Di = Radix - 1; Di >= 0; D--)//��ÿ��Ͱ��Ԫ��˳���ռ���List
//		{
//			if (B[Di].head)
//			{//���Ͱ��Ϊ��,��Ͱ����List��ͷ
//				B[Di].tail->next = List;
//				List = B[Di].head;
//				B[Di].head = B[Di].tail = NULL;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{//��List����A[]���ͷſռ�
//		tmp = List;
//		List = List->next;
//		A[i] = tmp->key;
//		free(tmp);
//	}
//}
//
//void MSD(ElementType A[], int L, int R, int D)
////��λ���ȣ����Ƚ�������Ͱ��������Ͱ���������ٰ���Ͱ������
//{//���ĵݹ麯��: ��A[L]...A[R]�ĵ�Dλ����������
//	int Di, i, j;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	if (D == 0)
//		return;//�ݹ���ֹ����
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
//		Di = GetDigit(p->key, D); /* ��õ�ǰԪ�صĵ�ǰλ���� */
//		 //��List��ժ��,����B[Di]��Ͱ 
//		tmp = p; 
//		p = p->next;
//		if (B[Di].head == NULL)
//			B[Di].tail = tmp;
//		tmp->next = B[Di].head;
//		B[Di].head = tmp;
//	}
//	i = j = L;//i, j��¼��ǰҪ�����A[]�����Ҷ��±�
//	for (Di = 0; Di < Radix; Di++)
//	{//����ÿ��Ͱ,���ǿյ�Ͱ��Ͱ����A[], �ݹ�����
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
//			MSD(A, i, j - 1, D - 1);//�ݹ�Ը�Ͱ��������, λ����1
//			i = j;//Ϊ��һ��Ͱ��Ӧ��A[]���
//		}
//	}
//}
//
//void MSDSort(ElementType A[], int N)
//{
//	MSD(A, 0, N - 1, MaxDigit);
//}
