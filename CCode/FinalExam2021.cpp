//////2021A
////#include<stdio.h>
////#include<iostream>
////using namespace std;
////int main(void)
////{
////	char c;
////	int y, m, d, h, p;
////	int flag1, flag2, flag3, flag4, flag5;
////	while (scanf("%d %c %d %c %d %c %d %c %d", &h, &c, &p, &c, &m, &c, &d, &c, &y) != EOF)
////	{
////		flag1 = 0;
////		flag2 = 0;
////		flag3 = 0;
////		flag4 = 0;
////		flag5 = 0;
////		if (h >= 12)
////		{
////			flag1 = 1;
////			h -= 12;
////		}
////		if (h < 10)
////		{
////			flag2 = 1;
////		}
////		if (p < 10)
////		{
////			flag3 = 1;
////		}
////		if (m < 10)
////			flag4 = 1;
////		if (d < 10)
////			flag5 = 1;
////		if (flag1)
////		{
////			cout << y;
////			if (flag4)
////				printf("0");
////			cout << m;
////			if (flag5)
////				printf("0");
////			cout << d << ',';
////			if (flag2)
////				printf("0");
////			cout << h << ':';
////			if (flag3)
////				printf("0");
////			cout << p;
////			printf("PM\n");
////		}
////		else
////		{
////			cout << y;
////			if (flag4)
////				printf("0");
////			cout << m;
////			if (flag5)
////				printf("0");
////			cout << d << ',';
////			if (flag2)
////				printf("0");
////			cout << h << ':';
////			if (flag3)
////				printf("0");
////			cout << p;
////			printf("AM\n");
////		}
////	}
////	return 0;
////}
//
////2021B
////#include<stdio.h>
////int main(void)
////{
////	int n;
////	int i, j;
////	while (scanf("%d", &n) != EOF)
////	{
////		for (i = 0; i <= n; i++)
////		{
////			for (j = n; j > i; j--)
////			{
////				printf(" ");
////			}
////			if (i == n)
////			{
////				for (j = 0; j <= i; j++)
////					printf("*");
////			}
////			else
////			{
////				printf("*");
////			}
////			printf("\n");
////		}
////		n--;
////		for (i = 0; i <= n; i++)
////		{
////			for (j = n; j > i; j--)
////			{
////				printf(" ");
////			}
////
////			printf("*");
////			printf("\n");
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
////2021C
////#include<stdio.h>
////int main(void)
////{
////	char Str[31] = { '\0' };
////	int Len;
////	int flag;
////	int flag1, flag2, flag3, flag4;
////	int i;
////	char* p = NULL;
////	while (scanf("%s", Str) != EOF)
////	{
////		flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
////		Len = 0;
////		p = Str;
////		while (*p)
////		{
////			if (*p >= '0' && *p <= '9' && flag1 != 1)
////			{
////				flag1 = 1;
////				flag++;
////			}
////			if (*p >= 'A' && *p <= 'Z' && flag2 != 1)
////			{
////				flag2 = 1;
////				flag++;
////			}
////			if (*p >= 'a' && *p <= 'z' && flag3 != 1)
////			{
////				flag3 = 1;
////				flag++;
////			}
////			if ((*p == '!' || *p == '@' || *p == '#' || *p == '$' || *p == '*' || *p == '~') && flag4 != 1)
////			{
////				flag4 = 1;
////				flag++;
////			}
////			Len++;
////			p++;
////		}
////		if (Len >= 8 && flag >= 3)
////			printf("yes\n");
////		else
////			printf("no\n");
////		for (i = 0; i < 31; i++)
////		{
////			Str[i] = '\0';
////		}
////	}
////	return 0;
////}
//
////2021D
////#include<stdio.h>
////#define MaxSize 100002
////#define Max 100000
////int Size(int n)
////{
////	int Size;
////	while (n)
////	{
////		n /= 10;
////		Size++;
////	}
////	return Size;
////}
////
////int Isprime(int n)
////{
////	int flag = 1;
////	int i;
////	for (i = 2; i < n; i++)
////	{
////		if (n % i == 0)
////		{
////			flag = 0;
////			break;
////		}
////	}
////	if (n == 1 || n == 0)
////		flag = 0;
////	return flag;
////}
////
////int main(void)
////{
////	long int Array[MaxSize] = {};
////	int n;
////	long int i, j;
////	int index = 0;
////	int flag, flag1;
////	int size;
////	int temp;
////	int num[6] = {};
////	for (i = 1; i < Max; i++)
////	{
////		flag = Isprime(i);
////		if (flag)
////		{
////			Array[index] = i;
////			index++;
////			continue;
////		}
////		temp = i;
////		size = Size(i);
////		for (j = 0; j < 6; j++)
////		{
////			if (temp > 0)
////			{
////				num[j] = temp % 10;
////				flag1 = Isprime(num[j]);
////				if (flag1 == 0)
////				{
////					for (j = 0; j < 6; j++)
////					{
////						num[j] = '\0';
////					}
////					break;
////				}
////				temp /= 10;
////			}
////		}
////		if (flag1)
////		{
////			Array[index] = i;
////			index++;
////		}
////		for (j = 0; j < 6; j++)
////		{
////			num[j] = '\0';
////		}
////	}
////	while (scanf("%d", &n) != EOF)
////	{
////		printf("%ld\n", Array[n - 1]);
////	}
////	return 0;
////}
//
//#include <stdio.h>
//#include <string.h>
//#define N 810
//struct Bint//  大数的结构体
//{
//    int high[N / 2];//  存放整数位
//    int low[N / 2];//  存放小数位
//    int p;//  整数位非零位数
//    int del;  //  小数位非零位数
//};
//int Find(char a, char str[])//  找小数点的位置,实际返回的是整数部分的位数
//{
//    int i, len = strlen(str);
//    for (i = 0; i < len; i++)
//        if (str[i] == a)
//            return i;
//    return len;//  整数时直接返回  长度
//}
//void print(struct Bint s)//  输出函数
//{
//    int i;
//    for (i = s.p - 1; i >= 0; i--)
//        printf("%d", s.high[i]);
//    if (s.del > 0) {
//        printf(".");
//        for (i = 0; i < s.del; i++)
//            printf("%d", s.low[i]);
//    }
//    printf("\n");
//}
//void trans(struct Bint* a, char str[])//  将输入的字符串形式的数 转换为结构体
//{
//    memset(a->high, 0, sizeof(a->high));
//    memset(a->low, 0, sizeof(a->low));
//    int len = strlen(str);
//    a->p = Find('.', str);
//    a->del = (len == a->p) ? 0 : (len - a->p - 1);//  如果包含小数点则小数位数为 数的长度-整数位数-1
//    int i = 0, ii = 0, jj = 0, pa = a->p, l = len - 1;
//    while (str[i++] == '0' && i < pa)//   去除前导0
//        a->p--;
//    while (str[l--] == '0' && l >= pa)//  去除 后导 0
//        a->del--;
//    for (i = pa - 1; i >= pa - a->p; i--)// 整数位赋值
//        a->high[ii++] = str[i] - '0';
//    for (i = pa + 1; i < pa + 1 + a->del; i++)//  小数位 赋值
//        a->low[jj++] = str[i] - '0';
//}
//void add(char A[], char B[])//  加法  代码核心
//{
//    int i;
//    struct Bint a, b, ans;//  ans 存 结果
//    memset(ans.low, 0, sizeof(ans.low));
//    memset(ans.high, 0, sizeof(ans.high));
//    trans(&a, A);
//    trans(&b, B);
//    ans.p = (a.p > b.p) ? a.p : b.p;//  取a,b 整数位的最大值
//    ans.del = (a.del > b.del) ? a.del : b.del;// 同上，取小数位
//    //  以下两个循环为逐位相加的过程
//    for (i = 0; i < ans.p; i++)
//        ans.high[i] = a.high[i] + b.high[i];
//    for (i = 0; i < ans.del; i++)
//        ans.low[i] = a.low[i] + b.low[i];
//    // 进位处理
//    for (i = ans.del - 1; i > 0; i--)
//    {
//        if (ans.low[i] >= 10)
//        {
//            ans.low[i - 1] += ans.low[i] / 10;
//            ans.low[i] %= 10;
//        }
//    }
//    //小数位第一位有进位时的处理
//    if (ans.low[0] >= 10)
//    {
//        ans.high[0] += ans.low[0] / 10;
//        ans.low[0] %= 10;
//    }
//    for (i = 0; i < ans.p; i++)
//    {
//        if (ans.high[i] >= 10)
//        {
//            ans.high[i + 1] += ans.high[i] / 10;
//            ans.high[i] %= 10;
//        }
//    }
//    if (ans.high[ans.p] > 0)
//        ans.p += 1;
//    //  相加以后产生后导 0 的处理
//    while (ans.low[ans.del - 1] == 0)
//        ans.del--;
//    print(ans);
//}
//int main()
//{
//    char A[N], B[N];
//    while (scanf("%s %s", A, B) != EOF)
//    {
//        getchar();
//        add(A, B);
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct Spy* Link;
//struct Spy
//{
//	long long int Num;
//	long long int Name1;
//	long long int Name2;
//	Link next;
//};
//int main(void)
//{
//	int n;
//	long long int x1, y1, x2, y2;
//	int i;
//	Link Head = (Link)malloc(sizeof(struct Spy));
//	Head->Num = 0;
//	Head->Name1 = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		scanf("%lld,%lld->%lld,%lld", &x1, &y1, &x2, &y2);
//		Link p = (Link)malloc(sizeof(struct Spy));
//		p->Num = x1;
//		p->Name1 = y1;
//		p->Name2 = 0;
//		Head->next = p;
//		Link q = (Link)malloc(sizeof(struct Spy));
//		q->Num = x2;
//		q->Name1 = y2;
//		q->Name2 = 0;
//		q->next = NULL;
//		p->next = q;
//		for (i = 1; i < n; i++)
//		{
//			scanf("%lld,%lld->%lld,%lld", &x1, &y1, &x2, &y2);
//			Link Tmp1 = Head;
//			for (Tmp1; Tmp1 != NULL && Tmp1->Num != x1; Tmp1 = Tmp1->next);
//			if (Tmp1 != NULL && (Tmp1->next == NULL || Tmp1->next->Num != x2))//遍历找到结点，在其后需要插入结点
//			{
//				if (Tmp1->Name1 != y1)
//				{
//					Tmp1->Name2 = y1;
//				}
//				Link Tmp2 = (Link)malloc(sizeof(struct Spy));
//				Tmp2->Num = x2;
//				Tmp2->Name1 = y2;
//				Tmp2->Name2 = 0;
//				Tmp2->next = Tmp1->next;
//				Tmp1->next = Tmp2;
//			}
//			else if(Tmp1==NULL)//->前未在链表内，重新遍历找到结点，在其前需要插入结点
//			{
//				for (Tmp1 = Head; Tmp1->next != NULL && Tmp1->next->Num != x2; Tmp1 = Tmp1->next);//找到需要前插的结点的前一个
//				if (Tmp1->next != NULL)//该结点的下一个结点为已经出现的结点
//				{
//					if (Tmp1->next->Name1 != y2)
//						Tmp1->next->Name2 = y2;
//					Link Tmp2 = (Link)malloc(sizeof(struct Spy));
//					Tmp2->Num = x1;
//					Tmp2->Name1 = y1;
//					Tmp2->Name2 = 0;
//					Tmp2->next = Tmp1->next;
//					Tmp1->next = Tmp2;
//				}
//			}
//			else//两个结点均出现
//			{
//				if (Tmp1->Name1 != y1)
//					Tmp1->Name2 = y1;
//				if (Tmp1->next->Name1 != y2)
//					Tmp1->next->Name2 = y2;
//			}
//		}
//		for (p = Head->next; p->next != NULL; p = p->next)//遍历链表输出n-1个结点
//		{
//			if (p->Name2 != 0)
//			{
//				printf("%lld,%lld#%lld->", p->Num, p->Name1, p->Name2);
//			}
//			else
//				printf("%lld,%lld->", p->Num, p->Name1);
//		}
//		if (p->Name2 != 0)
//			printf("%lld,%lld#%lld\n", p->Num, p->Name1, p->Name2);
//		else
//			printf("%lld,%lld\n", p->Num, p->Name1);
//	}
//	return 0;
//}
