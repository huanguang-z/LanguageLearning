//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1000
//long long int Arr[MaxSize];
//int main(void)
//{
//	memset(Arr, 0, sizeof(Arr));
//	long long int Hour, Min, Sec,Add;
//	int hour, minute, sec;
//	int flag1, flag2, flag3;
//	while (scanf("%lld:%lld:%lld+%lld", &Hour, &Min, &Sec,&Add) != EOF) {
//		hour = Add / 3600;
//		Add = Add - 3600 * hour;
//		minute = Add / 60;
//		Add -= 60 * minute;
//		sec = Add;
//		Sec += sec;
//		Min += minute;
//		Hour += hour;
//		flag1 = flag2 = flag3 = 0;
//		if (Sec >= 60)
//		{
//			Sec -= 60;
//			Min++;
//		}
//		if (Sec < 10)
//			flag3 = 1;
//		if (Min >= 60)
//		{
//			Min -= 60;
//			Hour++;
//		}
//		if (Min < 10)
//			flag2 = 1;
//		while (Hour >= 24)
//			Hour -= 24;
//		if (Hour < 10)
//			flag1 = 1;
//		if (flag1) {
//			if (Hour == 0)
//				printf("00:");
//			else
//			{
//				printf("0%lld:", Hour);
//			}
//		}
//		else {
//			printf("%lld:", Hour);
//		}
//		if (flag2) {
//			if (Min == 0)
//				printf("00:");
//			else
//			{
//				printf("0%lld:", Min);
//			}
//		}
//		else {
//			printf("%lld:", Min);
//		}
//		if (flag3) {
//			if (Sec == 0)
//				printf("00\n");
//			else
//			{
//				printf("0%lld\n", Sec);
//			}
//		}
//		else {
//			printf("%lld\n", Sec);
//		}
//	}
//	 return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 10020
//void ShellSort(long long int A[], int N)
//{//希尔排序，Sedgewick增量序列
//	int Si, D, P, i;
//	//Si Sedgewick序列的位置
//	long long int Tmp;
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
//int main(void)
//{
//	long long int Arr[MaxSize] = { 0 };
//	long long int Odd[MaxSize] = { 0 };
//	long long int Even[MaxSize] = { 0 };
//	long long int n;
//	long long int i,j;
//	long long int lengthe = 0, lengtho = 0;
//	while (scanf("%lld", &n) != EOF)
//	{
//		lengthe = 0;
//		lengtho = 0;
//		for (i = 0; i < n; i++) {
//			Arr[i] = 0;
//			Odd[i] = 0;
//			Even[i] = 0;
//		}
//		for (i = 0; i < n; i++)
//			scanf("%lld", &Arr[i]);
//		ShellSort(Arr, n);
//		for (i = 0; i < n; i++) {
//			if (Arr[i] % 2 == 0)
//				Even[lengthe++] = Arr[i];
//			else
//				Odd[lengtho++] = Arr[i];
//		}
//		for (j = 0; j < lengtho-1; j++)
//			printf("%lld ", Odd[j]);
//		printf("%lld\n", Odd[j]);
//		for (j = 0; j < lengthe - 1; j++)
//			printf("%lld ", Even[j]);
//		printf("%lld\n\n", Even[j]);
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
//	long long int n;
//	long long int i,j;
//	double sum;
//	double pay;
//	memset(Arr, 0, sizeof(Arr));
//	while (scanf("%lld", &n) != EOF)
//	{
//		sum = 0;
//		while (n--) {
//			scanf("%f", &pay);
//			if (sum < 10)
//				sum += pay;
//			else if (sum >= 10 && sum < 15)
//				sum += 0.8 * pay;
//			else if (sum >= 15 && sum < 40)
//				sum += 0.5 * pay;
//			else
//				sum += pay;
//		}
//		if (sum < 100)
//			printf("No\n");
//		else
//			printf("Yes\n");
//	}
//	 return 0;
//}







//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1005
//long long int Arr[MaxSize];
//long long int Find[MaxSize];
//int main(void)
//{
//	long long int n;
//	long long int i,j;
//	int m;
//	int index;
//	memset(Arr, 0, sizeof(Arr));
//	memset(Find, 0, sizeof(Find));
//	int result[1005] = { 0 };
//	while (scanf("%lld", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++) {
//			Arr[i] = 0;
//			Find[i] = 0;
//			result[i] = 0;
//		}
//		Find[0] = 0;
//		for (i = 1; i <= n; i++) {
//			scanf("%lld", &Arr[i]);
//			Find[i] = Arr[i] + Find[i - 1];
//		}
//		scanf("%d", &m);
//		for (i = 0; i < m; i++) {
//			scanf("%d", &index);
//			for (j = 1; j <= n; j++) {
//				if (index > Find[j - 1] && index <= Find[j]) {
//					result[i] = j;
//					break;
//				}
//			}
//		}
//		for (i = 0; i < m; i++)
//			printf("%d\n", result[i]);
//	}
//	 return 0;
//}





//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 10002
//char Arr[MaxSize];
//int Num[MaxSize];
//int AR1[MaxSize];
//int AR2[MaxSize];
//int AR3[MaxSize];
//int AR4[MaxSize];
//
//int Isprime(long long int n)
//{
//	int i;
//	int flag = 1;
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
//
//int main(void)
//{
//	long long int n;
//	long long int i,j;
//	int m;
//	int Tmp=0;
//	int Len;
//	int L1, L2, L3, L4;
//	char* p = NULL;
//	int sum;
//	int tmp;
//	int flag=0;
//	int k;
//	int row;
//	memset(Arr, 0, sizeof(Arr));
//	while (scanf("%s ", Arr) != EOF)
//	{
//		k = 0;
//		flag = 0;
//		n = strlen(Arr);
//		scanf("%d", &m);
//		 p = Arr;
//		 Len = 0;
//		 L1 = 0;
//		 L2 = 0;
//		 L3 = 0;
//		 L4 = 0;
//		for (i = 0; i < n; i+=m) {
//			for (j = 0; j < m; j++) {
//				Tmp = Tmp * 10 + (*p - '0');
//				p++;
//			}
//			Num[Len++] = Tmp;
//			Tmp = 0;
//		}
//		for (i; i < n; i++)
//		{
//			Tmp = Tmp * 10 + (*p - '0');
//			p++;
//		}
//		Num[Len++] = Tmp;
//		for (i = 0; i < Len; i++) {
//			if (Isprime(Num[i])) {
//				AR1[L1++] = Num[i];
//				continue;
//			}
//			Tmp = Num[i];
//			sum = 0;
//			while (Tmp) {
//				sum += Tmp % 10;
//				Tmp /= 10;
//			}
//			if (!Isprime(Num[i]) && Isprime(sum)) {
//				AR2[L2++] = Num[i];
//				continue;
//			 }
//			Tmp = Num[i];
//			flag = 0;
//			while (Tmp) {
//				tmp= Tmp % 10;
//				if (tmp == 2 || tmp == 3 || tmp == 5 || tmp == 7) {
//					flag = 1;
//					break;
//				}
//				Tmp /=10;
//			}
//			if (flag) {
//				AR3[L3++] = Num[i];
//				continue;
//			}
//			else
//				AR4[L4++] = Num[i];
//		}
//		for (k = 1; (k-1) * (k - 1) < Len; k += 2);
//		int tmp = (k + 1) / 2;
//		char ch = '*';
//		int* w = AR1;
//		int* x = AR2;
//		int* y = AR3;
//		int* z = AR4;
//		printf("%5c", ch);
//		for(i=0;i<k-2;i++)
//			if (*w!=0) {
//				printf("%5d", *w);
//				w++;
//			}
//			else
//			{
//				printf("    0");
//			}
//		printf("%5c\n", ch);
//		for (row = 2; row < tmp; row++) {
//			for (i = 0; i < row - 1; i++)
//			{
//				if (*x != 0) {
//					printf("%5d", *x);
//					x++;
//				}
//				else
//				{
//					printf("    0");
//				}
//			}
//			printf("%5c", ch);
//			for (i = 0; i < 2 * tmp - 2 * row - 1; i++)
//			{
//				if (*w != 0) {
//					printf("%5d", *w);
//					w++;
//				}
//				else
//				{
//					printf("    0");
//				}
//			}
//			printf("%5c", ch);
//
//			for (i = 0; i < row - 2; i++)
//			{
//				if (*y != 0) {
//					printf("%5d", *y);
//					y++;
//				}
//				else
//				{
//					printf("    0");
//				}
//			}
//			if (*y != 0) {
//				printf("%5d\n", *y);
//				y++;
//			}
//			else
//			{
//				printf("    0\n");
//			}
//
//		}
//		row = tmp;
//		for (i = 0; i < row - 1; i++)
//		{
//			if (*x != 0) {
//				printf("%5d", *x);
//				x++;
//			}
//			else
//			{
//				printf("    0");
//			}
//		}
//		printf("%5c", ch);
//		for (i = 0; i < row - 2; i++)
//		{
//			if (*y != 0) {
//				printf("%5d", *y);
//				y++;
//			}
//			else
//			{
//				printf("    0");
//			}
//		}
//		if (*y != 0) {
//			printf("%5d\n", *y);
//			y++;
//		}
//		else
//		{
//			printf("    0\n");
//		}
//		row = tmp + 1;
//		for (row; row <= k; row++) 
//		{
//			for (i = 0; i < k - row; i++)
//			{
//				if (*x != 0) {
//					printf("%5d", *x);
//					x++;
//				}
//				else
//				{
//					printf("    0");
//				}
//			}
//			printf("%5c", ch);
//			for (j = 0; j < (row - tmp) * 2 - 1; j++)
//			{
//				if (*z != 0) {
//					printf("%5d", *z);
//					z++;
//				}
//				else
//				{
//					printf("    0");
//				}
//			}
//			printf("%5c", ch);
//			for (i = 0; i < k - row-1; i++)
//			{
//				if (*y != 0) {
//					printf("%5d", *y);
//					y++;
//				}
//				else
//				{
//					printf("    0");
//				}
//			}
//			if (row != k) {
//				if (*y != 0) {
//					printf("%5d\n", *y);
//					y++;
//				}
//				else
//				{
//					printf("    0\n");
//				}
//			}
//			if (row == k)
//				printf("\n");
//		}
//		for (i = 0; i < Len; i++) {
//			Num[i] = 0;
//			AR1[i] = 0;
//			AR2[i] = 0;
//			AR3[i] = 0;
//			AR4[i] = 0;
//		}
//		printf("\n");
//		memset(Arr, 0, sizeof(Arr));
//	}
//	 return 0;
//}


