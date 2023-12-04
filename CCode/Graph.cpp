//#include"head.h"
//#define MaxVertexNum 101
//#define INFINITY 65535
//typedef int Vertex;
//typedef int WeightType;
//typedef char DataType;//顶点存储的数据类型
//typedef struct ENode* PtrToENode;
//typedef PtrToENode Edge;
//typedef struct MatrixGNode* PtrToMatrixGNode;
//typedef PtrToMatrixGNode MGraph;
//struct ENode
//{
//	Vertex V1, V2;//有向边<V1, V2>
//	WeightType Weight;//权重
//};
//struct MatrixGNode
//{
//	int NumOfVertex;
//	int NumOfEdge;
//	WeightType G[MaxVertexNum][MaxVertexNum];//邻接矩阵
//	DataType Data[MaxVertexNum];//顶点的数据
//};
//
//
//typedef struct AdjVNode* PtrToAdjVNode;//邻接点
//struct AdjVNode
//{
//	Vertex AdjV;//邻接点下标
//	WeightType Weight;//边权重
//	PtrToAdjVNode Next;//指向下一个邻接点的指针
//};
//typedef struct LFirstNode //顶点表头结点的定义
//{
//	PtrToAdjVNode FirstEdge;//边表头指针
//	DataType Data;
//}AdjList[MaxVertexNum];//AdjList是邻接表类型
//typedef struct AdjGNode* PtrToAdjGNode;//图结点
//typedef PtrToAdjGNode LGraph;
//struct AdjGNode
//{
//	int NumOfVertex;
//	int NumOfEdge;
//	AdjList G;//邻接表
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
//	for (V = 0; V < Graph->NumOfVertex; V++)//初始化邻接矩阵
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
//	Graph->G[E->V1][E->V2] = E->Weight;//插入边 <V1, V2>
//	Graph->G[E->V2][E->V1] = E->Weight;//无向图插入边<V2, V1>
//}
//
//void InsertAdjGraphEdge(LGraph Graph, Edge E)
//{
//	PtrToAdjVNode NewNode;
//	//插入边 <V1, V2>,为V2建立新的邻接点
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V2;
//	NewNode->Weight = E->Weight;//NewNode为V2
//	NewNode->Next = Graph->G[E->V1].FirstEdge;//将V2插入V1的表头
//	Graph->G[E->V1].FirstEdge = NewNode;
//	//无向图,插入边 <V2, V1>,为V1建立新的邻接点
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V1;
//	NewNode->Weight = E->Weight;//NewNode为V1
//	NewNode->Next = Graph->G[E->V2].FirstEdge;//将V1插入V2的表头
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
//	Graph = CreateMatrixGraph(NumVertex); //初始化有NumVertex个顶点但没有边的图
//	scanf("%d", &(Graph->NumOfEdge));
//	if (!Graph->NumOfEdge)
//	{
//		E = (Edge)malloc(sizeof(struct ENode));
//		for (i = 0; i < Graph->NumOfEdge; i++)
//		{//读入边，格式为"起点 终点 权重"，插入邻接矩阵
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			InsertMGraphEdge(Graph, E);
//		}
//	}
//	for (V = 0; V < Graph->NumOfVertex; i++)//如果顶点有数据的话，读入数据
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
//	Graph = CreateAdjGraph(NumVertex);//初始化有NumVertex个顶点但没有边的图
//	scanf("%d", &(Graph->NumOfEdge));
//	if (!Graph->NumOfEdge)
//	{
//		E = (Edge)malloc(sizeof(struct ENode));
//		for (i = 0; i < Graph->NumOfEdge; i++)
//		{//读入边，格式为"起点 终点 权重"，插入邻接矩阵
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			InsertAdjGraphEdge(Graph, E);
//			InsertAdjGraphEdge(Graph, E);
//		}
//	}
//	for (V = 0; V < Graph->NumOfVertex; i++)//如果顶点有数据的话，读入数据
//		scanf("% c", &(Graph->G[V].Data));
//	return Graph;
//}
//
/////* 邻接表存储的图 - DFS */
////
////void Visit(Vertex V)
////{
////	printf("正在访问顶点%d\n", V);
////}
////
/////* Visited[]为全局变量，已经初始化为false */
////void DFS(LGraph Graph, Vertex V, void (*Visit)(Vertex))
////{   /* 以V为出发点对邻接表存储的图Graph进行DFS搜索 */
////	PtrToAdjVNode W;
////
////	Visit(V); /* 访问第V个顶点 */
////	Visited[V] = true; /* 标记V已访问 */
////
////	for (W = Graph->G[V].FirstEdge; W; W = W->Next) /* 对V的每个邻接点W->AdjV */
////		if (!Visited[W->AdjV])    /* 若W->AdjV未被访问 */
////			DFS(Graph, W->AdjV, Visit);    /* 则递归访问之 */
////}
//
/////* 邻接矩阵存储的图 - BFS */
////
/////* IsEdge(Graph, V, W)检查<V, W>是否图Graph中的一条边，即W是否V的邻接点。  */
/////* 此函数根据图的不同类型要做不同的实现，关键取决于对不存在的边的表示方法。*/
/////* 例如对有权图, 如果不存在的边被初始化为INFINITY, 则函数实现如下:         */
////bool IsEdge(MGraph Graph, Vertex V, Vertex W)
////{
////	return Graph->G[V][W] < INFINITY ? true : false;
////}
////
/////* Visited[]为全局变量，已经初始化为false */
////void BFS(MGraph Graph, Vertex S, void (*Visit)(Vertex))
////{   /* 以S为出发点对邻接矩阵存储的图Graph进行BFS搜索 */
////	Queue Q;
////	Vertex V, W;
////
////	Q = CreateQueue(MaxSize); /* 创建空队列, MaxSize为外部定义的常数 */
////	/* 访问顶点S：此处可根据具体访问需要改写 */
////	Visit(S);
////	Visited[S] = true; /* 标记S已访问 */
////	AddQ(Q, S); /* S入队列 */
////
////	while (!IsEmpty(Q)) {
////		V = DeleteQ(Q);  /* 弹出V */
////		for (W = 0; W < Graph->Nv; W++) /* 对图中的每个顶点W */
////			/* 若W是V的邻接点并且未访问过 */
////			if (!Visited[W] && IsEdge(Graph, V, W)) {
////				/* 访问顶点W */
////				Visit(W);
////				Visited[W] = true; /* 标记W已访问 */
////				AddQ(Q, W); /* W入队列 */
////			}
////	} /* while结束*/
////}
//
/////* 邻接表存储 - 无权图的单源最短路算法 */
////
/////* dist[]和path[]全部初始化为-1 */
////void Unweighted(LGraph Graph, int dist[], int path[], Vertex S)
////{
////	Queue Q;
////	Vertex V;
////	PtrToAdjVNode W;
////
////	Q = CreateQueue(Graph->Nv); /* 创建空队列, MaxSize为外部定义的常数 */
////	dist[S] = 0; /* 初始化源点 */
////	AddQ(Q, S);
////
////	while (!IsEmpty(Q)) {
////		V = DeleteQ(Q);
////		for (W = Graph->G[V].FirstEdge; W; W = W->Next) /* 对V的每个邻接点W->AdjV */
////			if (dist[W->AdjV] == -1) { /* 若W->AdjV未被访问过 */
////				dist[W->AdjV] = dist[V] + 1; /* W->AdjV到S的距离更新 */
////				path[W->AdjV] = V; /* 将V记录在S到W->AdjV的路径上 */
////				AddQ(Q, W->AdjV);
////			}
////	} /* while结束*/
////}
//
//Vertex FindMinDist(MGraph Graph, int dist[], int collected[])
//{//返回未被收录顶点中dist最小者
//	//dist[V]指源点到V的最短距离
//	Vertex MinV, V;
//	int MinDist = INFINITY;
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{
//		if (collected[V] == -1 && dist[V] < MinDist)
//		{//若V未被收录，且dist[V]更小
//			MinDist = dist[V];
//			MinV = V;
//		}
//	}
//	if (MinDist < INFINITY)//找到最小dist
//		return MinV;
//	else
//		return -1;
//}
//void Dijkstra(MGraph Graph, int dist[], int path[], Vertex S)
//{
//	int collected[MaxVertexNum];
//	Vertex V, W;
//	//初始化：此处默认邻接矩阵中不存在的边用INFINITY表示
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{
//		dist[V] = Graph->G[S][V];
//		if (dist[V] < INFINITY)
//			path[V] = S;
//		else
//			path[V] = -1;
//		collected[V] = false;
//	}
//	//先将源点收入集合
//	dist[S] = 0;
//	collected[S] = true;
//	while (1)
//	{
//		V = FindMinDist(Graph, dist, collected);//V = 未被收录顶点中dist最小者的下标
//		if (V == -1)
//			break;
//		collected[V] = true;//收录V
//		for (W = 0; W < Graph->NumOfVertex; W++)//对图中的每个顶点W
//		{
//			if (collected[W] == false && Graph->G[V][W] < INFINITY)
//			{//若W是V的邻接点并且未被收录
//				if (Graph->G[V][W] < 0)
//					return;//不能正确解决，返回错误标记
//				if (dist[V] + Graph->G[V][W] < dist[W])
//				{//若收录V使得dist[W]变小
//					dist[W] = dist[V] + Graph->G[V][W];//更新dist[W]
//					path[W] = V;//更新S到W的路径
//				}
//			}	
//		}
//	}
//	return;
//}
//
//void Floyd(MGraph Graph, WeightType D[][MaxVertexNum],Vertex path[][MaxVertexNum])
//{//D[i][j]为i->j的最短距离，path[i][j]为
//	Vertex i, j, k;
//	for(i=0;i<Graph->NumOfVertex;i++)
//		for (j = 0; j < Graph->NumOfVertex; j++)
//		{//初始化
//			D[i][j] = Graph->G[i][j];
//			path[i][j] = -1;//认为i->j无路径
//		}
//	for (k = 0; k < Graph->NumOfVertex; k++)
//		for (i = 0; i < Graph->NumOfVertex; i++)
//			for (j = 0; j < Graph->NumOfVertex; j++)
//				if (D[i][k] + D[k][j] < D[i][j])
//				{
//					D[i][j] = D[i][k] + D[k][j];
//					if (i == j && D[i][j] < 0)
//						return;
//					path[i][j] = k;//记录从i->j经过的顶点k
//					//路径为i->k->j
//					//最短路径打印，递归打印i->k,k,k->j的最短路径
//				}
//	return;
//}
//
//
//Vertex PrimFindMinDist(MGraph Graph, WeightType dist[])
//{//dist[V]指顶点到这棵最小生成树目前的最小距离
//	//返回未被收录顶点中dist最小者
//	Vertex MinV, V;
//	WeightType MinDist = INFINITY;
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{
//		if (dist[V] != 0 && dist[V] < MinDist)
//		{//若V未被收录，且dist[V]更小
//			MinDist = dist[V];
//			MinV = V;//更新
//		}
//	}
//	if (MinDist < INFINITY)//若找到最小dist，返回对应的顶点下标
//		return MinV;
//	else
//		return Error;
//}
//int Prim(MGraph Graph, LGraph MST)//稠密图
//{//将最小生成树保存为邻接表存储的图MST，返回最小权重和
//	WeightType dist[MaxVertexNum], TotalWeight;
//	Vertex parent[MaxVertexNum],V,W;
//	int VCount;
//	Edge E;
//	for (V = 0; V < Graph->NumOfVertex; V++)//初始化。默认初始点下标是0
//	{
//		dist[V] = Graph->G[0][V];
//		parent[V] = 0;//暂且定义所有顶点的父结点都是初始点0
//	}
//	TotalWeight = 0;
//	VCount = 0;
//	MST = CreateAdjGraph(Graph->NumOfVertex);
//	//创建包含所有顶点但没有边的图，邻接表版
//	E = (Edge)malloc(sizeof(struct ENode));
//	dist[0] = 0;//将初始点0收录进MST
//	VCount++;
//	parent[0] = -1;
//	while (1)
//	{
//		V = PrimFindMinDist(Graph, dist);
//		//V = 未被收录顶点中dist最小者,且V与MST有直接相连的边
//		if (V == Error)
//			break;
//		E->V1 = parent[V];
//		E->V2 = V;
//		E->Weight = dist[V];
//		InsertAdjGraphEdge(MST, E);
//		//将V及相应的边<parent[V], V>收录进MST
//		TotalWeight += dist[V];
//		dist[V] = 0;
//		VCount++;
//		for (W = 0; W < Graph->NumOfVertex; W++)
//		{
//			if (dist[W] != 0 && Graph->G[V][W] < INFINITY)
//			{//若W是V的邻接点并且W未被收录
//				if (Graph->G[V][W] < dist[W])
//				{//收录V使得dist[W]变小
//					dist[W] = Graph->G[V][W];
//					parent[W] = V;
//				}
//			}
//		}
//	}
//	if (VCount < Graph->NumOfVertex)//MST中收的顶点不到|V|个，即图不连通
//		TotalWeight = Error;
//	return TotalWeight;//返回最小权重和
//}
//
//typedef Vertex SetName;     /* 默认用根结点的下标作为集合名称 */
//typedef ElementType SetType[MaxVertexNum]; /* 假设集合元素下标从0开始 */
//
//void InitializeVSet(SetType S, int N)
//{ /* 初始化并查集 */
//	ElementType X;
//
//	for (X = 0; X < N; X++) S[X] = -1;
//}
//
//void Union(SetType S, SetName Root1, SetName Root2)
//{ /* 这里默认Root1和Root2是不同集合的根结点 */
//	/* 保证小集合并入大集合 */
//	if (S[Root2] < S[Root1]) { /* 如果集合2比较大 */
//		S[Root2] += S[Root1];     /* 集合1并入集合2  */
//		S[Root1] = Root2;
//	}
//	else {                         /* 如果集合1比较大 */
//		S[Root1] += S[Root2];     /* 集合2并入集合1  */
//		S[Root2] = Root1;
//	}
//}
//
//SetName Find(SetType S, ElementType X)
//{ /* 默认集合元素全部初始化为-1 */
//	if (S[X] < 0) /* 找到集合的根 */
//		return X;
//	else
//		return S[X] = Find(S, S[X]); /* 路径压缩 */
//}
//
//bool CheckCycle(SetType VSet, Vertex V1, Vertex V2)
//{//检查连接V1和V2的边是否在现有的最小生成树子集中构成回路
//	Vertex Root1, Root2;
//	Root1 = Find(VSet, V1);
//	Root2 = Find(VSet, V2);
//	if (Root1 == Root2)//若V1和V2已经连通，则该边不能要
//		return false;
//	else
//	{//否则该边可以被收集，同时将V1和V2并入同一连通集
//		Union(VSet, Root1, Root2);
//		return true;
//	}
//}
//
//void PercDown(Edge ESet, int p, int N)
//{ /* 改编代码4.24的PercDown( MaxHeap H, int p )    */
//  /* 将N个元素的边数组中以ESet[p]为根的子堆调整为关于Weight的最小堆 */
//	int Parent, Child;
//	struct ENode X;
//
//	X = ESet[p]; /* 取出根结点存放的值 */
//	for (Parent = p; (Parent * 2 + 1) < N; Parent = Child) {
//		Child = Parent * 2 + 1;
//		if ((Child != N - 1) && (ESet[Child].Weight > ESet[Child + 1].Weight))
//			Child++;  /* Child指向左右子结点的较小者 */
//		if (X.Weight <= ESet[Child].Weight) break; /* 找到了合适位置 */
//		else  /* 下滤X */
//			ESet[Parent] = ESet[Child];
//	}
//	ESet[Parent] = X;
//}
//
//void InitializeESet(LGraph Graph, Edge ESet)
//{ /* 将图的边存入数组ESet，并且初始化为最小堆 */
//	Vertex V;
//	PtrToAdjVNode W;
//	int ECount;
//
//	/* 将图的边存入数组ESet */
//	ECount = 0;
//	for (V = 0; V < Graph->NumOfVertex; V++)
//		for (W = Graph->G[V].FirstEdge; W; W = W->Next)
//			if (V < W->AdjV) { /* 避免重复录入无向图的边，只收V1<V2的边 */
//				ESet[ECount].V1 = V;
//				ESet[ECount].V2 = W->AdjV;
//				ESet[ECount++].Weight = W->Weight;
//			}
//	/* 初始化为最小堆 */
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
//{ /* 给定当前堆的大小CurrentSize，将当前最小边位置弹出并调整堆 */
//
//	/* 将最小边与当前堆的最后一个位置的边交换 */
//	Swap(&ESet[0], &ESet[CurrentSize - 1]);
//	/* 将剩下的边继续调整成最小堆 */
//	PercDown(ESet, 0, CurrentSize - 1);
//	return CurrentSize - 1; /* 返回最小边所在位置 */
//}
///*-------------------- 最小堆定义结束 --------------------*/
//
//int Kruskal(LGraph Graph, LGraph MST)
//{//将最小生成树保存为邻接表存储的图MST，返回最小权重和
//	WeightType TotalWeight;
//	int ECount, NextEdge;
//	SetType VSet;
//	Edge ESet;
//	InitializeVSet(VSet, Graph->NumOfVertex);//初始化顶点并查集,判断是否回路
//	ESet = (Edge)malloc(sizeof(struct ENode) * Graph->NumOfEdge);
//	InitializeESet(Graph, ESet);
//	//初始化边的最小堆，取出最小权重边
//	MST = CreateAdjGraph(Graph->NumOfVertex);
//	TotalWeight = 0;
//	ECount = 0;
//	NextEdge = Graph->NumOfEdge;
//	//原始边集的大小，同时存储边的位置
//	while (ECount<Graph->NumOfVertex-1)
//	{//当收集的边不足以构成树时
//		NextEdge = GetEdge(ESet, NextEdge);
//		//从边集中得到最小边的位置，同时删除该边，使得边集大小减一
//		//最小边位置在ESet数组的最后一个元素的位置，也就是数组大小减一的位置
//		//同样，该位置也为删除该边后数组大小
//		if (NextEdge < 0)
//			break;//边集已空
//		if (CheckCycle(VSet, ESet[NextEdge].V1, ESet[NextEdge].V2) == true)
//		{//如果该边的加入不构成回路，即两端结点不属于同一连通集
//			InsertAdjGraphEdge(MST, ESet + NextEdge);
//			//将该边插入MST
//			TotalWeight += ESet[NextEdge].Weight;
//			ECount++;//生成树中边数加1
//		}
//	}
//	if (ECount < Graph->NumOfVertex - 1)//图不连通
//		TotalWeight = -1;
//	return TotalWeight;
//}
//
//bool TopSort(LGraph Graph, Vertex TopOrder[])
//{//对Graph进行拓扑排序,  TopOrder[]顺序存储排序后的顶点下标
//	int Indegree[MaxVertexNum], cnt;
//	Vertex V;
//	PtrToAdjVNode W;
//	Queue Q = CreateQueue(Graph->NumOfVertex);
//	for (V = 0; V < Graph->NumOfVertex; V++)
//		Indegree[V] = 0;//初始化Indegree[]
//	for (V = 0; V < Graph->NumOfVertex; V++)
//	{//遍历图，得到Indegree[]
//		for (W = Graph->G[V].FirstEdge; W; W = W->Next)
//			Indegree[W->AdjV]++;
//		//对有向边<V, W->AdjV>累计终点W->AdjV的入度
//	}
//	for (V = 0; V < Graph->NumOfVertex; V++)
//		if (Indegree[V] == 0)
//			AddQ(Q, V);//将所有入度为0的顶点入列
//	cnt = 0;
//	while (!IsEmpty(Q))
//	{
//		V = DeleteQ(Q);//弹出一个入度为0的顶点
//		TopOrder[cnt++] = V;
//		//弹出一个入度为0的顶点
//		//将之存为结果序列的下一个元素
//		for (W = Graph->G[V].FirstEdge; W; W = W->Next)
//		{//对V的每个邻接点W->AdjV
//			if (--Indegree[W->AdjV] == 0)
//				//因V被删除，故V邻接点的入度均减一
//				//若删除V使得W->AdjV入度为0
//				AddQ(Q, W->AdjV);//则邻接点W入列
//		}
//	}
//	if (cnt != Graph->NumOfVertex)
//		return false;//说明图中有回路
//	else
//		return true;
//}