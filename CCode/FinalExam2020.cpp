//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int Flag[12] = { 0 };
//int Num[8] = { 0 };
//int main(void)
//{
//	int T;
//	long long int Dot;
//	int m;
//	int i;
//	int n, k;
//	int tmp;
//	scanf("%d", &T);
//	while (T--)
//	{
//		memset(Flag, 0, sizeof(Flag));
//		memset(Num, 0, sizeof(Num));
//		scanf("%lld %d", &Dot, &m);
//		for (i = 1; i <= 6; i++)
//		{
//			Num[Dot % 10]++;
//			Dot /= 10;
//		}
//		tmp = m;
//		for (i = 1; i <= tmp; i++)
//		{
//			scanf("%d %d", &n, &k);
//			if (n <= Num[k] + Num[1] && k != 1)
//				Flag[i] = 1;
//			if (k == 1)
//			{
//				if (n <= Num[1])
//					Flag[i] = 1;
//			}
//			printf("%d:", i);
//			if (Flag[i])
//			{
//				printf("true\n");
//			}
//			else
//			{
//				printf("false\n");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 100
//int main(void)
//{
//	int T, n;
//	int i, j;
//	int size;
//	int row, row1;
//	char ch;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		size = 2 * n - 1;
//		for (i = 0; i < n - 1; i++)
//			printf(" ");
//		printf("a\n");
//		if (n == 1)
//		{
//			printf("a\n");
//			printf("\n");
//			continue;
//		}
//		for (row = 2; row <= n; row++)
//		{
//			ch = 'a';
//			for (i = 0; i < n - row; i++)
//				printf(" ");
//			for (i = 0; i < row - 1; i++)
//			{
//				printf("%c", ch + i);
//			}
//			ch += i;
//			for (; ch - 'a' > -1; ch--)
//				printf("%c", ch);
//			printf("\n");
//		}
//		for (row1 = 0; row1 < n - 1; row1++)
//		{
//			for (i = 0; i < row1; i++)
//				printf(" ");
//			printf("a");
//			for (j = 0; j < 2 * row - 5; j++)
//				printf(" ");
//			printf("a\n");
//			row--;
//		}
//		for (i = 0; i < row1; i++)
//			printf(" ");
//		printf("a\n\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 2002
//long long int Arr[MaxSize];
//int main(void)
//{
//	int n;
//	long long int i, j;
//	long long int pro, sum, Left;
//	long long int tmp;
//	while (scanf("%d", &n) != EOF)
//	{
//		memset(Arr, 0, sizeof(Arr));
//		for (i = 2; i <= n; i++)
//		{
//			for (j = i + 1; j <= n; j++)
//			{
//				pro = i * j;
//				sum = i + j;
//				if (pro % sum == 0)
//					Arr[n]++;
//			}
//		}
//		printf("%lld\n", Arr[n]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//long long int Cal(int Year, int Month, int Day)
//{
//	long long int num = 0;
//	int flag = 0;
//	int Additional = 0;
//	int i;
//	for (i = 1; i <= Year / 100; i++)
//	{
//		if (i % 4 != 0)
//			Additional++;
//	}
//	int num1 = (Year - 1) / 4 - Additional;
//	num = num1 * 366 + (Year - num1 - 1) * 365;
//	int a[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
//	if (((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)))
//		flag = 1;
//	if (flag == 1)
//	{
//		if (Month > 2)
//			num++;
//	}
//	num += a[Month - 1] + Day;
//	if (Year % 100 == 0 && Year % 400 != 0)
//		num++;
//	return num;
//}
//int main(void)
//{
//	long long int result;
//	int n;
//	int year, month, day;
//	char ch;
//	long long int num1, num2;
//	num2 = Cal(2021, 1, 1);
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d%c%d%c%d", &year, &ch, &month, &ch, &day);
//		num1 = Cal(year, month, day);
//		result = num2 - num1 + 1;
//		printf("%lld\n", result);
//	}
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