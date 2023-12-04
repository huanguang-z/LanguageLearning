//#include <stdio.h>
//#include <string.h>
//int xxn(int x)
//{
//    if (x >= 0 && x <= 255)
//        return 1;
//    else
//        return 0;
//}
//
//int main(void)
//{
//    char ip[16];
//    int a, b, c, d, i;
//    while (scanf("%s", ip) != EOF)
//    {
//        int n = strlen(ip);
//        //判断是否有前置0情况
//     //ip地址按如下格式获取应该获取到4个值，否则不是ip。
//        if (sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d) == 4)
//        {
//            if (ip[0] == '0'&&a!=0)
//            {
//                printf("No\n");
//                continue;
//            }
//            for (i = 0; i < n; i++)
//            {
//                if (ip[i] == '.')
//                {
//                    if (ip[i + 1] == '0'&&ip[i+2]>'0'&&ip[i+2]<='9')
//                    {
//                        printf("No\n");
//                        break;
//                    }
//                }
//            }
//            if (i != n)
//                continue;
//            if (xxn(a) && xxn(b) && xxn(c) && xxn(d))
//            {
//                printf("Yes\n");
//            }
//            else
//            {
//                printf("No\n");
//            }
//        }
//        else
//        {
//            printf("No\n");
//        }
//    }
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1020
//char Arr1[MaxSize];
//char Arr2[MaxSize];
//char ArrT[MaxSize];
//int main(void)
//{
//	long long int n;
//	long long int i,j;
//	int len1, len2;
//	int max;
//	memset(Arr1, 0, sizeof(Arr1));
//	memset(Arr2, 0, sizeof(Arr2));
//	memset(ArrT, 0, sizeof(ArrT));
//	while (scanf("%s %s", Arr1,Arr2) != EOF)
//	{
//		len1 = strlen(Arr1);
//		len2 = strlen(Arr2);
//		max = len1;
//		if (max <= len2)
//			max = len2;
//		for (i = 0,j=0; i < max; i++) {
//			if (Arr1[i] == '\0') {
//				ArrT[j++] = Arr2[i];
//				continue;
//			}
//
//			if (Arr2[i] == '\0') {
//				ArrT[j++] = Arr1[i];
//				continue;
//			}
//			ArrT[j++] = 'a' + ((Arr1[i] - 'a') + (Arr2[i] - 'a')) % 26;
//		}
//		printf("%s\n", ArrT);
//		memset(Arr1, 0, sizeof(Arr1));
//		memset(Arr2, 0, sizeof(Arr2));
//		memset(ArrT, 0, sizeof(ArrT));
//	}
//	 return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1000
//int main(void)
//{
//	long long int n;
//	long long int i,j;
//	while (scanf("%lld", &n) != EOF)
//	{
//		for (i = 0; i <= n; i++) {
//			for (j = n - i; j > 0; j--)
//				printf(" ");
//			for (j = 0; j < 2 * i + 1; j++)
//				printf("*");
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			for(j=0;j<n;j++)
//				printf(" ");
//			printf("*\n");
//		}
//	}
//	 return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1000
//long long int Arr[MaxSize];
//long long int Aux[MaxSize];
//#define ElementType long long int
//void ShellSort(ElementType A[], int N)
//{//希尔排序，Sedgewick增量序列
//	long long int Si, D, P, i;
//	//Si Sedgewick序列的位置
//	ElementType Tmp;
//	long long int Sedgewick[] = { 929,505,209,109,41,19,5,1,0 };
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
//int main(void)
//{
//	long long int n;
//	long long int i,j;
//	int flag;
//	memset(Arr, 0, sizeof(Arr));
//	memset(Aux, 0, sizeof(Aux));
//	while (scanf("%lld", &n) != EOF)
//	{
//		flag = 1;
//		memset(Arr, 0, sizeof(Arr));
//		for (i = 0; i < n; i++)
//			scanf("%lld", &Arr[i]);
//		ShellSort(Arr, n);
//		Aux[0] = Arr[0];
//		for (i = 1; i < n; i++)
//			Aux[i] = Arr[i]+Aux[i - 1];
//		for (i = 1; i < n; i++)
//		{
//			if (n == 1) {
//				flag = 1;
//				break;
//			}
//			if (Arr[i] <= Aux[i-1])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//			printf("Yes\n");
//		else
//			printf("No\n");
//		memset(Arr, 0, sizeof(Arr));
//		memset(Aux, 0, sizeof(Aux));
//	}
//	 return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1000
//long long int Arr[MaxSize];
//int main(void)
//{
//	printf("do I\n");
//	printf(" **\n");
//	printf("***\n");
//	printf("**");
//	 return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1000
//char Arr[MaxSize];
//
//int main(void)
//{
//	printf("AAA BBB CCC DDD\n");
//	printf("Aa Bbb Ee\n");
//	 return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1000
//struct Team
//{
//	char Name[25];
//	int Win;
//	int score;
//}Arr[MaxSize];
//int main(void)
//{
//	int n;
//	long long int i,j;
//	memset(Arr, 0, sizeof(Arr));
//	char Tm1[25], Tm2[25];
//	char Tm[50];
//	int x, y,max;
//	char* p, * q,*r;
//	int Hash1,Hash2;
//	int cnt;
//	int Len1;
//	int len;
//	while (scanf("%d", &n) != EOF)
//	{
//		p = NULL;
//		q = NULL;
//		memset(Arr, 0, sizeof(Arr));
//		memset(Tm1, 0, sizeof(Tm1));
//		memset(Tm2, 0, sizeof(Tm2));
//		memset(Tm, 0, sizeof(Tm));
//		cnt = n * (n - 1) / 2;
//		for (i = 0; i < cnt; i++) {
//			scanf("%s",Tm);
//			len = strlen(Tm);
//			Len1 = 0;
//			for (j = 0; Tm[j] != ':'; j++)
//				Tm1[Len1++] = Tm[j];
//			j++;
//			len -= j;
//			for (j=0; len!=0; j++,len--)
//				Tm2[j] = Tm[j+Len1+1];
//			scanf("%d:%d", &x, &y);
//			p = Tm1;
//			q = Tm2;
//			Hash1 = (*p) - 'A';
//			p++;
//			Hash1 *= 10;
//			Hash1 += (*p) - 'A';
//			strcpy(Arr[Hash1].Name, Tm1);
//			Hash2 = (*q) - 'A';
//			q++;
//			Hash2 *= 10;
//			Hash2 += (*q) - 'A';
//			strcpy(Arr[Hash2].Name, Tm2);
//			if (x > y) {
//				Arr[Hash1].score += 3;
//				Arr[Hash1].Win += (x-y);
//			}
//			else if(x < y)
//			{
//				Arr[Hash2].score += 3;
//				Arr[Hash2].Win += (x - y);
//			}
//			else {
//				Arr[Hash1].score += 1;
//				Arr[Hash2].score += 1;
//			}
//			memset(Tm1, 0, sizeof(Tm1));
//			memset(Tm2, 0, sizeof(Tm2));
//			memset(Tm, 0, sizeof(Tm));
//		}
//		double temp;
//		char tmp[25] = {};
//		for (i = 1; i <= n - 1; i++)//外层循环是比较的轮数，数组内有10个数，那么就应该比较10-1=9轮
//		{
//			for (j = 0; j <= n - 1 - i; j++)//内层循环比较的是当前一轮的比较次数，例如：第一轮比较9-1=8次，第二轮比较9-2=7次
//			{
//				if (Arr[j].score < Arr[j + 1].score)//相邻两个数如果逆序，则交换位置
//				{
//					memset(tmp, 0, sizeof(tmp));
//					temp = Arr[i].score;
//					Arr[i].score = Arr[i + 1].score;
//					Arr[i + 1].score = temp;
//					temp = Arr[i].Win;
//					Arr[i].Win = Arr[i + 1].Win;
//					Arr[i + 1].Win = temp;
//					strcpy(tmp, Arr[i].Name);
//					strcpy(Arr[i].Name, Arr[i + 1].Name);
//					strcpy(Arr[i + 1].Name, tmp);
//				}
//				if (Arr[j].score == Arr[j + 1].score)
//				{
//					if (Arr[j].Win < Arr[j + 1].Win)//相邻两个数如果逆序，则交换位置
//					{
//						temp = Arr[i].Win;
//						Arr[i].Win = Arr[i + 1].Win;
//						Arr[i + 1].Win = temp;
//						strcpy(tmp, Arr[i].Name);
//						strcpy(Arr[i].Name, Arr[i + 1].Name);
//						strcpy(Arr[i + 1].Name, tmp);
//					}
//					if (Arr[j].Win == Arr[j + 1].Win)//相邻两个数如果逆序，则交换位置
//					{
//						if (strcmp(Arr[j].Name, Arr[j + 1].Name) > 0)
//						{
//							strcpy(tmp, Arr[i].Name);
//							strcpy(Arr[i].Name, Arr[i + 1].Name);
//							strcpy(Arr[i + 1].Name, tmp);
//						}
//					}
//				}
//			}
//		}
//		for (i = 0; i <MaxSize; i++)
//		{
//			if(strlen(Arr[i].Name)>0)
//				printf("%s ", Arr[i].Name);
//		}
//		printf("%s\n", Arr[i].Name);
//	}
//	 return 0;
//}