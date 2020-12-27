#include<stdio.h>
#include<string.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[40] = { 0 };
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int a = 0;
	int j = 0;
	int m = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[j] > a)
			{
				a = arr[j];
				m = j;
			}
		}
		arr[m] = 0;
		printf("%d ", a);
		a = 0;
	}
	return 0;
}



//int main()
//{
//	char a[20] = {0};
//	scanf("%s", a);
//	int sz=strlen(a);
//	int i = 0;
//	int counta=0;
//	int countb = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] == 'A')
//		{
//			counta++;
//		}
//		else if (a[i] == 'B')
//		{
//			countb++;
//		}
//	}
//	if (counta > countb)
//	{
//		printf("A");
//	}
//	else if (counta < countb)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("E");
//	}
//	return 0;
//}


//int findmax(int a, int b, int c)
//{
//	if (a > b)
//	{
//		if (a > c);
//		else
//			a = c;
//		return a;
//	}
//	if (a < b)
//	{
//		a = b;
//		if (a > c);
//		else
//			a = c;
//		return a;
//	}
//
//}
//
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c)!=EOF && a >= 0 && a <= 100 && b >= 0 && b <= 100 && c>= 0 && c <= 100 )
//	{
//		int ret = findmax(a, b, c);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char a;
//	while (scanf("%c", &a)!=EOF)
//	{
//		if (a == '\n')
//		{
//			continue;
//		}
//		if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
//		{
//			printf("%c is an alphabet.\n", a);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", a);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char a;
//	while (scanf("%c", &a)!=EOF)
//	{
//		if (a >= 65 && a <= 90)
//		{
//			printf("%c\n", a + 32);
//		}
//		else if (a >= 97 && a <= 122)
//		{
//			printf("%c\n", a - 32);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	{
//		if (a >= 140)
//			printf("Genius");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	{
//		if (a >= 90 && a <= 100)
//		{
//			printf("Perfect");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	{
//		if (a >= 60&&a<=100)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	{
//		if (a % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//		{
//			printf("Odd\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char a;
//	while (scanf("%c", &a)!=EOF)
//	{
//		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//		printf("Consonant\n");
//		}
//		setbuf(stdin, NULL);
//	}
//	return 0;
//}



//int judge(int a, int b)
//{
//	if (a > b)
//		return a;
//	if (a < b)
//		return b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret=judge(a, b);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t)!=EOF)
//	{
//		if (t > 0)
//		{
//			printf("1\n");
//		}
//		else if (t == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//			printf("0\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int t[] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &t[i]);
//	}
//	for (i = 0; i < 3;i++)
//	{
//		if (t[i] > 0)
//		{
//			printf("1\n");
//		}
//		else if (t[i] == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//			printf("0\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i,num;
//	for (i = 10000; i < 100000; i++)
//	{
//		num = ((i / 10000) * (i % 10000)) + ((i / 1000) * (i % 1000)) + ((i / 100) * (i % 100)) + ((i / 10) * (i % 10));
//		if (num == i)
//		{
//			printf("%d ", num);
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	float a = 0;
//	int b, c, x;
//	scanf("%f %d %d %d", &a, &b, &c, &x);
//	if (b == 11 && c == 11&&x==1)
//	{
//		if (a < 72)
//		{
//			printf("%.2f", 0.00);
//		}
//		else
//		printf("%.2f", a * (0.7) - 50);
//	}
//	else if (b == 11 && c == 11 && x == 0)
//	{
//		printf("%.2f", a * (0.7));
//	}
//	else if (b == 12 && c == 12 && x == 1)
//	{
//		if (a < 63)
//		{
//			printf("%.2f", 0.08);
//		}
//		else
//		printf("%.2f", a * (0.8) - 50);
//	}
//	else if (b == 12 && c == 12 && x == 0)
//	{
//		printf("%.2f", a * (0.8));
//	}
//	else
//	{
//		printf("%.2f", a);
//	}
//	return 0;
//}


//int main()
//{
//	int a, b;
//	long c;
//	scanf("%x %o", &a, &b);
//	c = a + b;
//	printf("%ld", c);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	printf("%.1f", (float)(a + b + c + d + e) / 5);
//	return 0;
//}



//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18    man\n");
//    return 0;
//}

//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int h = 0;
//	scanf("%d %d %d", &n, &h, &m);
//	if ((n * h) >= m)
//	{
//		if ((m % h) != 0)
//			printf("%d", n - (m / h + 1));
//		else
//			printf("%d", n - (m / h));
//	}
//	return 0;
//}




//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
//	return 0;
//}
