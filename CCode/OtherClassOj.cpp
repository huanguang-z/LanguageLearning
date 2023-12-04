////1314
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int i;
//	int A, B, cnt;
//	int tmp,tmp1,tmp2;
//	while (scanf("%d", &n) != EOF)
//	{
//		A = B = cnt = 0;
//		for (i = 1; i <= n; i++)
//		{
//			while (i)
//			{
//				tmp = i % 2;
//				i /= 2;
//				if (tmp)
//				{
//					tmp1++;
//				}
//				else
//					tmp2++;
//			}
//			if (tmp1 > tmp2)
//				A++;
//			else
//				B++;
//		}
//		printf("%d %d\n", A, B);
//	}
//}

//#include<stdio.h>
//int main(void)
//{
//	int Right;
//	int a, b, c;
//	char Str[100];
//	while (scanf("%s", Str) == 1)
//	{
//		if (sscanf(Str,"%d+%d=%d", &a, &b, &c) == 3 && a + b == c)
//			Right++;
//		if (sscanf(Str, "%d-%d=%d", &a, &b, &c) == 3 && a - b == c)
//			Right++;
//	}
//	printf("%d", Right);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//#define MaxSize 100
//typedef struct node Candidate;
//struct node
//{
//	char Number[3];
//	int Score[5];
//	double Average;
//}s[MaxSize];
//void BubbleSort(struct node s[], int n)
//{
//	int i, j, k, temp;
//	for (k = 0; k < n; k++)
//	{
//		for (i = 1; i <= 4; i++)//外层循环是比较的轮数，数组内有10个数，那么就应该比较10-1=9轮
//		{
//			for (j = 0; j <= 4 - i; j++)//内层循环比较的是当前一轮的比较次数，例如：第一轮比较9-1=8次，第二轮比较9-2=7次
//			{
//				if (s[k].Score[j] > s[k].Score[j + 1])//相邻两个数如果逆序，则交换位置
//				{
//					temp = s[k].Score[j];
//					s[k].Score[j] = s[k].Score[j + 1];
//					s[k].Score[j + 1] = temp;
//				}
//			}
//		}
//	}
//}
//void BubbleSortAve(struct node s[], int n)
//{
//	int i, j, k;
//	double temp;
//	Candidate tmp;
//	for (i = 1; i <= n - 1; i++)//外层循环是比较的轮数，数组内有10个数，那么就应该比较10-1=9轮
//	{
//		for (j = 0; j <= n - 1 - i; j++)//内层循环比较的是当前一轮的比较次数，例如：第一轮比较9-1=8次，第二轮比较9-2=7次
//		{
//			if (s[j].Average < s[j + 1].Average)//相邻两个数如果逆序，则交换位置
//			{
//				temp = s[j].Average;
//				s[j].Average = s[j + 1].Average;
//				s[j + 1].Average = temp;
//				strncpy(tmp.Number, s[j].Number,3);
//				strncpy(s[j].Number, s[j + 1].Number,3);
//				strncpy(s[j + 1].Number, tmp.Number,3);
//			}
//			if (s[j].Average == s[j + 1].Average)
//			{
//				if (strcmp(s[j].Number, s[j + 1].Number) > 0)
//				{
//					strncpy(tmp.Number, s[j].Number,3);
//					strncpy(s[j].Number, s[j + 1].Number,3);
//					strncpy(s[j + 1].Number, tmp.Number,3);
//				}
//			}
//		}
//	}
//}
//int main(void)
//{
//	int n;
//	int i, j, k;
//	double score, sum = 0;;
//	char order[3];
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			s[i].Average = 0.0;
//			for (j = 0; j < 5; j++)
//				s[i].Score[j] = '\0';
//		}
//		for (i = 0; i < n; i++)
//		{
//			scanf("%s", s[i].Number);
//			sum = 0;
//			for (j = 0; j < 5; j++)
//			{
//				scanf("%lf", &score);
//				s[i].Score[j] = score;
//			}
//			BubbleSort(s, n);
//			for (k = 1; k <= 3; k++)
//				sum += s[i].Score[k];
//			s[i].Average = sum / 3.0;
//		}
//		BubbleSortAve(s, n);
//		for (i = 0; i < n; i++)
//		{
//			printf("%s %.2lf\n", s[i].Number, s[i].Average);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MaxSize 101
//int cmp_int(const void* _a, const void* _b){
//	long int* a = (long int*)_a;
//	long int* b = (long int*)_b;
//	return *a - *b;
//}
//int main(void) {
//	long int Array[MaxSize] = {};
//	int n, i;
//	while (scanf("%d", &n) != EOF) {
//		for (i = 0; i < n; i++)
//			scanf("%ld", &Array[i]);
//		qsort(Array, n, sizeof(Array[0]), cmp_int);
//		for (i = 0; i < n; i++) {
//			printf("%ld ", Array[i]);
//			Array[i] = '\0';
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//#define MaxSize 1004
//int IsPrime(int n)
//{
//	int flag = 1;
//	int i;
//	if (n == 1 || n == 0)
//		flag = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main(void)
//{
//	char Array[MaxSize] = {};
//	int i, n;
//	int tmp;
//	int flag;
//	for (i = 0; i < MaxSize; i++)
//		Array[i] = '\0';
//	while (scanf("%s", Array) != EOF)
//	{
//		flag = 1;
//		n = strlen(Array);
//		if (n <= 3)
//		{
//			tmp = atoi(Array);
//			flag = IsPrime(tmp);
//		}
//		else
//		{
//			for (i = 0; i < n; i += 3)
//			{
//				if (Array[i + 2] != '\0')
//				{
//					tmp = (Array[i] - '0') * 100 + (Array[i + 1] - '0') * 10 + (Array[i + 2] - '0');
//				}
//				else if (Array[i + 1] != '\0' && Array[i + 2] == '\0')
//				{
//					tmp = (Array[i] - '0') * 10 + (Array[i + 1] - '0');
//				}
//				else if (Array[i] != '\0' && Array[i + 1] == '\0')
//				{
//					tmp = (Array[i] - '0');
//				}
//				flag = IsPrime(tmp);
//				if (flag == 0)
//					break;
//			}
//		}
//		if (flag)
//			printf("YES\n");
//		else
//			printf("NO\n");
//		for (i = 0; i < n + 2; i++)
//			Array[i] = '\0';
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define MaxSize 51
//int Arr[5];
//long long int Calculate(int x)
//{
//	long long int tmp;
//	tmp = Arr[0] + Arr[1] * x + Arr[2] * x * x + Arr[3] * x * x * x + Arr[4] * x * x * x * x;
//	return tmp;
//}
//int main(void)
//{
//	int q, p;
//	int i, cnt = 0;
//	long long int sum;
//	int x;
//	long long int Sum[MaxSize];
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &Arr[i]);
//	}
//	scanf("%d", &q);
//	p = q;
//	while (q)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			scanf("%d", &x);
//			sum += Calculate(x);
//		}
//		Sum[cnt] = sum;
//		cnt++;
//		q--;
//		sum = 0;
//	}
//	for (i = 0; i < p; i++)
//	{
//		printf("%lld\n", Sum[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 1002
//int main(void)
//{
//	char Str1[MaxSize] = {};
//	char Str2[MaxSize] = {};
//	int Str[MaxSize] = {};
//	int Len;
//	int i;
//	int flag;
//	while (scanf("%s", Str1) != EOF)
//	{
//		Len = 0;
//		flag = 0;
//		char* p = Str1;
//		if (*p == '-')
//		{
//			*p++;
//			flag = 1;
//			Len++;
//		}
//		while (*p)
//		{
//			Len++;
//			p++;
//		}
//		for (i = flag; i < Len; i++)
//		{
//			Str2[Len - i - 1 + flag] = Str1[i];
//		}
//		for (i = flag; i < Len; i++)
//		{
//			Str[i] += Str1[i] - '0' + Str2[i] - '0';
//			if (Str[i] >= 10)
//			{
//				Str[i] -= 10;
//				Str[i + 1] += 1;
//			}
//
//		}
//		if (flag == 1)
//			printf("-");
//		for (i = Len; i >= flag; i--)
//		{
//			if (Str[i] == 0 && i == Len)
//				continue;
//			printf("%d", Str[i]);
//		}
//		printf("\n");
//		for (i = 0; i < Len + 2; i++)
//		{
//			Str[i] = '\0';
//			Str1[i] = '\0';
//			Str2[i] = '\0';
//		}
//	}
//	return 0;
//}

//光荣榜
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 101
//typedef struct Student* node;
//struct Student
//{
//	char Name[10];
//	int Score[4];
//}Arr[MaxSize];
//
//int cmp_s(const void* elem1, const void* elem2)
//{
//	struct Student* p1 = (node)elem1;
//	struct Student* p2 = (node)elem2;
//	if (p1->Score[0] != p2->Score[0])
//		return p1->Score[0] - p2->Score[0];
//	else
//		return strcmp(p2->Name, p1->Name);
//}
//
//int cmp_s1(const void* elem1, const void* elem2)
//{
//	struct Student* p1 = (node)elem1;
//	struct Student* p2 = (node)elem2;
//	if (p1->Score[1] != p2->Score[1])
//		return p1->Score[1] - p2->Score[1];
//	else
//		return strcmp(p2->Name, p1->Name);
//}
//
//int cmp_s2(const void* elem1, const void* elem2)
//{
//	struct Student* p1 = (node)elem1;
//	struct Student* p2 = (node)elem2;
//	if (p1->Score[2] != p2->Score[2])
//		return p1->Score[2] - p2->Score[2];
//	else
//		return strcmp(p2->Name, p1->Name);
//}
//
//int cmp_s3(const void* elem1, const void* elem2)
//{
//	struct Student* p1 = (node)elem1;
//	struct Student* p2 = (node)elem2;
//	if (p1->Score[3] != p2->Score[3])
//		return p1->Score[3] - p2->Score[3];
//	else
//		return strcmp(p2->Name, p1->Name);
//}
//
//void Print(struct Student Arr[], int n, int flag)
//{
//	int i;
//	for (i = n - 1; i >= n - 3; i--)
//	{
//		printf("%s %d\n", Arr[i].Name, Arr[i].Score[flag]);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	int n;
//	int i, j;
//	int flag0 = 0;
//	int flag1 = 1;
//	int flag2 = 2;
//	int flag3 = 3;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			Arr[i].Score[3] = 0;
//			scanf("%s", Arr[i].Name);
//			for (j = 0; j < 3; j++)
//			{
//				scanf("%d", &Arr[i].Score[j]);
//				Arr[i].Score[3] += Arr[i].Score[j];
//			}
//		}
//		qsort(Arr, n, sizeof(struct Student), cmp_s3);
//		Print(Arr, n, flag3);
//		qsort(Arr, n, sizeof(struct Student), cmp_s);
//		Print(Arr, n, flag0);
//		qsort(Arr, n, sizeof(struct Student), cmp_s1);
//		Print(Arr, n, flag1);
//		qsort(Arr, n, sizeof(struct Student), cmp_s2);
//		Print(Arr, n, flag2);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//long long int Pow(long long int x, long long int N)
//{
//
//	if (N / 2 == 0) //只有一个x
//		return x;
//	if (N % 2)
//		return (Pow(x, N / 2) * Pow(x, N / 2 + 1) % 998244353);
//	else
//		return (Pow(x, N / 2) * Pow(x, N / 2) % 998244353);
//}
//
//int main(void)
//{
//	int T;
//	long long int x, n, result;
//	scanf("%d", &T);
//	while (T)
//	{
//		scanf("%lld %lld", &x, &n);
//		result = Pow(x, n);
//		printf("%lld\n", result);
//		T--;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int diong[100][100], n[100];
//	int h, i, j, k, a, b, c;
//	for (h = 1;; h++)
//	{
//		scanf("%d", &n[h]);
//		c = h;
//		if (n[h] == 0) break;
//	}
//	for (h = 1; h < c; h++)
//	{
//		i = n[h] - 1;
//		j = (n[h] - 1) / 2;
//		a = log10(n[h] * n[h]);
//		for (k = 1; k <= n[h] * n[h]; k++)
//		{
//			diong[i][j] = k;
//			if (k % n[h] == 0) 
//				i--;
//			else
//			{
//				i++;
//				j++;
//			}
//			i %= n[h]; j %= n[h];
//		}
//		for (i = 0; i < n[h]; i++)
//		{
//			for (j = 0; j < n[h]; j++)
//			{
//				b = log10(diong[i][j]);
//				for (k = 1; k <= a - b; k++)
//					printf(" ");
//				printf("%d ", diong[i][j]);
//				diong[i][j] = 0;
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#define PILE_AMOUNT 100000
//#define MAX_WEIGHT 1000
//
//int table[MAX_WEIGHT + 5] = { 0 };
//long long sum[PILE_AMOUNT + 10] = { 0 };
//long long s = 0;
//
//int main()
//{
//	int n, i, tmp, front = 0, rear = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		table[tmp] += 1;
//	}
//	if (n == 1)
//	{//只有一堆石头，无需合并 
//		printf("%d\n", tmp);
//	}
//	else
//	{
//		int first = -1, second = -1, i = 1;
//		while (1)
//		{
//			while (first == -1 || second == -1)
//			{//查找table表，取出质量最少的两堆石头：first second 
//				if (table[i] == 0)
//				{
//					i++;
//					if (i > MAX_WEIGHT)
//						break;
//					else
//						continue;
//				}
//				else
//				{
//					if (first == -1)
//					{
//						first = i;
//						table[i]--;
//						continue;
//					}
//					if (second == -1)
//					{
//						second = i;
//						table[i]--;
//						break;
//					}
//				}
//			}
//			if (i > MAX_WEIGHT)
//			{//table表已全部遍历完，只可能first有值，second是-1；或者first、 second全是-1  
//				if (first != -1)
//				{//最小的两个元素first 和队头 
//					sum[rear++] = sum[front] + first;
//					front++;
//				}
//				while (rear - front != 1)
//				{
//					sum[rear++] = sum[front] + sum[front + 1];
//					front += 2;
//				}
//				break;
//			}
//			else
//			{
//				if (rear - front == 0)
//				{//队列为空
//					sum[rear++] = first + second;
//					first = -1;
//					second = -1;
//				}
//				else if (rear - front == 1)
//				{//队列只有一个元素 
//					long long fr = sum[front];//读取队头，暂时先不出队 
//					if (fr >= second)
//					{//最小的两个元素是first和second 
//						sum[rear++] = first + second;
//						first = -1;
//						second = -1;
//					}
//					else
//					{
//						front++;//取出队头 
//						sum[rear++] = first + fr;
//						table[second]++;//将second放回 
//						second = -1;
//						first = -1;
//					}
//				}
//				else
//				{//rear-front>=2  队列至少有2个元素 
//					long long fr1 = sum[front], fr2 = sum[front + 1];
//					if (fr1 <= first && fr2 > first || fr1 > first && fr1 <= second)
//					{//最小的两个元素是first、fr1
//						sum[rear++] = fr1 + first;
//						front++;
//						table[second]++;//将second放回 
//						second = -1;
//						first = -1;
//					}
//					else if (fr1 > second)
//					{//最小的两个元素是first，second 
//						sum[rear++] = first + second;
//						first = -1;
//						second = -1;
//					}
//					else if (fr2 <= first)
//					{//最小的两个元素是fr1,fr2
//						sum[rear++] = fr1 + fr2;
//						front += 2;
//						table[second]++;
//						table[first]++;
//						i = first;//i 回退
//						second = -1;
//						first = -1;
//					}
//				}
//			}
//		}
//		for (i = 0; i < rear; i++)
//		{
//			s += sum[i];
//		}
//		printf("%lld\n", s);
//	}
//	return 0;
//}
// 
// 
//#include<stdio.h>
//int main()
//{
//	long long int a = 0, b = 0;
//	while (scanf("%lld %lld", &a, &b) != EOF)
//	{
//		int n = 0;
//		int i1 = 0;
//		int flag = -1;
//		for (int i = 0; a != 0 || b != 0;)
//		{
//			i = a % 10 + b % 10;
//			i1 = 0;
//			i1 = i % 10;
//			a /= 10;
//			b /= 10;
//			flag++;
//			for (int j = flag; j > 0; j--)
//			{
//				i1 *= 10;
//			}
//			n = n + i1;
//		}
//		printf("%d\n", n);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#define MaxSize 1000002
//int Letter[26];
//int Num[MaxSize];
//
//int main() {
//	long long int n, m;
//	long long int j;
//	char character;
//	scanf("%lld %lld", &n, &m);
//	getchar();
//	memset(Letter, 0, sizeof(Letter));
//	for (int i = 1; i <= n; i++) {
//		character = getchar();
//		Num[i] = ++Letter[character - 'a'];
//	}
//	while (m--)
//	{
//		scanf("%lld", &j);
//		printf("%d\n", Num[j]);
//	}
//}


//#include <stdio.h>
//
//int main() {
//	int n, a[100], i;
//	float h = 0;
//	int max, min, m;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	max = a[0];
//	min = a[0];
//
//	for (i = 0; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//		if (a[i] < min) {
//			min = a[i];
//		}
//		h = h + a[i];
//	}
//	h = h / n;
//	int b = 0;
//	for (int N = n; m <= N; N = N - m) {
//		for (int p = 0; p < m; p++) {
//			printf("%d ", a[b]);
//			b++;
//		}
//		printf("\n");
//	}
//
//	for (; b < n; b++) {
//		printf("%d ", a[b]);
//	}
//	printf("\n");
//	printf("max:%d\nmin:%d\n", max, min);
//	printf("average:%lf", h);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define MaxSize 51
//int Flag(char Str[])
//{
//	int flag = 0;
//	if (1)
//	{
//
//	}
//	else if (1)
//	{
//
//	}
//	else if (1)
//	{
//
//	}
//	else {
//
//	}
//	return flag;
//}
//int main(void)
//{
//	int Len;
//	char S[MaxSize] = {};
//	while (scanf("%s", S) != EOF)
//	{
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 1005
//typedef struct Member* Node;
//struct Member
//{
//	long long int num;
//	long long int Name[2];
//	Node Next;
//	int flag;
//};
//typedef Node Position;
//typedef Node List;
//int main(void)
//{
//	int n;
//	int i;
//	long long int TempNum1, TempName1, TempNum2, TempName2;
//	int Arr[MaxSize] = {};
//	while (scanf("%d", &n) != EOF)
//	{
//		memset(Arr, MaxSize, sizeof(int));
//		Node P = (Node)malloc(sizeof(struct Member));
//		P->Next = NULL;
//		for (i = 1; i <= n; i++)
//		{
//			scanf("%lld,%lld->%lld,%lld", &TempNum1, &TempName1, &TempNum2, &TempName2);
//			while (P)
//			{
//				if (P->num == TempNum1 || P->num == TempNum2)
//				{
//					P->flag = 1;
//				}
//			}
//
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int n;
//
//	int t = 1;
//	int first;
//	while (scanf("%d", &n) != EOF) {
//		int a[3][9999] = { 0 };
//		int i = 0;
//		t = 1;
//		for (i = 0; i < n; i++) {
//			int ren1, hao1, ren2, hao2;
//			scanf("%d,%d->%d,%d", &ren1, &hao1, &ren2, &hao2);
//			if (t == 1)
//				first = ren1;//第一个人
//			t = 0;
//			a[0][ren1] = ren2;//第一行存储下一个人位置
//			if (a[1][ren1] == 0)//第二行存储人的代号
//				a[1][ren1] = hao1;
//			else if (hao1 != a[1][ren1])
//				a[2][ren1] = hao1;//存在两个姓名时
//			if (a[1][ren2] == 0)
//				a[1][ren2] = hao2;
//			else if (hao2 != a[1][ren2])
//				a[2][ren2] = hao2;
//
//			if (first == ren2)
//				first = ren1;
//
//		}
//
//		for (first; a[0][first] != 0; first = a[0][first]) {
//			if (a[2][first] == 0)
//				printf("%d,%d->", first, a[1][first]);
//			else
//				printf("%d,%d#%d->", first, a[1][first], a[2][first]);
//		}
//		if (a[2][first] == 0)
//			printf("%d,%d\n", first, a[1][first]);
//		else
//			printf("%d,%d#%d\n", first, a[1][first], a[2][first]);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	long long int x, y;
//	while (scanf("%lld", &x) != EOF)
//	{
//		if (x < 1)
//		{
//			y = x * x;
//		}
//		else if(x>=10)
//		{
//			y = 3 * x - 12;
//		}
//		else
//		{
//			y = 2 * x - 1;
//		}
//		printf("%lld\n", y);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	long long int n;
//	int sum;
//	while (scanf("%lld", &n) != EOF)
//	{
//		if (n == 0)
//			break;
//		sum = 0;
//		while (n)
//		{
//			if(n%16<10)
//				sum = sum + (n % 16);
//			n /= 16;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 103
//int Arr[MaxSize] = { 0 };
//int cmp(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//int main(void)
//{
//	int n, m, x;
//	long long int sum=0;
//	double  Ave;
//	int num;
//	scanf("%d %d", &n, &m);
//	int i, j;
//	int cnt = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		scanf("%d", &x);
//		Arr[i] = x;
//		sum += x;
//		printf("%d", x);
//		cnt++;
//		if (cnt % m != 0)
//			printf(" ");
//		if (cnt % m == 0)
//		{
//			printf("\n");
//			cnt = 0;
//		}
//	}
//	scanf("%d", &x);
//	Arr[i] = x;
//	sum += x;
//	printf("%d", x);
//	printf("\n");
//	Ave = sum * 1.0 / n;
//	qsort(Arr, n, sizeof(Arr[0]), cmp);
//	printf("max:%d\n", Arr[n - 1]);
//	printf("min:%d\n", Arr[0]);
//	printf("average:%.6f", Ave);
//	return 0;
//}
//
//#include<stdio.h>
//#define MaxSize 102
//int Grapg[MaxSize][MaxSize];
//int main(void)
//{
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1005
//struct student
//{
//	int num;
//	int Math;
//	int English;
//	int Cpp;
//	int sum;
//}Arr[MaxSize];
//typedef struct student* node;
//int cmp_s(const void* elem1, const void* elem2)
//{
//	struct student* p1 = (node)elem1;
//	struct student* p2 = (node)elem2;
//	if (p1->sum!=p2->sum)
//		return p1->sum - p2->sum;
//	else
//		return p1->num-p2->num;
//}
//int main(void)
//{
//	int n;
//	int i;
//	int max;
//	int min;
//	while (scanf("%d", &n) != EOF)
//	{
//		memset(Arr, 0, sizeof(Arr[0]) * (n + 1));
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d %d %d %d", &Arr[i].num, &Arr[i].Math, &Arr[i].English, &Arr[i].Cpp);
//			Arr[i].sum = Arr[i].Math + Arr[i].English + Arr[i].Cpp;
//		}
//		qsort(Arr, n, sizeof(struct student), cmp_s);
//		max = Arr[n-1].sum;
//		min = Arr[0].sum;
//		printf("BEST\n");
//		for (i = 0; i < n; i++)
//		{
//			if (Arr[i].sum == max)
//				printf("%d %d %d %d %d\n",Arr[i].num, Arr[i].sum, Arr[i].Math, Arr[i].English, Arr[i].Cpp);
//		}
//		printf("WORST\n");
//		for (i = 0; i < n; i++)
//		{
//			if (Arr[i].sum == min)
//				printf("%d %d %d %d %d\n", Arr[i].num, Arr[i].sum, Arr[i].Math, Arr[i].English, Arr[i].Cpp);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 1000002
//long long int Arr[MaxSize];
//int main(void)
//{
//	long long int i, n, j,k;
//	long long int a, b;
//	long long int tmp;
//	for (i = 0; i <= 1000000; i++)
//		Arr[i] = 1;
//	for (i = 2; i <= 1000000; i++)
//	{
//		if (Arr[i])
//		{
//			for (j=i*2; j <= 1000000; j += i)
//				Arr[j] = 0;
//		}
//	}
//	while (scanf("%lld", &n) != EOF)
//	{
//		tmp = n / 2;
//		for (i = 2; i <= tmp; i++)
//		{
//			if (Arr[i])
//			{
//				b = n - i;
//				if (Arr[b])
//					printf("%lld %lld\n", i, b);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	int T;
//	long long int M, N, result1,result2,result;
//	scanf("%lld %lld", &M, &N);
//		result1 = Pow(M, N)%100003;
//		result2 = M*Pow(M-1, N - 1)%100003;
//		result = (result1 - result2 + 100003) % 100003;
//		printf("%lld\n", result);
//	return 0;
//}