//Menu
// 4 素数
// 
// 17闰年
// 
// 30回文串
// 
// 64最大公约数
// 
// 68最小公倍数 
// 
// 82 qsort对整数排序，从小到大
// 
// 87 qsort对double排序，从小到大
// 
// 92 qsort对字符串采取字典排序
// 
// 109 qsort对结构体二级排序
// 
// 117 qsort 对结构体一级排序
// 
// 130 求更大值
// 
// 141 链表声明 
// 
// 150 头文件及框架
// 
// 148 求到0年0月0日的总天数
// 
// 177 Fibonacci数列
// 
// 203 链表插入、删除、查找、修改
// 
// 204 高幂次取模
// 
// 236 高精度减法
// 
// 385 最大重复字符串
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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

//int IsRunYear(int Year)
//{
//  int flag=0;
//	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
//		flag=1;
//	return flag;
//}

//int Judge(char Arr[])
//{
//    
//        char a[MaxSize];
//
//        int b;
//        b = strlen(Arr);
//        for (int i = b - 1, j = 0; i >= 0; i--, j++)
//        {
//            a[j] = Arr[i];
//			Num[Arr[i] - 'a' + 1]++;//储存该字符出现的位置
//        }
//        int flag = 1;
//        for (int i = 0; i < b; i++)
//        {
//            if (a[i] != Arr[i])
//            {
//                flag = 0;
//                break;
//            }
//        }
//	return flag;
//}
//long long int Max(long long int num1,long long int num2)
//{
//	int temp = 0;
//	while (num2 != 0)
//	{
//		temp = num1 % num2;
//		num1 = num2;
//		num2 = temp;
//	}
//	return num1;
//}
// 
//long long int Min(long long int num1, long long int num2)
//{
//	long long int k = Max(num1, num2);
//	return num1 * num2 / k;
//}

//int inc(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}

//int inc(const void* a, const void* b)
//{
//	return *(double*)a > *(double*)b ? 1 : -1;
//}

//int inc(const void* a, const void* b)
//{
//	return strcmp((char*)a, (char*)b);
//}

//typedef struct student* node;
//int cmp_s(const void* elem1, const void* elem2)
//{
//	struct Student* p1 = (node)elem1;
//	struct Student* p2 = (node)elem2;
//	if (p1->sum!=p2->sum)
//		return p1->sum - p2->sum;
//	else
//		return p1->num-p2->num;
//}

//int inc(const void* a, const void* b)
//{
//	return (*(node*)a).one > (*(node*)b).one ? 1 : -1;
//}

//int max(int num1, int num2)
//{
//	int max = num1;
//	if (num1 < num2)
//		max = num2;
//	return max;
//}

//typedef struct Student* List;
//struct Student
//{
//	int Num;
//	List next;
//};
//
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
//	memset(Arr, 0, sizeof(Arr));
//	while (scanf("%lld", &n) != EOF)
//	{
//
//	}
//	 return 0;
//}

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

//long long int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//#define Goal 100//模数
//long long int Pow(long long int x, long long int N)
//{
//
//	if (N / 2 == 0) //只有一个x
//		return x;
//	if (N % 2)
//		return (Pow(x, N / 2) * Pow(x, N / 2 + 1) % Goal);
//	else
//		return (Pow(x, N / 2) * Pow(x, N / 2) % Goal);
//}
//long long int HighMul(long long int M, long long int N)
//{
//	long long int result1, result2, result, tmp1, tmp2, tmp3, tmp4;//tmp1,2,3,4为需要幂次
//	result1 = Pow(tmp1, tmp2) % Goal;
//	result2 = Pow(tmp3, tmp4) % Goal;
//	result = (result1 - result2 + Goal) % Goal;
//	return result;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char x[1000], y[1000];
//	while (scanf("%s%s", &x, &y) != EOF)
//	{
//		char t[1000] = { '\0' };
//		int l1 = 0, l2 = 0, l0 = 0, l = 0;
//		int dot1 = 0, dot2 = 0, dot = 0;
//		int headz = 0, headz1 = 0, headz2 = 0, headx = 0, headx1 = 0, headx2 = 0;
//		int endx = 0;
//		int carry = 0;
//		int i = 0, j = 0;
//		int flag1 = 0, flag2 = 0;
//		int z1[1000] = { 0 }, z2[1000] = { 0 };
//		int x1[1000] = { 0 }, x2[1000] = { 0 };
//		int dif1[1000] = { 0 }, dif2[1000] = { 0 };
//		//重置一堆变量 
//		l1 = strlen(x) - 1;
//		l2 = strlen(y) - 1;
//		//总长度（含小数点） 
//		flag2 = 1;
//		for (i = 0; i <= l1; i++)
//		{
//			if (x[i] == '.')
//			{
//				dot1 = i;
//				flag2 = 0;
//				break;
//			}
//		}
//		if (flag2 == 1) dot1 = i;
//		flag2 = 1;
//		for (i = 0; i <= l2; i++)
//		{
//			if (y[i] == '.')
//			{
//				dot2 = i;
//				flag2 = 0;
//				break;
//			}
//		}
//		if (flag2 == 1) dot2 = i;
//		//找到小数点的位置
//		flag1 = 1;
//		if (dot1 < dot2) flag1 = 0;
//		else if (dot1 == dot2)
//		{
//			l0 = l1 < l2 ? l1 : l2;
//			for (i = 0; i <= l0; i++)
//			{
//				if (x[i] > y[i])
//					break;
//				if (x[i] == y[i])
//					j++;
//			}
//			if (i == l0 + 1 && j != l0 + 1) flag1 = 0;
//		}
//		//判断被减数与减数大小关系 
//		if (flag1 == 0)
//		{
//			strcpy(t, y);
//			strcpy(y, x);
//			strcpy(x, t);
//
//			l = l2;
//			l2 = l1;
//			l1 = l;
//
//			dot = dot2;
//			dot2 = dot1;
//			dot1 = dot;
//		}
//		//如果被减数小于减数，交换位置 
//		for (i = dot1 + 1; i <= l1; i++)
//		{
//			headx1 = i - (dot1 + 1) + 1;
//			x1[headx1] = x[i] - '0';
//		}
//		for (i = dot2 + 1; i <= l2; i++)
//		{
//			headx2 = i - (dot2 + 1) + 1;
//			x2[headx2] = y[i] - '0';
//		}
//		//转换小数部分
//		headx = headx1 >= headx2 ? headx1 : headx2;
//		for (i = headx; i >= 1; i--)
//		{
//			dif2[i] += x1[i] - x2[i];
//			if (dif2[i] < 0)
//			{
//				dif2[i] += 10;
//				dif2[i - 1]--;
//			}
//		}
//		if (dif2[i] == -1)
//		{
//			carry = -1;//保存借位 
//		}
//		//小数部分减法 
//		for (i = 0; i < dot1; i++)
//		{
//			headz1 = i;
//			z1[i] = x[dot1 - 1 - i] - '0';
//		}
//		for (i = 0; i < dot2; i++)
//		{
//			headz2 = i;
//			z2[i] = y[dot2 - 1 - i] - '0';
//		}
//		//转换整数部分
//		headz = headz1 >= headz2 ? headz1 : headz2;
//		for (i = 0; i <= headz; i++)
//		{
//			if (i == 0) dif1[i] += carry;
//			dif1[i] += z1[i] - z2[i];
//			if (dif1[i] < 0)
//			{
//				dif1[i] += 10;
//				dif1[i + 1]--;
//			}
//		}
//		//整数部分加法 
//		if (flag1 == 0)
//			printf("-");
//		//输出负号 
//		for (i = headz; i >= 0; i--)
//		{
//			printf("%d", dif1[i]);
//		}
//		//输出整数部分
//		endx = headx;
//		while (dif2[endx] == 0 && endx >= 1)
//			endx--;//除去小数部分的末尾0 
//		if ((dot1 < l1 || dot2 < l2) && endx >= 1)
//		{
//			printf(".");
//			for (i = 1; i <= endx; i++)
//			{
//				printf("%d", dif2[i]);
//			}
//		}
//		//输出小数部分
//		printf("\n");
//	}
//	return 0;
//}

//#define Max(a, b) (a > b? a:b)
//
//bool mystrcmp(char* s, char* t) {
//    int i, j;
//    for (i = 0, j = 0; s[i] != '\0' && t[j] != '\0' && s[i] == t[j]; i++, j++);
//    return t[j] == '\0' ? true : false;
//}
//
//int maxRepeating(char* sequence, char* word)
//{
//    if (strlen(sequence) < strlen(word))
//        return 0;
//    int maxrepeat = 0;
//    for (int i = 0; sequence[i] != '\0'; i++) {
//        int j = i;
//        int count = 0;
//        while (mystrcmp(sequence + j, word)) {
//            count++;
//            j += strlen(word);
//        }
//        maxrepeat = Max(count, maxrepeat);
//        if (j >= strlen(sequence))
//            break;
//    }
//    return maxrepeat;
//}


//#include<stdio.h>
//#include<string.h>
//char s[2010];
//int p[2010];
//int main()
//{
//    gets(s);
//    int len = strlen(s), id = 0, maxlen = 0;
//    for (int i = len; i >= 0; --i)
//    {
//        s[i + i + 2] = s[i];
//        s[i + i + 1] = '#';
//    }
//    s[0] = '*';
//    for (int i = 2; i < 2 * len + 1; ++i)
//    {
//        if (p[id] + id > i)
//            p[i] = p[2 * id - i] < p[id] + id - i ? p[2 * id - i] : p[id] + id - i;
//        else
//            p[i] = 1;
//        while (s[i - p[i]] == s[i + p[i]])
//            ++p[i];
//        if (id + p[id] < i + p[i])
//            id = i;
//        if (maxlen < p[i])
//            maxlen = p[i];
//    }
//    printf("%d", maxlen - 1);
//    return 0;
//}