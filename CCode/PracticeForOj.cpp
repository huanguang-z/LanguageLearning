//1000
//#include<stdio.h>
//#define MaxSize 101
//int main(void)
//{
//	long int idx,n, Array[MaxSize];
//	long int num,temp;
//	int i, j;
//	while (scanf("%ld", &n) != EOF)
//	{
//		for (idx = 0; idx < n; idx++)
//		{
//			scanf("%ld\n", &num);
//			Array[idx] = num;
//		}
//
//		for (i = n; i >0; i--)
//		{
//			for (j = 0; j < i - 1; j++)
//			{
//				if (Array[j] > Array[j + 1])
//				{
//					temp = Array[j + 1];
//					Array[j + 1] = Array[j];
//					Array[j] = temp;
//				}
//			}
//		}
//		for (idx = 0; idx < n-1; idx++)
//			printf("%ld ", Array[idx]);
//		printf("%ld\n", Array[idx]);
//	}
//	return 0;
//}

//1001
//#include<stdio.h>
//int main(void)
//{
//	int n,i;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//			printf("*");
//		printf("\n\n");
//	}
//	return 0;
//}

//1029
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 101
//int main(void)
//{
//	int Array[MaxSize];
//	int Position=0;
//	int n, m;
//	scanf("%d", &n);
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		char Operation[20];
//		char Str[20];
//		scanf("%d", &m);
//		for (j = 0; j < n; j++)
//		{
//			scanf("%s", Operation);
//			if (Operation == "LEFT")
//			{
//				Position--;
//				Array[j] = -1;
//			}
//			if (Operation == "RIGHT")
//			{
//				Position++;
//				Array[j] = 1;
//			}
//			if (Operation == "SAME")
//			{
//				char Str[20];
//				scanf("%s",Str);
//				int k;
//				scanf("%d",& k);
//				Array[j] = Array[k - 1];
//				Position = Array[k - 1] + Position;
//			}
//		}
//		printf("%d\n", Position);
//		Position = 0;
//	}
//	return 0;
//}
//1657
//#include<stdio.h>
//#define MaxSize 41
//int main(void)
//{
//	char str[MaxSize];
//	while (scanf("%s", str) != EOF)
//	{
//		char* p = str;
//		while (*p)
//		{
//			if (*p == 'e' || *p == 'r' || *p == 'n')
//			{
//				*p = *p - 32;
//			}
//			if (*p == 'M' || *p == 'I' || *p == 'K' || *p == 'A' || *p == 'S')
//			{
//				*p = *p + 32;
//			}
//			printf("%c", *p);
//			p++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1656
//#include<stdio.h>
//#include<stdlib.h>
//#define MaxSize 101
//int main(void)
//{
//	char MLetter[MaxSize] = {}, LLetter[MaxSize] = {}, Str[MaxSize] = {};
//	int i, j, k;
//	while (scanf("%s", Str) != EOF)
//	{
//		i = 0;
//		j = 0;
//		char* p = Str;
//		while (*p)
//		{
//			if ((*p - 'A' < 26) && (*p - 'A' >= 0))
//			{
//				MLetter[i] = *p;
//				i++;
//			}
//			else
//			{
//				LLetter[j] = *p;
//				j++;
//			}
//			p++;
//		}
//		if (i != 0)
//			printf("%s\n", MLetter);
//		if (j != 0)
//			printf("%s\n", LLetter);
//		for (k = 0; k < MaxSize; k++)
//		{
//			MLetter[k] = '\0';
//			LLetter[k] = '\0';
//			Str[k] = '\0';
//		}
//	}
//	return 0;
//}

//1626
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	long int num;
//	char Str[100] = {};
//	scanf("%ld", &num);
//	//itoa(num, Str, 10);
//	sprintf(Str, "%ld", num);
//	printf("%s", Str);
//	return 0;
//}

//1065
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int num, i, j, k, m, flag = -1, flag1 = 0;
//	int Size = 0;
//	int Difference = 0;
//	char Character;
//	while (scanf("%d %c", &num, &Character) != EOF)
//	{
//		Size = 0;
//		Difference = 0;
//		flag = -1, flag1 = 0;
//		for (i = 1; num >=(2 * pow(i, 2) - 1); i++)
//		{
//			Size++;
//		}
//		i--;
//		int Size1 = Size;
//		Difference = num - (2 * pow(i, 2) - 1);
//		for (k = Size; k > 0; k--)
//		{
//			flag++;
//			for (m = 0; m < flag; m++)
//			{
//				printf(" ");
//			}
//			for (j = 1; j <= 2 * k - 1; j++)
//				printf("%c", Character);
//			printf("\n");
//
//		}
//
//		for (k = 2; k <= Size1; k++)
//		{
//			for (m = flag - 1; m > 0; m--)
//				printf(" ");
//			for (j = 1; j <= 2 * k - 1; j++)
//				printf("%c", Character);
//			printf("\n");
//			flag--;
//		}
//		printf("%d\n", Difference);
//
//	}
//	return 0;
//}

//1652
//#include<stdio.h>
//int Cal(int Year, int Month, int Day)
//{
//	int num = 0;
//	int flag = 0;
//	int delta = Year / 100 - Year / 400;
//	int num1 = (Year - 1) / 4 - delta;
//	num = num1 * 366 + (Year - num1 - 1) * 365;
//	int a[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
//	if (Year % 4 == 0)
//		flag = 1;
//	num += a[Month - 1] + Day + flag;
//	return num;
//}
//int main(void)
//{
//	int Year, Month, Day,NumOfRun;
//	int StaYear = 2022, StaMonth = 4, StaDay = 23;
//	long int num1,num2,num;
//	long int Difference;
//	while (scanf("%d %d %d", &Year, &Month, &Day) != EOF)
//	{
//		num1 = Cal(StaYear, StaMonth, StaDay);
//		num2 = Cal(Year, Month, Day);
//		num = num2 - num1;
//		printf("%ld\n", num);
//	}
//}

//1649
//#include<stdio.h>
//#define MaxSize 10001
//int main(void)
//{
//	char Str[MaxSize] = {};
//	int arr[4] = { 'u','z','i','\0' };
//	int flag1, flag2, flag3, num, i, j = 0;
//	while (scanf("%s", &Str) != EOF)
//	{
//		j = 0;
//		for (i = 0; Str[i] != '\0'; i++)
//		{
//			if (Str[i] == arr[j] && arr[j] != '\0')
//			{
//				j++;
//			}
//		}
//		if (j == 3)
//			printf("yes\n");
//		else
//			printf("no\n");
//		for (num = 0; num < MaxSize; num++)
//		{
//			Str[num] = '\0';
//		}
//	}
//	return 0;
//}

//1612
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int Hour, Minute, Second;
//	while (scanf("%d", &n) != EOF)
//	{
//		Hour = 0;
//		Minute = 0;
//		Second = 0;
//		while (n >= 3600)
//		{
//			Hour++;
//			n -= 3600;
//		}
//		while (n < 3600&&n>=60)
//		{
//			Minute++;
//			n -= 60;
//		}
//		Second = n;
//		printf("%d:%d:%d\n", Hour, Minute, Second);
//	}
//	return 0;
//}

//1613
//#include<stdio.h>
//#define MaxSize 101
//int main(void)
//{
//	long int n, Array[MaxSize] = { 0 };
//	int i;
//	int flag;
//	int sum;
//	while (scanf("%ld", &n) != EOF)
//	{
//		sum = 0;
//		flag = 1;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%ld", &Array[i]);
//			sum += Array[i];
//		}
//		if (n % 2 == 0||sum%2==0)
//		{
//			flag = 0;
//		}
//		if (flag)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			Array[i] = '\0';
//		}
//	}
//	return 0;
//}

//1614
//#include<stdio.h>
//#include<stdlib.h>
//#define MaxSize 1002
//int main(void)
//{
//	char str[MaxSize] = {};
//	char tmp[MaxSize] = {};
//	int len;
//	int i;
//	while (scanf("%s", str) != EOF)
//	{
//		char* p = str;
//		for (; *p; p++)
//		{
//			len++;
//		}
//		for (i = len - 1; i > -1; i--)
//		{
//			printf("%c", str[i]);
//		}
//		printf("\n");
//		len = 0;
//		for (i = 0; i < len; i++)
//		{
//			str[i] = '\0';
//		}
//	}
//	return 0;
//}

//1615
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int i, j;
//	char Letter = 'a';
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			Letter = 'a' + i - 1;
//			for (j = n - i; j > 0; j--)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i - 1; j++)
//			{
//				printf("%c", Letter - j);
//			}
//			for (j = 1; j < i; j++)
//			{
//				printf("%c", 'a' + j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
