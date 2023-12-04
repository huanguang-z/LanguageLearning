////Week 1
////int main()
////{
////	printf("hello world");
////	return 0;
////}
////int main()
////{
////	int a, b;
////	long int c;
////	while (scanf("%d %d", &a, &b) != EOF)
////	{
////		c = a + b;
////		printf("%ld\n", c);
////	}
////}
////#include<stdio.h>
////int main()
////{
////	float a;
////	while (scanf("%f", &a) != EOF)
////	{
////		printf("%-8.3f", a);
////		printf(" ");
////		printf("%6.0f\n", a);
////	}
////	return 0;
////}
//
////int main()
////{
////	int a, b, c, d, e, f;
////	int sec, min, hour;
////	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF)
////	{
////		if (c + f < 60)
////		{
////			sec = c + f;
////			if (b + e < 60)
////			{
////				min = b + e;
////				hour = a + d;
////			}
////			else
////			{
////				min = b + e - 60;
////				hour = a + d + 1;
////			}
////		}
////		else
////		{
////			sec = c + f - 60;
////			b += 1;
////			if (b + e < 60)
////			{
////				min = b + e;
////				hour = a + d;
////			}
////			else
////			{
////				min = b + e - 60;
////				hour = a + d + 1;
////			}
////		}
////		printf("%d %d %d\n", hour, min, sec);
////	}
////}
//
////int main(void)
////{
////	float a;
////	while (scanf("%f", &a)!=EOF)
////	{
////		a = a*2.54;
////		printf("%.1f\n", a);
////	}
////}
////int main(void)
////{
////	float a;
////	float b, c, d, e;
////	while (scanf("%f", &a) != EOF)
////	{
////		b = a * 0.5;
////		c = a * 4;
////		d = a * 8;
////		e = a * 24;
////		printf("%.3f\n", b);
////		printf("%.3f\n", c);
////		printf("%.3f\n", d);
////		printf("%.3f\n", e);
////	}
////}
//
////int main(void)
////{
////	long int a, b, c,max;
////	while (scanf("%ld %ld %ld", &a, &b, &c) != EOF)
////	{
////		if (a > b)
////		{
////			if (a > c)
////				max = a;
////			else
////				max = c;
////		}
////		else
////		{
////			if (b > c)
////				max = b;
////			else
////				max = c;
////		}
////		printf("%d\n", max);
////	}
////}
////#include<stdio.h>
////int main(void)
////{
////	int n, m, k, rest,tail;
////	scanf("%d %d %d", &n, &m, &k);
////	if ((n - m) <= 0 || (n - m) % k != 0)
////	{
////		printf("UnHappy!");
////	}
////	else
////	{
////		printf("Happy!");
////	}
////}
////int main(void)
////{
////	int a,score;
////	while (scanf("%d", &a) != EOF)
////	{
////		score = 100 - a;
////		if (score < 9)
////			printf("A\n");
////		else if (score < 19)
////		{
////			printf("B\n");
////		}
////		else if (score < 29)
////		{
////			printf("C\n");
////		}
////		else if (score < 39)
////		{
////			printf("D\n");
////		}else
////			printf("F\n");
////	}
////}
////#include<stdio.h>
////int main(void)
////{
////	long int a, b, c;
////	while (scanf("%ld %ld %ld", &a, &b, &c) != EOF)
////	{
////		if ((a + b > c) && (b + c > a) && (a + c > b))
////			printf("yes\n");
////		else
////			printf("no\n");
////	}
////}
////#include<stdio.h>
////#include<math.h>
////int main(void)
////{
////	int x, y;
////	while (scanf("%d", &x) != EOF)
////	{
////		if (x < 1)
////		{
////			y = pow(x, 2);
////		}
////		else if (x >=10)
////		{
////			y = 3 * x - 12;
////		}
////		else
////		{
////			y = 2 * x - 1;
////		}
////		printf("%d\n", y);
////	}
////
////}
////#include<stdio.h>
////int main(void)
////{
////	int a, b, c, max1, max2, temp, max;
////	int re1, re2, re3,re4;
////	while (scanf("%d %d %d", &a, &b, &c) != EOF)
////	{
////		if (a > b)
////		{
////			temp = a;
////			a = b;
////			b = temp;
////		}
////		if (a > c)
////		{
////			temp = a;
////			a = c;
////			c = temp;
////		}
////		if (b > c)
////		{
////			temp = b;
////			b = c;
////			c = temp;
////		}
////		re1 = a * b * c;
////		re2 = a + b + c;
////		re3 = (a + b) * c;
////		re4 = a * (b + c);
////		max1 = re1;
////		max2 = re3;
////		if (re1 < re2)
////			max1 = re2;
////		if (re3 < re4)
////			max2 = re4;
////		if (max1 > max2)
////			max = max1;
////		else
////			max = max2;
////		printf("%d\n", max);
////	}
////}
////#include<stdio.h>
////int main(void)
////{
////	int num;
////	int idx1, idx2, idx3, idx4,temp;
////	while (scanf("%d", &num) != EOF)
////	{
////		idx1 = (num / 1000 + 9) % 10;
////		idx2 = (num / 100 % 10 + 9) % 10;
////		idx3 = (num / 10 % 10 + 9) % 10;
////		idx4 = (num % 10 + 9) % 10;
////		num = idx3 * 1000 + idx4 * 100 + idx1 * 10 + idx2;
////		printf("The encrypted number is %d\n", num);
////	}
////}
////#include<stdio.h>
////int main(void)
////{
////	long int n;
////	while (scanf("%ld", &n) != EOF)
////	{
////
////			if (n % 2 == 0&&n!=2)
////			{
////				printf("YES\n");
////			}
////			else
////			{
////				printf("NO\n");
////			}
////	}
////}
////#include<stdio.h>
////int main(void)
////{
////	int a, b, c, d, e, f;
////	int sum1, sum2, num;
////	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF)
////	{
////		sum1 = a * 100 + b * 10 + c;
////		sum2 = d * 100 + e * 10 + f;
////		num = sum1 / sum2;
////		printf("%d\n", num);
////	}
////}
////#include<stdio.h>
////int main(void)
////{
////	long long int n;
////	while (scanf("%lld", &n) != EOF)
////	{
////		printf("%lld\n", 2 * n - 1);
////	}
////}
//#include<iostream>
//#define MaxSize 1000
//using namespace std;
//int main(void)
//{
//	int Array[MaxSize];
//	int index = 0,flag;
//	for (int n = 2; n < 1000; n++)
//	{
//		flag = 1;
//		for (int i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			Array[index] = n;
//			index++;
//		}
//	}
//	int num1 = index-10;
//	int num2 = index;
//	cout << " 最小素数为： ";
//	for (int i = 0; i < 10; i++)
//		cout << Array[i] << " ";
//	cout << endl;
//	cout << " 最大素数为： ";
//	for (; index > num1; index--)
//		cout << Array[index-1] << " ";
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int m, n, x, y, i;
//	int temp;
//	while (scanf("%d %d", &m, &n) != EOF)
//	{
//		x = 0;
//		y = 0;
//		if (m > n)
//		{
//			temp = m;
//			m = n;
//			n = temp;
//		}
//		for (i = m; i <= n; i++)
//		{
//			if (i % 2)
//				y += pow(i, 3);
//			else
//			{
//				x += pow(i, 2);
//			}
//		}
//		printf("%d %d\n", x, y);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int i,n;
//	float result=0.0;
//	float Arr[100] = {1,1};
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			Arr[i] = i * Arr[i - 1];
//		}
//		for (i = 1; i <= n; i++)
//		{
//			result = result + 1.0 / Arr[i];
//		}
//		printf("%f\n", result);
//	}
//	return 0;
//}


//#include<stdio.h>
//#define MaxSize 101
//int main(void)
//{
//	int n, i, j, result = 0;
//	int num[6] = {};
//	int Money[MaxSize] = {};
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &Money[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			while (Money[i] != 0)
//			{
//				if (Money[i] >= 100)
//				{
//					Money[i] = Money[i] - 100;
//					num[0]++;
//				}
//				if (Money[i] < 100 && Money[i] >= 50)
//				{
//					Money[i] = Money[i] - 50;
//					num[1]++;
//				}
//				if (Money[i] < 50 && Money[i] >= 10)
//				{
//					Money[i] = Money[i] - 10;
//					num[2]++;
//				}
//				if (Money[i] < 10 && Money[i] >= 5)
//				{
//					Money[i] = Money[i] - 5;
//					num[3]++;
//				}
//				if (Money[i] < 5 && Money[i] >= 2)
//				{
//					Money[i] = Money[i] - 2;
//					num[4]++;
//				}
//				if (Money[i] < 2 && Money[i] >= 1)
//				{
//					Money[i] = Money[i] - 1;
//					num[5]++;
//				}
//			}
//
//		}
//		for (i = 0; i < 6; i++)
//		{
//			result = result + num[i];
//		}
//		for (i = 0; i < 6; i++)
//		{
//			Money[i] = 0;
//		}
//		for (i = 0; i < 6; i++)
//		{
//			num[i] = 0;
//		}
//		printf("%d\n", result);
//		result = 0;
//	}
//	return 0;
//}

//#include<stdio.h>
//#define maxsize 1000001
//int main(void)
//{
//	long int n, i, j;
//	int flag, num;
//	int a, b, c;
//	while (scanf("%ld", &n) != EOF)
//	{
//		j = 0;
//		for (i = 1; i <= 10000000; i++)
//		{
//			flag = 0;
//			num = i % 1000;
//			if (i % 6 == 0)
//			{
//				flag = 1;
//			}
//			a = num / 100;
//			b = num / 10 % 10;
//			c = num % 10;
//			if (a == 6 || b == 6 || c == 6)
//			{
//				flag = 1;
//			}
//			if (flag == 1)
//			{
//				j++;
//			}
//			if (j == n)
//				break;
//		}
//		printf("%ld\n", i);
//	}
//	return 0;
//}
// 
// 
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//
//	int x, y, num1=0,num2=0;
//	while (scanf("%d %d", &x, &y) != EOF)
//	{
//		if (x % 2 == 0)
//			num1 = num1 + pow(x, 2);
//		else
//			num2 = num2 + pow(x, 3);
//		if (y % 2 == 0)
//			num1 = num1 + pow(y, 2);
//		else
//			num2 = num2 + pow(y, 3);
//		printf("%d %d\n", num1, num2);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int a, b, c,flag,i;
//	int sq1, sq2,sq3;
//	int min, max;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		flag = 0;
//		min = abs(a - b);
//		max = a + b;
//		sq1 = a * a;
//		sq2 = b * b;
//		for (i = min + 1; i <= max; i++)
//		{
//			sq3 = i * i;
//			if (sq1 + sq2 == sq3 || sq2 + sq3 == sq1 || sq1 + sq3 == sq2)
//			{
//				flag = 1;
//				break;
//			}	
//		}
//		if (flag)
//		{
//			printf("%d\n", i);
//		}
//		else
//		{
//			printf("None\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//
//	}
//}

//#include<stdio.h>
//#define MaxSize 1000
//int max(int num1, int num2)
//{
//	int max = num1;
//	if (num1 < num2)
//		max = num2;
//	return max;
//}
//int main(void)
//{
//	int number, i = 0, cnt = 0, k = 0;
//	int Arr[MaxSize] = { 0 };
//	int Zero[MaxSize] = { 0 };
//	int Max[MaxSize] = { 0 };
//	while (scanf("%d", &Arr[i]) != EOF)
//	{
//		if (Arr[i] <= 0)
//		{
//			printf("%d\n", Max[cnt]);
//			cnt++;
//			number = 0;
//		}
//		if (i == 0)
//		{
//			number = Arr[0];
//		}
//		number = max(number, Arr[i]);
//		i++;
//		Max[cnt] = number;
//	}
//	return 0;
//}

//#include<stdio.h>
//int Min(int num1, int num2)
//{
//	int k = Max(num1, num2);
//	return num1 * num2 / k;
//}
//int Max(int num1, int num2)
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
//int main(void)
//{
//	char cc;
//	int a, b, c, d;
//	int time1, time2;
//	int e, f;
//	int MaxFactor, MinProduct;
//	while (scanf("%d %c %d %c %d %c %d", &a, &cc, &b, &cc, &c, &cc, &d) != EOF)
//	{
//		f = Min(b, d);
//		time1 = f / b;
//		time2 = f / d;
//		e = time1 * a + time2 * c;
//		MaxFactor = Max(e, f);
//		e = e / MaxFactor;
//		f = f / MaxFactor;
//		if (f == 1)
//		{
//			printf("%d\n", e);
//		}
//		else
//		{
//			printf("%d/%d\n", e, f);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int i, m, p, q, a;
//	int tmp;
//	while (scanf("%d", &n) != EOF)
//	{
//		m = 0;
//		for (i = 1, p = 0, q = 0; i <= n; i++)
//		{
//			p = 0;
//			q = 0;
//			tmp = i;
//			for (; tmp != 0;)
//			{
//				a = tmp % 2;
//				tmp = tmp / 2;
//				if (a == 0)
//					q++;
//				else
//					p++;
//			}
//			if (p > q)
//				m++;
//		}
//		printf("%d %d\n", m, n - m);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	long int n,Same;
//	int tmp,cnt,i,flag;
//	int sum;
//	int Array[10] = { 0 };
//	while (scanf("%ld", &n) != EOF)
//	{
//		Same = n;
//		sum = 0;
//		flag = 0;
//		cnt = 0;
//		if (n == 0)
//			break;
//		while (Same)
//		{
//			Array[cnt] = Same % 16;
//			Same/= 16;
//			cnt++;
//		}
//		for (i = 0; i < cnt; i++)
//		{
//			if (Array[i]<10 && Array[i]>-1)
//			{
//				sum += Array[i];
//				flag = 1;
//			}
//		}
//		if (flag==0)
//		{
//			printf("0\n");
//		}
//		else
//		{
//			printf("%d\n", sum);
//		}
//		for (i = 0; i < cnt; i++)
//			Array[i] = '\0';
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(void) 
//{
//	int n;
//	int i;
//	int sum;
//	int score;
//	while (scanf("%d", &n) != EOF)
//	{
//		sum = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &score);
//			if (score < 60)
//				sum += 200;
//		}
//		printf("%d\n", sum);
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
//		sum = 0;
//		for (; n > 0; n = n / 10)
//		{
//			sum += n % 10;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//

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


//#include<stdio.h>
//long long fac(long long n)
//{
//	int i;
//	long long sum = 1;
//	for (i = 1; i <= n; ++i) {
//		sum *= i;
//		sum %= 2009;
//	}
//	return sum;
//}
//int main()
//{
//	long int n;
//	while (scanf("%ld", &n) != EOF) {
//		if (n < 41)
//		{
//			printf("%lld\n", fac(n));
//		}
//		else {
//
//			printf("0\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//    int n, m, i, j;
//    scanf("%d", &n);
//    while (n != 0)
//    {
//        scanf("%d", &m);
//        if (m == 0) printf("1\n");
//        else
//        {
//            putchar('5');
//            for (i = 1; i < m; i++)
//                putchar('0');
//            putchar('5');
//            for (j = 1; j < m; j++)
//                putchar('0');
//            printf("\n");
//
//        }n--;
//    }return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int Arr[8] = {};
//	int i;
//	int flag;
//	int cnt;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < 8; i++)
//		{
//			Arr[i] = 0;
//		}
//		flag = 1;
//		cnt = 0;
//		while (n)
//		{
//			Arr[i] = n % 2;
//			n /= 2;
//			i++;
//		}
//		for (i = 0; i < 7; i++)
//		{
//			if (Arr[i] == 1)
//				cnt++;
//		}
//		if (cnt % 2 == 0)
//			flag = 0;
//		if (flag == Arr[7])
//			printf("Yes\n");
//		else
//			printf("No\n");
//		for (i = 0; i < 8; i++)
//		{
//			Arr[i] = 0;
//		}
//	}
//}

//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int n;
//	int num;
//	int i;
//	long long int result;
//	while (scanf("%d", &num) != EOF)
//	{
//		for (i = 0; i < num; i++)
//		{
//			scanf("%d", &n);
//			result = pow(2, n - 1);
//			printf("%lld\n", result);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int Max(long int num1, int num2)
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
//int Cal(long int a)
//{
//	int num = 0;
//	int gcd;
//	int i;
//	for (i = 1; i <= a; i++)
//	{
//		gcd = Max(i, 6);
//		if (gcd == 1)
//			num++;
//	}
//	return num;
//}
//int main(void)
//{
//	int n;
//	long int a, b;
//	int num1, num2;
//	int result;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		scanf("%ld %ld", &a, &b);
//		num1 = Cal(a);
//		num2 = Cal(b);
//		if (a == 1)
//			result = num2 - num1 + 1;
//		else
//			result = num2 - num1;
//		printf("%d\n", result);
//		n--;
//	}
//}

//#include<stdio.h>
//
//int main() {
//	int k;
//	scanf("%d", &k);
//	while (k--) 
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		int bb = b - b / 2 - b / 3 + b / 6; //b/2,b/3,b/6分别是求[1,b]区间内2,3,6倍数的个数
//		a--;
//		int aa = a - a / 2 - a / 3 + a / 6; //a/2,a/3,a/6分别是求[1,a-1]区间内2,3,6倍数的个数
//		printf("%d\n", bb - aa);
//	}
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    long long int i, j;
//    long long int n, m;
//    while (scanf("%lld %lld", &n, &m) != EOF && n != 0 && m != 0)
//    {
//        i = (4 * n - m) / 2;   //i是鸡的数量
//        j = n - i;             //j是兔的数量
//        if (m % 2 == 1 || i <= 0 || j <= 0)
//            printf("Error\n");
//        else
//            printf("%lld %lld\n", i, j);
//
//        if (n == 0 && m == 0)
//            break;
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int Isprime(long long int n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
//int main(void)
//{
//	long long int n, p;
//	int i;
//	while (scanf("%lld", &n) != EOF)
//	{
//
//		for (i = 2; i <= n; i++)
//		{
//			if (n % i == 0 && Isprime(i) == 1 && Isprime(n / i) == 1)
//			{
//				printf("%lld\n", n / i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//10.23
//#include<stdio.h>
//int main(void)
//{
//	long int t;
//	int hour, minute, second;
//	scanf("%ld", &t)
//	hour = t / 3600;
//	minute = (t - hour * 3600) / 60;
//	second = t - hour * 3600 - minute * 60;
//	printf("%d:%d:%d\n", hour, minute, second);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int money;
//	int comsuption;
//	int cnt;
//	while (scanf("%d", &money) != EOF)
//	{
//		cnt = 0;
//		comsuption = 0;
//		while (money >= 38)
//		{
//			cnt++;
//			money -= 38;
//			comsuption += 38;
//		}
//		while (money >= 18)
//		{
//			cnt++;
//			money -= 18;
//			comsuption += 18;
//		}
//		while (money >= 8)
//		{
//			cnt++;
//			money -= 8;
//			comsuption += 8;
//		}
//		if (comsuption > 68)
//			cnt++;
//		printf("%d\n", cnt);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n,cnt;
//	int num1,num2,num3,num;
//	while (scanf("%d", &n) != EOF)
//	{
//		num = 0;
//		cnt = 0;
//		num1 = n / 5-1;
//		num2 = n / 2-1;
//		num3 = n-1;
//		for (num1 = n / 5 - 1; num1 != 0; num1--)
//		{
//			for (num2 = n / 2 - 1; num2 != 0; num2--)
//			{
//				for (num3 = n - 1; num3 != 0; num3--)
//				{
//					num = num1 * 5 + num2 * 2 + num3 * 1;
//					if (num == n)
//						cnt++;
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a != 0)
//		{
//			printf("%d\n", a + b);
//		}
//		if (a == 0 && b == 0)
//			continue;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n, m;
//	int num;
//	long long int sum;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &m);
//		sum = 0;
//		while (m--)
//		{
//			scanf("%d", &num);
//			sum += num;
//		}
//		printf("%lld\n\n", sum);
//	}
//	return 0;
//}

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

//#include<stdio.h>
//int main(void)
//{
//	long long int L, R;
//	long int cnt;
//	int i;
//	int tmp;
//	while (scanf("%lld %lld", &L, &R) != EOF)
//	{
//		cnt = 0;
//		for (i = L; i <= R; i++)
//		{
//			tmp = i;
//			while (tmp)
//			{
//				if (tmp % 10 == 7)
//				{
//					cnt++;
//				}
//				tmp /= 10;
//			}
//		}
//		printf("%ld\n", cnt);
//	}
//	return 0;
//}
// 
// 
// 
//#include<stdio.h>
//#define MaxSize 20
//int main(void)
//{
//	int Arr[MaxSize] = {};
//	Arr[0] = 0;
//	Arr[1] = 1;
//	int i = 0;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < MaxSize; i++)
//		Arr[i + 2] = Arr[i + 1] + Arr[i];
//	for (i = 0; i < n-1; i++)
//		printf("%d, ", Arr[i]);
//	printf("%d", Arr[i]);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int n = 0;
//	char ch;
//	int i, j;
//	int num = 0;
//	int len;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf(" %c", &ch);
//		num = ch - 'A' + 1;
//		len = 2 * num + 1;
//		for (i = 1; i <= num - 1; i++)//字母
//		{
//			for (j = 0; j < num; j++)
//				printf(" ");
//			printf("%c\n", 'A' + i - 1);
//			for (j = num - i; j > 0; j--)
//				printf(" ");
//			for (j = 0; j < 2 * i + 1; j++)
//				printf("%c", 'A' + i - 1);
//			printf("\n");
//		}
//		for (j = 0; j < num; j++)
//			printf(" ");
//		printf("%c\n", ch);
//		for (j = 0; j < len; j++)
//			printf("%c", ch);
//		printf("\n");
//		n--;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	long long int t, n;
//	long long int i;
//	long long int sum;
//	scanf("%lld", &t);
//	while (t)
//	{
//		scanf("%d", &n);
//		sum = 1;
//		int abc = sqrt(n);
//		if (abc * abc == n && abc != 1)
//		{
//			for (i = 2; i < abc; i++)
//			{
//				if (n % i == 0)
//				{
//					sum += i;
//					sum += (n / i);
//				}
//			}
//			sum += abc;
//		}
//		else
//		{
//			for (i = 2; i <= abc; i++)
//			{
//				if (n % i == 0)
//				{
//					sum += i;
//					sum += (n / i);
//				}
//			}
//		}
//		printf("%lld\n", sum);
//		t--;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    long long int n, tmp, s = 0;
//    while (scanf("%lld", &n) != EOF)
//    {
//        s = 0;
//        if (n < 0)
//        {
//            printf("-");
//        }
//        tmp = abs(n);
//        while (tmp)
//        {
//            s = s * 10 + tmp % 10;
//            tmp /= 10;
//        }
//        printf("%d\n", s);
//    }
//    return 0;
//}

//#include<stdio.h>
//#define MaxSize 1001
//int Num[MaxSize] = { 0 };
//int main(void)
//{
//	int  n, a;
//	int i;
//	while (scanf("%d", &n) != EOF)
//	{
//		int flag = -1;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &Num[i]);
//		}
//		scanf("%d", &a);
//		for (i = 0; i < n; i++)
//		{
//			if (a == Num[i])
//			{
//				flag = i + 1;
//				break;
//			}
//		}
//		printf("%d\n", flag);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int N;
//	int i;
//	long long int sum, num;
//	while (scanf("%d", &N) != EOF)
//	{
//		sum = 0;
//		if (N == 0)
//			break;
//		for (i = 0; i < N; i++)
//		{
//			scanf("%lld", &num);
//			sum += num;
//		}
//		printf("%lld\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int IsRunYear(int Year)
//{
//	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
//		return 1;
//	else return 0;
//}
//void Calculate(int Number[],int date) {
//	switch (date)
//	{
//	case 1:
//		Number[1]++; 
//		break;
//	case 2:
//		Number[2]++; 
//		break;
//	case 3:
//		Number[3]++; 
//		break;
//	case 4:
//		Number[4]++; 
//		break;
//	case 5:
//		Number[5]++; 
//		break;
//	case 6:
//		Number[6]++; 
//		break;
//	case 0:
//		Number[7]++; 
//		break;
//	default:
//		break;
//	}
//}
//int CountNumber(int Number[], int YeaR, int Date)
//{
//	int Month;
//	for (Month = 1; Month <= 12; Month++) {
//		Date = (Date + 12) % 7;
//		Calculate(Number,Date);
//		if (Month == 2) 
//		{
//			if (IsRunYear(YeaR)==0)
//				Date = (Date + 16) % 7;
//			else
//				Date = (Date + 17) % 7;	
//		}
//		else if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {
//			Date = (Date + 18) % 7;
//		}
//		else {
//			Date = (Date + 19) % 7;
//		}
//	}
//	return Date;
//}
//
//int main(void)
//{
//	int n;
//	int i;
//	int Date,Year;
//	int Num[8] = { 0,0,0,0,0,0,0,0 };
//	while (scanf("%d",&n)!=EOF)
//	{
//		for (int i = 0; i < 8; i++)
//		{
//			Num[i] = 0;
//		}
//		Date = 1;
//		for (Year = 1900; Year <= 1900 + n - 1; Year++)
//		{
//			Date = CountNumber(Num,Year,Date);
//		}
//		for (i = 6; i <= 7; i++)
//		{
//			printf("%d ", Num[i]);
//		}
//		for (i = 1; i <= 4; i++)
//		{
//			printf("%d ", Num[i]);
//		}
//		printf("%d\n", Num[5]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#define MaxSize 50002
//long long int Arr[MaxSize] = {0};
//int main(void)
//{
//	long int n,x,i;
//	long int max;
//	long int Position;
//	scanf("%ld", &n);
//	while (n)
//	{
//		scanf("%ld", &x);
//		Arr[x]++;
//		n--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (Arr[i] > Arr[i + 1])
//		{
//			max = Arr[i];
//			Position = i;
//		}
//	}
//	printf("%ld\n%ld\n", max, Position);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int i;
//	int tmp;
//	int cnt = 0;
//	scanf("%d", &n);
//	cnt += n / 7;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 7 == 0)
//			continue;
//		while (tmp)
//		{
//			tmp=i;
//			if (tmp % 10 == 7)
//			{
//				cnt++;
//				break;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int countFactorialZero(int num) //- 给定一个整数N，那么N的阶乘N！末尾有多少个0呢？例如：N＝10，N！＝3 628 800，N！的末尾有两个0。
//{
//	int count = 0;
//	for (int i = 1; i <=num; i++)
//	{
//		int j = i;
//		while (j % 5 == 0)
//		{
//			count++;
//			j /= 5;
//		}
//	}
//	return count;
//}
//int main(void)
//{
//	int n;
//	int cnt;
//	while (scanf("%d", &n) != EOF)
//	{
//		cnt = 0;
//		if (n <= 4)
//		{
//			printf("0\n");
//			continue;
//		}
//		cnt = countFactorialZero(n);
//		printf("%d\n", cnt);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int T;
//	int n;
//	int i, j, k;
//	int row;
//	int tmp;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		for (i = 0; i < n - 1; i++)
//		{
//			printf("-");
//		}
//		printf("\n");
//		printf("%c", 92);
//		for (i = 0; i < n - 3; i++)
//			printf(" ");
//		printf("/\n", 92);
//		for (row = 3; row <= n / 2; row++)
//		{
//
//			for (j = 0; j < row - 2; j++)
//				printf(" ");
//			printf("%c", 92);
//			if (row == n / 2)
//				printf("*");
//			if (row != n / 2)
//			{
//				tmp = n - 2 * row + 1;
//				for (j = 0; j < tmp; j++)
//					printf("*");
//			}
//			printf("/\n");
//		}
//		for (row = n / 2 + 1; row <= n - 1; row++)
//		{
//			for (i = 0; i < n - row - 1; i++)
//				printf(" ");
//			printf("/");
//			for (i = 0; i < row - n / 2 - 1; i++)
//				printf(" ");
//			printf("*");
//			for (i = 0; i < row - n / 2 - 1; i++)
//				printf(" ");
//			printf("%c\n", 92);
//		}
//		for (i = 0; i < n - 1; i++)
//		{
//			printf("-");
//		}
//		printf("\n");
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define MaxSize 500
//
//int Num[4];
//int main(void)
//{
//	int num;
//	int i = 0;
//	char Arr[MaxSize];
//	char* p = NULL;
//	while (scanf("%s", Arr) != EOF)
//	{
//		getchar();
//		i = 0;
//		memset(Num, 0, sizeof(Num));
//		p = Arr;
//		while (*p)
//		{
//			if (*p == 'C')
//				Num[1]++;
//			if (*p == 'S')
//				Num[2]++;
//			if (*p == 'U')
//				Num[3]++;
//			p++;
//		}
//		num = Num[1];
//		if (num > Num[2])
//			num = Num[2];
//		if (num > Num[3])
//			num = Num[3];
//		printf("%d\n", num);
//		memset(Arr, '\0', sizeof(Arr));
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1008
//char Po[MaxSize] = { '\0' };
//int main(void)
//{
//	int n;
//	int i;
//	int result;
//	while (scanf("%d %s", &n, Po) != EOF)
//	{
//		result = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (Po[i] == 'R')
//				result++;
//			else
//				result--;
//		}
//		while (result < 0)
//			result += 4;
//		result = result % 4;
//		if (result == 0)
//			printf("N\n");
//		if (result == 1)
//			printf("E\n");
//		if (result == 2)
//			printf("S\n");
//		if (result == 3)
//			printf("W\n");
//		memset(Po, '\0', sizeof(Po[0]) * (n + 1));
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define MaxSize 1002
//int main(void)
//{
//	char Arr[MaxSize];
//	char* p = NULL;
//	while (scanf("%s", Arr) != EOF)
//		{
//			getchar();
//			p = Arr;
//			while (*p)
//			{
//				if (*p == 'T')
//				*p = 'U';
//				printf("%c",*p);
//				p++;
//			}
//			printf("\n");
//		}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//long long int Arr[93];
//int main(void)
//{
//	Arr[1] = 1;
//	Arr[2] = 2;
//	int i;
//	for (i = 3; i <= 91; i++)
//		Arr[i] = Arr[i - 1] + Arr[i - 2];
//	long long int x;
//	while (scanf("%lld", &x) != EOF)
//	{
//		for (i = 1; i <= 91; i++)
//		{
//			if (Arr[i] == x)
//				break;
//		}
//		if (i == 92)
//			printf("0\n");
//		else
//		{
//			printf("%d\n", i);
//		}
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

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define MaxSize 52
//int Num[27];
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
//			Num[Arr[i] - 'a' + 1]++;
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
//int main(void)
//{
//	char Arr[MaxSize];
//	int flag;
//	int i, sum;
//	while (scanf("%s", Arr) != EOF)
//	{
//		flag = Judge(Arr);
//		sum = 0;
//		for (i = 1; i <= 26; i++)
//		{
//			if (Num[i] > 0)
//				sum++;
//		}
//		if (flag == 0)
//			printf("NO\n");
//		else
//		{
//			printf("YES %d\n", sum);
//		}
//		memset(Num, 0, sizeof(Num));
//		memset(Arr, '\0', sizeof(Arr));
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 530
//long long int Arr[MaxSize];
//int Flag(long long int n)
//{
//	int i = 0;
//	int flag = 1;
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
//	int arr[MaxSize][MaxSize] = { 0 };
//	int x = 0;
//	int y = 0;
//	int n;
//	long long int i, j, k = 0;
//	int flag;
//	Arr[0] = 2;
//	Arr[1] = 3;
//	for (i = 5, k = 2; k < 508; i += 2)
//	{
//		flag = Flag(i);
//		if (flag)
//		{
//			Arr[k] = i;
//			k++;
//		}
//	}
//	while (scanf("%d", &n) != EOF)
//	{
//		j = 0;
//		for (x = 1; x <= n; x++)
//		{
//			//打印数字
//			for (y = 1; y <= x; y++)
//			{
//
//				if (y == 1 || y == x)
//				{
//					arr[x][y] = 1;
//					printf("%d", arr[x][y]);
//					if (y != n)
//						printf(" ");
//				}
//				else
//				{
//					arr[x][y] = arr[x - 1][y - 1] + arr[x - 1][y];
//					printf("%d ", arr[x][y]);
//				}
//			}
//			for (i = 0; i < n - x - 1; i++)
//			{
//				printf("%lld ", Arr[j]);
//				j++;
//			}
//			if (i == n - x - 1)
//			{
//				printf("%lld\n", Arr[j]);
//				j++;
//			}
//		}
//		printf("\n\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int Max(int num1, int num2)
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
//int Min(int num1, int num2)
//{
//	int k = Max(num1, num2);
//	return num1 * num2 / k;
//}
//
//int IsRunYear(int Year)
//{
//	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
//		return 0;
//	else return 1;
//}
//int main(void)
//{
//	int t;
//	int gcd, lcm;
//	int flag;
//	int Year;
//	int Tmp;
//	int Y, M, D;
//	int i, j, k;
//	int Re1, Re2;
//	while (scanf("%d", &t) != EOF)
//	{
//		for (k = 1; k <= t; k++)
//		{
//			flag = 0;
//			scanf("%d %d %d", &gcd, &lcm, &Year);
//			Tmp = gcd * lcm;
//			for (i = 1; i <= 12; i++)
//			{
//				if (Tmp % i != 0)
//					continue;
//				j = Tmp / i;
//				if (j > 31)
//					continue;
//				Re1 = Max(i, j);
//				Re2 = Min(i, j);
//				if (Re1 == gcd && Re2 == lcm)
//				{
//					M = i;
//					D = j;
//					flag++;
//					if (IsRunYear(Year) && M == 2)
//					{
//						if (D == 29)
//							flag--;
//					}
//				}
//			}
//			if (flag == 0)
//				printf("Case #%d: -1\n", k);
//			else if (flag > 1)
//				printf("Case #%d: 1\n", k);
//			else
//			{
//				printf("Case #%d: %d/", k, Year);
//				if (M < 10)
//					printf("0");
//				printf("%d/", M);
//				if (D < 10)
//					printf("0");
//				printf("%d\n", D);
//			}
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int Max(int num1, int num2)
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
//int Min(int num1, int num2)
//{
//	int k = Max(num1, num2);
//	return num1 * num2 / k;
//}
//void Print(long long int Fenzi, long long int Fenmu)
//{
//	if (Fenzi == 0)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		int Z;
//		long long int Tmp;
//		if (abs(Fenzi) >= Fenmu)
//		{
//			if (Fenzi < 0)
//			{
//				Tmp = abs(Fenzi);
//				if (Tmp % Fenmu == 0)
//				{
//					printf("-%lld\n", Tmp / Fenmu);
//				}
//				else
//				{
//					Z = Tmp / Fenmu + 1;
//					Tmp = Fenmu * Z - Tmp;
//					printf("-%lld+%lld/%lld\n", Z, Tmp, Fenmu);
//				}
//			}
//			else
//			{
//				if (Fenzi % Fenmu == 0)
//				{
//					printf("%lld\n", Fenzi / Fenmu);
//				}
//				else
//				{
//					Z = Fenzi / Fenmu;
//					Fenzi = Fenzi - Z * Fenmu;
//					if (Z != 0)
//						printf("%lld+%lld/%lld\n", Z, Fenzi, Fenmu);
//					if (Z == 0)
//						printf("%lld/%lld\n", Fenzi, Fenmu);
//				}
//			}
//		}
//		else
//		{
//			if (Fenzi < 0)
//				printf("-");
//			if (Fenzi != 0)
//				printf("%lld/%lld\n", abs(Fenzi), Fenmu);
//		}
//	}
//}
//int main(void)
//{
//	int a, b, c, d;
//	char ch;
//	long long int FenMu, FenZi, gcd, lcm;
//	int Tim1, Tim2;
//	long long int Tmp;
//	while (scanf("%d/%d%c%d/%d", &a, &b, &ch, &c, &d) != EOF)
//	{
//		lcm = Min(b, d);
//		Tim1 = lcm / b;
//		Tim2 = lcm / d;
//		if (ch == '-')
//		{
//			FenZi = a * Tim1 - c * Tim2;
//			Tmp = abs(FenZi);
//			gcd = Max(Tmp, lcm);
//			FenZi/=gcd;
//			lcm=lcm/gcd;
//			Print(FenZi, lcm);
//		}
//		else
//		{
//			FenZi = a * Tim1 + c * Tim2;
//			gcd = Max(FenZi, lcm);
//			FenZi /= gcd;
//			lcm = lcm / gcd;
//			Print(FenZi, lcm);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//int max(int a, int b)
//{
//	int max = a;
//	if (a < b)
//		max = b;
//	return max;
//}
//int main(void)
//{
//	int Tower[101][101];
//	int Depth[101][101];
//	int n;
//	int i, j;
//	while (scanf("%d", &n) != EOF)
//	{
//		memset(Tower, 0, sizeof(Tower));
//		memset(Depth, 0, sizeof(Tower));
//		for (i = 1; i <= n; i++)
//			for (j = 1; j <= i; j++)
//				scanf("%d", &Tower[i][j]);
//		for (j = 1; j <= n; j++)
//			Depth[n][j] = Tower[n][j];
//		for (i = n - 1; i >= 1; i--)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				Depth[i][j] = max(Depth[i + 1][j], Depth[i + 1][j + 1]) + Tower[i][j];
//			}
//		}
//		printf("%d\n", Depth[1][1]);
//	}
//	return 0;
//}
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
//void trans(struct Bint *a, char str[])//  将输入的字符串形式的数 转换为结构体
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
//    while (scanf("%s %s",A,B)!=EOF)
//    {
//        getchar();
//        add(A, B);
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 100
//char Arr[MaxSize];
//int main(void)
//{
//	long long int n;
//	long long int i,j;
//	char ch;
//	while (scanf("%s", Arr) != EOF)
//	{
//		getchar();
//		char* p = Arr;
//		while (*p)
//		{
//			if (*p >= 'a' && *p <= 'z')
//			{
//				ch = *p;
//				ch = 'z' - ch + 'a';
//				*p = ch;
//			}
//			else if (*p >= 'A' && *p <= 'Z')
//			{
//				ch = *p;
//				ch = 'Z' - ch + 'A';;
//				*p = ch;
//			}
//			p++;
//		}
//		printf("%s\n", Arr);
//		memset(Arr, '0', sizeof(Arr));
//	}
//	 return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int flag=0;
//	//定义整型变量flag用来记录是否为素数，1代表是，0代表不是
//	int n;
//	int i;
//	int cnt;
//	int L, R;
//	while(scanf("%d %d", &L, &R) != EOF)
//	{
//		cnt = 0;
//		for (n = L; n <=R; n++)
//		{
//			for (i = 2; i < n; i++)
//			{
//				flag = 1;                        //flag默认为1
//				if (n % i == 0)
//				{
//					flag = 0;                    //如果不符合素数要求，则把flag置为0
//					break;                       //并跳出循环
//				}
//			}
//			if (flag == 1||n==2)                        //判断是否是素数
//			{
//				if (n <= 10)
//				{
//					if (n == 2 || n == 3 || n == 5 || n == 7)
//						cnt++;
//				}
//				else if (n / 100 == 0)                //判断是否是两位数
//				{
//					if (n / 10 == n % 10)        //判断十位和各位是否相同
//					{
//						cnt++;
//					}
//				}
//				else
//				{
//					if (n / 100 == n % 10)       //判断百位和个位是否相同
//					{
//						cnt++;
//					}
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1000
//struct Date
//{
//	int Day;
//	int Mon;
//	int Year;
//}Arr[100];
//typedef struct Date* node;
//int cmp_s(const void* elem1, const void* elem2)
//{
//	struct Date* p1 = (node)elem1;
//	struct Date* p2 = (node)elem2;
//	if (p1->Year!=p2->Year)
//		return p1->Year-p2->Year;
//	else if (p1->Mon != p2->Mon)
//		return p1->Mon -p2->Mon;
//	else
//		return p1->Day - p2->Day;
//}
//int main(void)
//{
//	long long int n;
//	long long int i;
//	memset(Arr, 0, sizeof(Arr));
// //	scanf("%lld", &n);
//	i = 0;
//	while (i < n)
//	{
//		scanf("%d/%d/%d", &Arr[i].Mon, &Arr[i].Day, &Arr[i].Year);
//		i++;
//	}
//	qsort(Arr, n, sizeof(struct Date), cmp_s);
//	for (i = 0; i < n; i++)
//	{
//		if (Arr[i].Mon < 10)
//			printf("0");
//		printf("%d/", Arr[i].Mon);
//		if(Arr[i].Day<10)
//			printf("0");
//		printf("%d/", Arr[i].Day);
//		printf("%d\n", Arr[i].Year);
//	}
//	 return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	long long int n;
//	long long int i, cnt;
//	while (scanf("%lld", &n) != EOF)
//	{
//		if (n == 0)
//			break;
//		i = 0;
//		cnt = 0;
//		for (i = 1; i < n; i *= 3)
//		{
//			cnt++;
//		}
//		printf("%lld\n", cnt);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 1299720
//long long int Arr[MaxSize];
//int main(void)
//{
//	long long int i, n, j, k;
//	long long int a, b;
//	long long int tmp;
//	for (i = 0; i <= 1299709; i++)
//		Arr[i] = 1;
//	for (i = 2; i <= 1299709; i++)
//	{
//		if (Arr[i])
//		{
//			for (j = i * 2; j <= 1299709; j += i)
//				Arr[j] = 0;
//		}
//	}
//	while (scanf("%lld", &n) != EOF)
//	{
//		a = n;
//		b = n;
//		for (a; Arr[a] == 0; a--);
//		for (b; Arr[b] == 0; b++);
//		tmp = b - a;
//		printf("%lld\n", tmp);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MaxSize 1002
//typedef struct Num* node;
//struct Num
//{
//	char str[MaxSize];
//}Arr[202];
//int cmp_s(const void* elem1, const void* elem2)
//{
//	struct Num* p1 = (node)elem1;
//	struct Num* p2 = (node)elem2;
//	int Len1 = strlen(p1->str);
//	int Len2 = strlen(p2->str);
//	if (Len1 != Len2)
//		return Len1 - Len2;
//	else
//		return strcmp(p1->str,p2->str);
//}
//int main(void)
//{
//	long long int n;
//	long long int i,j;
//	memset(Arr, 0, sizeof(Arr));
//	while (scanf("%lld", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			getchar();
//			scanf("%s", Arr[i].str);
//		}
//		qsort(Arr, n, sizeof(struct Num), cmp_s);
//		for (i = 0; i < n; i++)
//			printf("%s\n", Arr[i].str);
//		memset(Arr, '\0', sizeof(struct Num));
//	}
//	 return 0;
//}

//#include<stdio.h>
//long long int Arr[30];
//void fib(int n)
//{
//	int i;
//	Arr[1] = 0;
//	Arr[2] = 1;
//	Arr[3] = 1;
//	for (i = 4; i <= n; i++)
//		Arr[i] = Arr[i - 1] + Arr[i - 2];
//}
//int main(void)
//{
//	long long int w, n, m, x,tmp,t;
//	fib(30);
//	while (scanf("%lld %lld %lld %lld", &w, &n, &m, &x) != EOF)
//	{
//		tmp = m - (Arr[n - 2] + 1) * w;
//		t = tmp / (Arr[n - 1] - 1);
//		if (x == 1 || x == 2)
//			printf("%lld\n", w);
//		else if (x == 3)
//			printf("%lld\n", 2 * w);
//		else if (x == n)
//			printf("0\n");
//		else
//			printf("%lld\n", (Arr[x - 1] + 1) * w + (Arr[x] - 1) * t);
//	}
//	return 0;
//}

//#include <cstdio>
//#include <cstring>
//#define N 10001
//char s[N];
//using namespace std;
//int main() {
//    while (~scanf("%s", s)) {
//        int len = strlen(s);
//        int flag = 0, i;
//        for (i = len / 2 - 1; i >= 0; --i) {
//            if (s[i] > s[len - 1 - i]) { flag = 1; break; }
//            else if (s[i] < s[len - 1 - i]) { flag = -1; break; }
//        }
//        if (flag != 1) {//前半串要加1
//            //s[(len-1)/2]++;
//            for (i = (len - 1) / 2; i >= 0; --i) {//199 191 999
//                s[i]++;
//                if (s[i] > '9') {
//                    s[i] = '0';
//                }
//                else break;
//            }
//            if (s[0] == '0') {//999 9999
//                s[0] = '1';
//                len++;
//                s[len / 2] = '0';
//            }
//        }
//        for (i = 0; i < len / 2; ++i)
//            printf("%c", s[i]);
//        for (i = (len + 1) / 2 - 1; i >= 0; --i)
//            printf("%c", s[i]);
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 1002
//char Arr[MaxSize];
//long long Num[MaxSize] = {0};
//int main(void)
//{
//	long long int tmp = 0;
//	long long int i=0;
//	while (scanf("%s", Arr) != EOF)
//	{
//		char* p = Arr;
//		int flag = 1;
//		while (*p)
//		{
//			if (*p!='0'&&flag=='1')
//			{
//				flag=0;
//			}
//			else if (*p == '5')
//			{
//				Num[i] = tmp;
//				i++;
//				p++;
//				flag = 1;
//				continue;
//			}
//			else
//			{
//				tmp = tmp * 10 + (*p - '0');
//			}
//			
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct PolyNode* Polynomial;
//struct PolyNode {
//	int coef;
//	int expon;
//	Polynomial link;
//};
//void Attach(int c, int e, Polynomial* pRear);
//Polynomial ReadPoly(int N);
//void PrintPoly(Polynomial P);
//Polynomial Add(Polynomial P1, Polynomial P2);
//int main() {
//	int m, n;
//	scanf("%d %d", &m, &n);
//	Polynomial P1, P2, PS;
//	P1 = ReadPoly(m);
//	P2 = ReadPoly(n);
//	PS = Add(P1, P2);
//	PrintPoly(PS);
//	return 0;
//}
//
//void Attach(int c, int e, Polynomial* pRear)
//{
//	Polynomial P=NULL;
//	P = (Polynomial)malloc(sizeof(struct PolyNode));
//	P->coef = c;
//	P->expon = e;
//	P->link = NULL;
//	(*pRear)->link = P;
//	*pRear = P; // 修改pRear值
//}
//
//Polynomial ReadPoly(int N)
//{
//	Polynomial P, Rear, t;
//	int c, e;
//	//临时创建一个头结点，以后还要删除
//	P = (Polynomial)malloc(sizeof(struct PolyNode)); // 链表头空结点
//	P->link = NULL;
//	Rear = P;
//	while (N--) {
//		scanf("%d %d", &c, &e);
//		Attach(c, e, &Rear); // 将当前项插入多项式尾部 
//	}
//	t = P; P = P->link; free(t); // 删除临时生成的头结点
//	return P;
//}
//
//void PrintPoly(Polynomial P)
//{ // 输出多项式
//	int flag = 0; // 辅助调整输出格式用 
//	if (!P) { printf("0 0\n"); return; }
//	while (P) {
//
//		printf("%d %d\n", P->coef, P->expon);
//		P = P->link;
//	}
//	printf("\n");
//}
//
//
//Polynomial Add(Polynomial P1, Polynomial P2) {
//	Polynomial P, Rear, t1, t2, t;
//	if (!P1 && !P2) return NULL;//如果都为NULL，就得返回了。因为没法做加法。
//	t1 = P1;
//	t2 = P2;
//	P = (Polynomial)malloc(sizeof(struct PolyNode)); 
//	if (P== NULL)
//		return NULL;
//	P->link = NULL;
//	Rear = P;
//	//注意该链表没有头结点
//	while (t1 != NULL && t2 != NULL) {
//
//		if (t1->expon < t2->expon)
//		{
//			Rear->link = t2;
//			t2 = t2->link;
//			Rear = Rear->link;
//		}
//		else if (t2->expon < t1->expon) {
//			Rear->link = t1;
//			t1 = t1->link;
//			Rear = Rear->link;
//		}
//		else //相等
//		{
//			t2->coef += t1->coef;
//			if (t2->coef != 0) //为0就抵消了
//			{
//				Rear->link = t2;
//				t2 = t2->link;
//				Rear = Rear->link;
//			}
//			else {
//				t = t2;
//				t2 = t2->link;
//				free(t);
//			}
//			t = t1;
//			t1 = t1->link;
//			free(t);
//		}
//
//	}
//	if (t1 == NULL) {
//		Rear->link = t2;
//	}
//	else if (t2 == NULL) {
//		Rear->link = t1;
//	}
//	t2 = P; P = P->link; 
//	free(t2);
//	return P;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define MaxSize 10005
//char Str1[MaxSize] = {};
//char Str2[MaxSize] = {};
//int inc(const void* a, const void* b)
//{
//	return strcmp((char*)a, (char*)b);
//}
//int main(void)
//{
//	int Len1, Len2;
//	int i,j;
//	memset(Str1, '\0', sizeof(Str1[1]));
//	memset(Str2, '\0', sizeof(Str2[1]));
//	while (gets_s(Str1) != NULL)
//	{
//		Len1 = strlen(Str1);
//		Len2 = strlen(Str2);
//		gets_s(Str2);
//		qsort(Str1, Len1, sizeof(Str1[1]), inc);
//		qsort(Str2, Len2, sizeof(Str2[1]), inc);
//		for (i = 0; Str2[i] != '\0'; i++)
//		{
//			for (j = 0; Str1[j] != 0; j++)
//			{
//				if(Str2[])
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#define xxn(n) (n>=0 && n<= 255)?1:0
//
//int main(void)
//{
//    char IP[16];
//    int a, b, c, d, i;
//    while (scanf("%s", IP) != EOF)
//    {
//        int n = strlen(IP);
//        //判断是否有前置0情况
//        if (IP[0] == '0')
//        {
//            printf("N\n");
//            continue;
//        }
//        for (i = 0; i < n; i++)
//        {
//            if (IP[i] == '.')
//            {
//                if (IP[i + 1] == '0')
//                {
//                    printf("N\n");
//                    break;
//                }
//            }
//        }
//        if (i != n)
//            continue;
//        //
//     //IP地址按如下格式获取应该获取到4个值，否则不是IP。
//        if (sscanf(IP, "%d.%d.%d.%d", &a, &b, &c, &d) == 4)
//        {
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
//            printf("N\n");
//        }
//    }
//    return 0;
//}

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
//void print(struct Bint s, char A[], char B[])//  输出函数
//{
//    printf("%s + %s = ",A,B);
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
//    print(ans,A,B);
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



//#include <stdio.h>
//int main()
//{
//    long long int L, R, i, k,tmp;
//    long long int ans;
//    while (scanf("%lld %lld %lld", &L, &R, &k) != EOF) {
//        ans = 0;
//        for (i = L; i <= R; i++)
//        {
//            tmp = i;
//            while (tmp > 0)
//            {
//                if (tmp % 10 == k) ans++;
//                tmp = tmp / 10;
//            }
//        }
//        printf("%lld\n", ans);
//    }
//    return 0;
//}
//#include<stdio.h>
//#define MaxSize 102
//int main(void) {
//	int n,i;
//	scanf("%d", &n);
//	int Arr[MaxSize] = { 0 };
//	for (i = n; i >= 0; i--)
//		scanf("%d", &Arr[i]);
//	if (Arr[n] != 0)
//		printf("%dx^%d", Arr[n], n);
//	for (i = n-1; i > 1; i--) {
//		if (Arr[i] == 0)
//			continue;
//		if (Arr[i] != 1 && Arr[i] != -1) {
//			if(Arr[i]>0)
//				printf("+%dx^%d", Arr[i], i);
//			if (Arr[i] < 0)
//				printf("%dx^%d", Arr[i], i);
//		}
//		else if(Arr[i]==1)
//			printf("+x^%d",  i);
//		else if (Arr[i] == -1)
//			printf("-x^%d", i);
//	}
//	if(Arr[1]>0&&Arr[1]!=1)
//		printf("+%dx", Arr[1]);
//	else if (Arr[1] > 0 && Arr[1] == 1)
//		printf("+x");
//	if (Arr[1] < 0 && Arr[1] != -1)
//		printf("%dx", Arr[1]);
//	else if (Arr[1] < 0 && Arr[1] == -1)
//		printf("-x");
//	if(Arr[0]>0)
//		printf("+%d", Arr[0]);
//	if (Arr[0] < 0)
//		printf("%d", Arr[0]);
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//const int N = 25;
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { 1, -1, 0, 0 };
//int n, m, ans = 0;
//bool v[N][N];
//char mp[N][N];
//
//void dfs(int x, int y) {
//    v[x][y] = true;
//    ans++;
//    for (int i = 0; i < 4; ++i) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx < 0 || nx >= n || ny < 0 || ny >= m || v[nx][ny] == true || mp[nx][ny] == '#') continue;
//        dfs(nx, ny);
//    }
//}
//
//int main() {
//
//    while (true) {
//        cin >> m >> n;
//        if (n == 0 && m == 0) break;
//        ans = 0;
//        memset(v, 0, sizeof v);
//        int x, y;
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < m; ++j) {
//                cin >> mp[i][j];
//                if (mp[i][j] == '@') x = i, y = j;
//            }
//        }
//
//        dfs(x, y);
//        cout << ans << endl;
//    }
//
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS  1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 100005
//int Arr[MaxSize];
//int Cnt[MaxSize];
//int main(void) {
//	int flag;
//	int T, N, K;
//	int i,j,k,len;
//	int pos;
//	scanf("%d", &T);
//	while (T--) {
//		memset(Arr, 0, sizeof(Arr));
//		scanf("%d %d", &N, &K);
//			for (i = 0; i < N; i++) {
//				scanf("%d",&Arr[i]);
//			}
//		if (N % K != 0)
//		{
//			printf("NO\n");
//			continue;
//		}
//		memset(Cnt, 0, sizeof(Cnt));
//		for (i = 0; i < N; i++) {
//			Cnt[Arr[i]]++;
//		}
//		for (i = 0; Cnt[i] == 0; i++);
//		pos = i;
//		len = N / K;
//		flag = 1;
//		for (i = 0; i < len&&flag==1; i++) {
//			for (j = 0; j < K; j++) {
//				Cnt[pos+j]--;
//				if (Cnt[pos+j]<0||(Cnt[pos] != 0 && Cnt[pos + j] == 0)) {
//					flag = 0;
//					break;
//				}
//			}
//			for (k = 0; Cnt[k] == 0; k++);
//			pos = k;
//		}
//		if (flag == 1)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MaxSize 10000
//
//int Hashcode(char Arr[]) {
//	char* p = Arr;
//	int i = 0;
//	int Hash=0;
//	for (i = 0; i < 3; i++)
//	{
//		Hash = Hash * 10 + (*p - 'a');
//		p++;
//	}
//	return Hash%19970;
//}
//int main(void) {
//	int n;
//	char Tmp[100] = {};
//	char* p = NULL;
//	int i=0, j=0,k=0;
//	int Hash[20000] = {};
//	char Max[10] = {};
//	long long int max,flag;
//	while (scanf("%d", &n) != EOF) {
//		i = 0;
//		memset(Hash, 0, sizeof(Hash));
//		scanf("%s", Tmp);
//		Hash[Hashcode(Tmp)]++;
//		strcpy(Max, Tmp);
//		max = Hash[Hashcode(Tmp)];
//		while (i<n-1) {
//			i++;
//			scanf("%s", Tmp);
//			Hash[Hashcode(Tmp)]++;
//			if (Hash[Hashcode(Tmp)] > max) {
//				max = Hash[Hashcode(Tmp)];
//				strcpy(Max, Tmp);
//			}	
//		}
//		printf("%s\n", Max);
//		flag = 1;
//		for (i = 0; i <= 20000; i++) {
//			if (Hash[i] % 2 == 0 || Hash[i] ==2) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("yes\n");
//		else
//			printf("no\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdio.h>
//#define MaxSize 100006
//long long int Arr[MaxSize], sum;
//int main(void) {
//	long long int m, n, t,x;
//	long long int i,j,k;
//	long long int result;
//	while (scanf("%lld %lld %lld", &n, &t, &m) != EOF) {
//		sum = 0;
//		for (i = 0; i < n; i++) {
//			scanf("%lld", &Arr[i]);
//		}
//		for (j = 0; j < m; j++)
//			sum += Arr[j];
//		result = 0;
//		if (sum <= t)
//			result++;
//		for (i = m; i < n ; i++) { 
//			sum = sum + Arr[i] - Arr[i - m];
//			if (sum <= t)
//				result++;
//		}
//		printf("%lld\n", result);
//	}
//	return 0;
//}
