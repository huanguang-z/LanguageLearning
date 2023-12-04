//#include"head.h"
//#define MaxVertexNum 101
//#define INFINITY 65535
//typedef int Vertex;
//typedef int WeightType;
//typedef char DataType;//����洢����������
//typedef struct ENode* PtrToENode;
//typedef PtrToENode Edge;
//typedef struct MatrixGNode* PtrToMatrixGNode;
//typedef PtrToMatrixGNode MGraph;
//struct ENode
//{
//	Vertex V1, V2;//�����<V1, V2>
//	WeightType Weight;//Ȩ��
//};
//struct MatrixGNode
//{
//	int NumOfVertex;
//	int NumOfEdge;
//	WeightType G[MaxVertexNum][MaxVertexNum];//�ڽӾ���
//	DataType Data[MaxVertexNum];//���������
//};
//
//
//typedef struct AdjVNode* PtrToAdjVNode;//�ڽӵ�
//struct AdjVNode
//{
//	Vertex AdjV;//�ڽӵ��±�
//	WeightType Weight;//��Ȩ��
//	PtrToAdjVNode Next;//ָ����һ���ڽӵ��ָ��
//};
//typedef struct LFirstNode //�����ͷ���Ķ���
//{
//	PtrToAdjVNode FirstEdge;//�߱�ͷָ��
//	DataType Data;
//}AdjList[MaxVertexNum];//AdjList���ڽӱ�����
//typedef struct AdjGNode* PtrToAdjGNode;//ͼ���
//typedef PtrToAdjGNode LGraph;
//struct AdjGNode
//{
//	int NumOfVertex;
//	int NumOfEdge;
//	AdjList G;//�ڽӱ�
//};
//
//
//MGraph CreateMatrixGraph(int VertexNum)
//{
//	Vertex V, W;
//	MGraph Graph;
//	Graph = (MGraph)malloc(sizeof(struct MatrixGNode));
//	Graph->NumOfVertex = VertexNum;
//	Graph->NumOfEdge = 0;
//	for (V = 0; V < Graph->NumOfVertex; V++)//��ʼ���ڽӾ���
//		for (W = 0; W < Graph->NumOfVertex; W++)
//			Graph->G[V][W] = INFINITY;
//	return Graph;
//}
//
//LGraph CreateAdjGraph(int VertexNum)
//{
//	Vertex V;
//	LGraph Graph;
//	Graph = (LGraph)malloc(sizeof(struct AdjGNode));
//	Graph->NumOfEdge = 0;
//	Graph->NumOfVertex = VertexNum;
//	for (V = 0; V < Graph->NumOfVertex; V++)
//		Graph->G[V].FirstEdge = NULL;
//	return Graph;
//}
//
//void InsertMGraphEdge(MGraph Graph, Edge E)
//{
//	Graph->G[E->V1][E->V2] = E->Weight;//����� <V1, V2>
//	Graph->G[E->V2][E->V1] = E->Weight;//����ͼ�����<V2, V1>
//}
//
//void InsertAdjGraphEdge(LGraph Graph, Edge E)
//{
//	PtrToAdjVNode NewNode;
//	//����� <V1, V2>,ΪV2�����µ��ڽӵ�
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V2;
//	NewNode->Weight = E->Weight;//NewNodeΪV2
//	NewNode->Next = Graph->G[E->V1].FirstEdge;//��V2����V1�ı�ͷ
//	Graph->G[E->V1].FirstEdge = NewNode;
//	//����ͼ,����� <V2, V1>,ΪV1�����µ��ڽӵ�
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V1;
//	NewNode->Weight = E->Weight;//NewNodeΪV1
//	NewNode->Next = Graph->G[E->V2].FirstEdge;//��V1����V2�ı�ͷ
//	Graph->G[E->V2].FirstEdge = NewNode;
//}
//
//MGraph BuildMatrixGraph()
//{
//	MGraph Graph;
//	Edge E;
//	Vertex V;
//	int NumVertex, i;
//	scanf("%d", &NumVertex);
//	Graph = CreateMatrixGraph(NumVertex); //��ʼ����NumVertex�����㵫û�бߵ�ͼ
//	scanf("%d", &(Graph->NumOfEdge));
//	if (!Graph->NumOfEdge)
//	{
//		E = (Edge)malloc(sizeof(struct ENode));
//		for (i = 0; i < Graph->NumOfEdge; i++)
//		{//����ߣ���ʽΪ"��� �յ� Ȩ��"�������ڽӾ���
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			InsertMGraphEdge(Graph, E);
//		}
//	}
//	for (V = 0; V < Graph->NumOfVertex; i++)//������������ݵĻ�����������
//		scanf("% c", &(Graph->Data[V]));
//	return Graph;
//}
//
//LGraph BuildAdjGraph()
//{
//	LGraph Graph;
//	Edge E;
//	Vertex V;
//	int NumVertex, i;
//	scanf("%d", &NumVertex);
//	Graph = CreateAdjGraph(NumVertex);//��ʼ����NumVertex�����㵫û�бߵ�ͼ
//	scanf("%d", &(Graph->NumOfEdge));
//	if (!Graph->NumOfEdge)
//	{
//		E = (Edge)malloc(sizeof(struct ENode));
//		for (i = 0; i < Graph->NumOfEdge; i++)
//		{//����ߣ���ʽΪ"��� �յ� Ȩ��"�������ڽӾ���
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			InsertAdjGraphEdge(Graph, E);
//			InsertAdjGraphEdge(Graph, E);
//		}
//	}
//	for (V = 0; V < Graph->NumOfVertex; i++)//������������ݵĻ�����������
//		scanf("% c", &(Graph->G[V].Data));
//	return Graph;
//}
//
/////* �ڽӱ�洢��ͼ - DFS */
////
////void Visit(Vertex V)
////{
////	printf("���ڷ��ʶ���%d\n", V);
////}
////
/////* Visited[]Ϊȫ�ֱ������Ѿ���ʼ��Ϊfalse */
////void DFS(LGraph Graph, Vertex V, void (*Visit)(Vertex))
////{   /* ��VΪ��������ڽӱ�洢��ͼGraph����DFS���� */
////	PtrToAdjVNode W;
////
////	Visit(V); /* ���ʵ�V������ */
////	Visited[V] = true; /* ���V�ѷ��� */
////
////	for (W = Graph->G[V].FirstEdge; W; W = W->Next) /* ��V��ÿ���ڽӵ�W->AdjV */
////		if (!Visited[W->AdjV])    /* ��W->AdjVδ������ */
////			DFS(Graph, W->AdjV, Visit);    /* ��ݹ����֮ */
////}
//
/////* �ڽӾ���洢��ͼ - BFS */
////
/////* IsEdge(Graph, V, W)���<V, W>�Ƿ�ͼGraph�е�һ���ߣ���W�Ƿ�V���ڽӵ㡣  */
/////* �˺�������ͼ�Ĳ�ͬ����Ҫ����ͬ��ʵ�֣��ؼ�ȡ���ڶԲ����ڵıߵı�ʾ������*/
/////* �������Ȩͼ, ��������ڵı߱���ʼ��ΪINFINITY, ����ʵ������:         */
////bool IsEdge(MGraph Graph, Vertex V, Vertex W)
////{
////	return Graph->G[V][W] < INFINITY ? true : false;
////}
////
/////* Visited[]Ϊȫ�ֱ������Ѿ���ʼ��Ϊfalse */
////void BFS(MGraph Graph, Vertex S, void (*Visit)(Vertex))
////{   /* ��SΪ��������ڽӾ���洢��ͼGraph����BFS���� */
////	Queue Q;
////	Vertex V, W;
////
////	Q = CreateQueue(MaxSize); /* �����ն���, MaxSizeΪ�ⲿ����ĳ��� */
////	/* ���ʶ���S���˴��ɸ��ݾ��������Ҫ��д */
////	Visit(S);
////	Visited[S] = true; /* ���S�ѷ��� */
////	AddQ(Q, S); /* S����� */
////
////	while (!IsEmpty(Q)) {
////		V = DeleteQ(Q);  /* ����V */
////		for (W = 0; W < Graph->Nv; W++) /* ��ͼ�е�ÿ������W */
////			/* ��W��V���ڽӵ㲢��δ���ʹ� */
////			if (!Visited[W] && IsEdge(Graph, V, W)) {
////				/* ���ʶ���W */
////				Visit(W);
////				Visited[W] = true; /* ���W�ѷ��� */
////				AddQ(Q, W); /* W����� */
////			}
////	} /* while����*/
////}
//
/////* �ڽӱ�洢 - ��Ȩͼ�ĵ�Դ���·�㷨 */
////
/////* dist[]��path[]ȫ����ʼ��Ϊ-1 */
////void Unweighted(LGraph Graph, int dist[], int path[], Vertex S)
////{
////	Queue Q;
////	Vertex V;
////	PtrToAdjVNode W;
////
////	Q = CreateQueue(Graph->Nv); /* �����ն���, MaxSizeΪ�ⲿ����ĳ��� */
////	dist[S] = 0; /* ��ʼ��Դ�� */
////	AddQ(Q, S);
////
////	while (!IsEmpty(Q)) {
////		V = DeleteQ(Q);
////		for (W = Graph->G[V].FirstEdge; W; W = W->Next) /* ��V��ÿ���ڽӵ�W->AdjV */
////			if (dist[W->AdjV] == -1) { /* ��W->AdjVδ�����ʹ� */
////				dist[W->AdjV] = dist[V] + 1; /* W->AdjV��S�ľ������ */
////				path[W->AdjV] = V; /* ��V��¼��S��W->AdjV��·���� */
////				AddQ(Q, W->AdjV);
////			}
////	} /* while����*/
////}
//
//Vertex FindMinDist(MGraph Graph, int dist[], int collected[])
//{//����δ����¼������dist��С��
//	//dist[V]ָԴ�㵽V����̾���
//	Vertex MinV, V;
//	int MinDist = INFINITY;
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{
//		if (collected[V] == -1 && dist[V] < MinDist)
//		{//��Vδ����¼����dist[V]��С
//			MinDist = dist[V];
//			MinV = V;
//		}
//	}
//	if (MinDist < INFINITY)//�ҵ���Сdist
//		return MinV;
//	else
//		return -1;
//}
//void Dijkstra(MGraph Graph, int dist[], int path[], Vertex S)
//{
//	int collected[MaxVertexNum];
//	Vertex V, W;
//	//��ʼ�����˴�Ĭ���ڽӾ����в����ڵı���INFINITY��ʾ
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{
//		dist[V] = Graph->G[S][V];
//		if (dist[V] < INFINITY)
//			path[V] = S;
//		else
//			path[V] = -1;
//		collected[V] = false;
//	}
//	//�Ƚ�Դ�����뼯��
//	dist[S] = 0;
//	collected[S] = true;
//	while (1)
//	{
//		V = FindMinDist(Graph, dist, collected);//V = δ����¼������dist��С�ߵ��±�
//		if (V == -1)
//			break;
//		collected[V] = true;//��¼V
//		for (W = 0; W < Graph->NumOfVertex; W++)//��ͼ�е�ÿ������W
//		{
//			if (collected[W] == false && Graph->G[V][W] < INFINITY)
//			{//��W��V���ڽӵ㲢��δ����¼
//				if (Graph->G[V][W] < 0)
//					return;//������ȷ��������ش�����
//				if (dist[V] + Graph->G[V][W] < dist[W])
//				{//����¼Vʹ��dist[W]��С
//					dist[W] = dist[V] + Graph->G[V][W];//����dist[W]
//					path[W] = V;//����S��W��·��
//				}
//			}	
//		}
//	}
//	return;
//}
//
//void Floyd(MGraph Graph, WeightType D[][MaxVertexNum],Vertex path[][MaxVertexNum])
//{//D[i][j]Ϊi->j����̾��룬path[i][j]Ϊ
//	Vertex i, j, k;
//	for(i=0;i<Graph->NumOfVertex;i++)
//		for (j = 0; j < Graph->NumOfVertex; j++)
//		{//��ʼ��
//			D[i][j] = Graph->G[i][j];
//			path[i][j] = -1;//��Ϊi->j��·��
//		}
//	for (k = 0; k < Graph->NumOfVertex; k++)
//		for (i = 0; i < Graph->NumOfVertex; i++)
//			for (j = 0; j < Graph->NumOfVertex; j++)
//				if (D[i][k] + D[k][j] < D[i][j])
//				{
//					D[i][j] = D[i][k] + D[k][j];
//					if (i == j && D[i][j] < 0)
//						return;
//					path[i][j] = k;//��¼��i->j�����Ķ���k
//					//·��Ϊi->k->j
//					//���·����ӡ���ݹ��ӡi->k,k,k->j�����·��
//				}
//	return;
//}
//
//
//Vertex PrimFindMinDist(MGraph Graph, WeightType dist[])
//{//dist[V]ָ���㵽�����С������Ŀǰ����С����
//	//����δ����¼������dist��С��
//	Vertex MinV, V;
//	WeightType MinDist = INFINITY;
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{
//		if (dist[V] != 0 && dist[V] < MinDist)
//		{//��Vδ����¼����dist[V]��С
//			MinDist = dist[V];
//			MinV = V;//����
//		}
//	}
//	if (MinDist < INFINITY)//���ҵ���Сdist�����ض�Ӧ�Ķ����±�
//		return MinV;
//	else
//		return Error;
//}
//int Prim(MGraph Graph, LGraph MST)//����ͼ
//{//����С����������Ϊ�ڽӱ�洢��ͼMST��������СȨ�غ�
//	WeightType dist[MaxVertexNum], TotalWeight;
//	Vertex parent[MaxVertexNum],V,W;
//	int VCount;
//	Edge E;
//	for (V = 0; V < Graph->NumOfVertex; V++)//��ʼ����Ĭ�ϳ�ʼ���±���0
//	{
//		dist[V] = Graph->G[0][V];
//		parent[V] = 0;//���Ҷ������ж���ĸ���㶼�ǳ�ʼ��0
//	}
//	TotalWeight = 0;
//	VCount = 0;
//	MST = CreateAdjGraph(Graph->NumOfVertex);
//	//�����������ж��㵫û�бߵ�ͼ���ڽӱ��
//	E = (Edge)malloc(sizeof(struct ENode));
//	dist[0] = 0;//����ʼ��0��¼��MST
//	VCount++;
//	parent[0] = -1;
//	while (1)
//	{
//		V = PrimFindMinDist(Graph, dist);
//		//V = δ����¼������dist��С��,��V��MST��ֱ�������ı�
//		if (V == Error)
//			break;
//		E->V1 = parent[V];
//		E->V2 = V;
//		E->Weight = dist[V];
//		InsertAdjGraphEdge(MST, E);
//		//��V����Ӧ�ı�<parent[V], V>��¼��MST
//		TotalWeight += dist[V];
//		dist[V] = 0;
//		VCount++;
//		for (W = 0; W < Graph->NumOfVertex; W++)
//		{
//			if (dist[W] != 0 && Graph->G[V][W] < INFINITY)
//			{//��W��V���ڽӵ㲢��Wδ����¼
//				if (Graph->G[V][W] < dist[W])
//				{//��¼Vʹ��dist[W]��С
//					dist[W] = Graph->G[V][W];
//					parent[W] = V;
//				}
//			}
//		}
//	}
//	if (VCount < Graph->NumOfVertex)//MST���յĶ��㲻��|V|������ͼ����ͨ
//		TotalWeight = Error;
//	return TotalWeight;//������СȨ�غ�
//}
//
//typedef Vertex SetName;     /* Ĭ���ø������±���Ϊ�������� */
//typedef ElementType SetType[MaxVertexNum]; /* ���輯��Ԫ���±��0��ʼ */
//
//void InitializeVSet(SetType S, int N)
//{ /* ��ʼ�����鼯 */
//	ElementType X;
//
//	for (X = 0; X < N; X++) S[X] = -1;
//}
//
//void Union(SetType S, SetName Root1, SetName Root2)
//{ /* ����Ĭ��Root1��Root2�ǲ�ͬ���ϵĸ���� */
//	/* ��֤С���ϲ���󼯺� */
//	if (S[Root2] < S[Root1]) { /* �������2�Ƚϴ� */
//		S[Root2] += S[Root1];     /* ����1���뼯��2  */
//		S[Root1] = Root2;
//	}
//	else {                         /* �������1�Ƚϴ� */
//		S[Root1] += S[Root2];     /* ����2���뼯��1  */
//		S[Root2] = Root1;
//	}
//}
//
//SetName Find(SetType S, ElementType X)
//{ /* Ĭ�ϼ���Ԫ��ȫ����ʼ��Ϊ-1 */
//	if (S[X] < 0) /* �ҵ����ϵĸ� */
//		return X;
//	else
//		return S[X] = Find(S, S[X]); /* ·��ѹ�� */
//}
//
//bool CheckCycle(SetType VSet, Vertex V1, Vertex V2)
//{//�������V1��V2�ı��Ƿ������е���С�������Ӽ��й��ɻ�·
//	Vertex Root1, Root2;
//	Root1 = Find(VSet, V1);
//	Root2 = Find(VSet, V2);
//	if (Root1 == Root2)//��V1��V2�Ѿ���ͨ����ñ߲���Ҫ
//		return false;
//	else
//	{//����ñ߿��Ա��ռ���ͬʱ��V1��V2����ͬһ��ͨ��
//		Union(VSet, Root1, Root2);
//		return true;
//	}
//}
//
//void PercDown(Edge ESet, int p, int N)
//{ /* �ı����4.24��PercDown( MaxHeap H, int p )    */
//  /* ��N��Ԫ�صı���������ESet[p]Ϊ�����Ӷѵ���Ϊ����Weight����С�� */
//	int Parent, Child;
//	struct ENode X;
//
//	X = ESet[p]; /* ȡ��������ŵ�ֵ */
//	for (Parent = p; (Parent * 2 + 1) < N; Parent = Child) {
//		Child = Parent * 2 + 1;
//		if ((Child != N - 1) && (ESet[Child].Weight > ESet[Child + 1].Weight))
//			Child++;  /* Childָ�������ӽ��Ľ�С�� */
//		if (X.Weight <= ESet[Child].Weight) break; /* �ҵ��˺���λ�� */
//		else  /* ����X */
//			ESet[Parent] = ESet[Child];
//	}
//	ESet[Parent] = X;
//}
//
//void InitializeESet(LGraph Graph, Edge ESet)
//{ /* ��ͼ�ıߴ�������ESet�����ҳ�ʼ��Ϊ��С�� */
//	Vertex V;
//	PtrToAdjVNode W;
//	int ECount;
//
//	/* ��ͼ�ıߴ�������ESet */
//	ECount = 0;
//	for (V = 0; V < Graph->NumOfVertex; V++)
//		for (W = Graph->G[V].FirstEdge; W; W = W->Next)
//			if (V < W->AdjV) { /* �����ظ�¼������ͼ�ıߣ�ֻ��V1<V2�ı� */
//				ESet[ECount].V1 = V;
//				ESet[ECount].V2 = W->AdjV;
//				ESet[ECount++].Weight = W->Weight;
//			}
//	/* ��ʼ��Ϊ��С�� */
//	for (ECount = Graph->NumOfEdge / 2; ECount >= 0; ECount--)
//		PercDown(ESet, ECount, Graph->NumOfEdge);
//}
//
//void Swap(ENode* a, ENode* b)
//{
//	ENode t = *a; *a = *b; *b = t;
//}
//
//int GetEdge(Edge ESet, int CurrentSize)
//{ /* ������ǰ�ѵĴ�СCurrentSize������ǰ��С��λ�õ����������� */
//
//	/* ����С���뵱ǰ�ѵ����һ��λ�õı߽��� */
//	Swap(&ESet[0], &ESet[CurrentSize - 1]);
//	/* ��ʣ�µı߼�����������С�� */
//	PercDown(ESet, 0, CurrentSize - 1);
//	return CurrentSize - 1; /* ������С������λ�� */
//}
///*-------------------- ��С�Ѷ������ --------------------*/
//
//int Kruskal(LGraph Graph, LGraph MST)
//{//����С����������Ϊ�ڽӱ�洢��ͼMST��������СȨ�غ�
//	WeightType TotalWeight;
//	int ECount, NextEdge;
//	SetType VSet;
//	Edge ESet;
//	InitializeVSet(VSet, Graph->NumOfVertex);//��ʼ�����㲢�鼯,�ж��Ƿ��·
//	ESet = (Edge)malloc(sizeof(struct ENode) * Graph->NumOfEdge);
//	InitializeESet(Graph, ESet);
//	//��ʼ���ߵ���С�ѣ�ȡ����СȨ�ر�
//	MST = CreateAdjGraph(Graph->NumOfVertex);
//	TotalWeight = 0;
//	ECount = 0;
//	NextEdge = Graph->NumOfEdge;
//	//ԭʼ�߼��Ĵ�С��ͬʱ�洢�ߵ�λ��
//	while (ECount<Graph->NumOfVertex-1)
//	{//���ռ��ı߲����Թ�����ʱ
//		NextEdge = GetEdge(ESet, NextEdge);
//		//�ӱ߼��еõ���С�ߵ�λ�ã�ͬʱɾ���ñߣ�ʹ�ñ߼���С��һ
//		//��С��λ����ESet��������һ��Ԫ�ص�λ�ã�Ҳ���������С��һ��λ��
//		//ͬ������λ��ҲΪɾ���ñߺ������С
//		if (NextEdge < 0)
//			break;//�߼��ѿ�
//		if (CheckCycle(VSet, ESet[NextEdge].V1, ESet[NextEdge].V2) == true)
//		{//����ñߵļ��벻���ɻ�·�������˽�㲻����ͬһ��ͨ��
//			InsertAdjGraphEdge(MST, ESet + NextEdge);
//			//���ñ߲���MST
//			TotalWeight += ESet[NextEdge].Weight;
//			ECount++;//�������б�����1
//		}
//	}
//	if (ECount < Graph->NumOfVertex - 1)//ͼ����ͨ
//		TotalWeight = -1;
//	return TotalWeight;
//}
//
//bool TopSort(LGraph Graph, Vertex TopOrder[])
//{//��Graph������������,  TopOrder[]˳��洢�����Ķ����±�
//	int Indegree[MaxVertexNum], cnt;
//	Vertex V;
//	PtrToAdjVNode W;
//	Queue Q = CreateQueue(Graph->NumOfVertex);
//	for (V = 0; V < Graph->NumOfVertex; V++)
//		Indegree[V] = 0;//��ʼ��Indegree[]
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{//����ͼ���õ�Indegree[]
//		for (W = Graph->G[V].FirstEdge; W; W = W->Next)
//			Indegree[W->AdjV]++;
//		//�������<V, W->AdjV>�ۼ��յ�W->AdjV�����
//	}
//	for (V = 0; V < Graph->NumOfVertex; V++)
//		if (Indegree[V] == 0)
//			AddQ(Q, V);//���������Ϊ0�Ķ�������
//	cnt = 0;
//	while (!IsEmpty(Q))
//	{
//		V = DeleteQ(Q);//����һ�����Ϊ0�Ķ���
//		TopOrder[cnt++] = V;
//		//����һ�����Ϊ0�Ķ���
//		//��֮��Ϊ������е���һ��Ԫ��
//		for (W = Graph->G[V].FirstEdge; W; W = W->Next)
//		{//��V��ÿ���ڽӵ�W->AdjV
//			if (--Indegree[W->AdjV] == 0)
//				//��V��ɾ������V�ڽӵ����Ⱦ���һ
//				//��ɾ��Vʹ��W->AdjV���Ϊ0
//				AddQ(Q, W->AdjV);//���ڽӵ�W����
//		}
//	}
//	if (cnt != Graph->NumOfVertex)
//		return false;//˵��ͼ���л�·
//	else
//		return true;
//}