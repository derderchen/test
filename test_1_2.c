#include<stdio.h>

int main()
{
	int n = 0;
	int a[50] = { 0 };
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	if (a[0] < a[1])
	{
		for (i = 0; i < n-1; i++)
		{
			if (a[i] < a[i + 1]);
			else
			{
				printf("unsorted");
				return 0;
			}
		}
	}
	else if(a[0]>a[1])
	{
		for (i = 0; i < n-1; i++)
		{
			if (a[i] > a[i + 1]);
			else
			{
				printf("unsorted");
				return 0;
			}
		}
	}
	printf("sorted");

	return 0;
}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	int  x = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		if (x > max)
//			max = x;
//		if (x < min)
//			min = x;
//	}
//	printf("%d", max - min);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		sum += a;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int pos = 0;
//	int neg = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a);
//		if (a > 0)
//			pos++;
//		else if (a < 0)
//			neg++;
//	}
//	printf("positive:%d\nnegative:%d", pos, neg);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int x = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &x);
//			if (x > 0)
//				sum += x;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}



//#include<string.h>
//
//int main()
//{
//	char a[20] = { 0 };
//	char b[20] = { 0 };
//	scanf("%s %s", a, b);
//	int ret = strcmp(a, b);
//	if (ret == 0)
//		printf("same");
//	else
//		printf("different");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	float a = 0.0;
//	int i = 0;
//	float max = 0.0;
//	float min = 100.0;
//	float sum = 0.0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &a);
//		if (a > max)
//			max = a;
//		if (a < min)
//			min = a;
//		sum += a;
//	}
//	printf("%.2f %.2f %.2f", max, min, sum / (float)n);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int i = 0;
//	int odd = 0;
//	int even = 0;
//	scanf("%d", &n);
//	printf("%d %d\n", n - n / 2, n / 2);
//	return 0;
//}
//for (i = 1; i <= n; i++)
//{
//	if (i % 2 == 0)
//		even++;
//	else
//		odd++;
//}
//printf("%d %d", odd, even);

//int main()
//{
//	int count = 1;
//	int i = 0;
//	for (i = 10; i <= 2019; i ++ )
//	{
//		int j = i;
//		while (j)
//		{
//			if (j % 10 != 9)
//				j /= 10;
//			else
//			{
//				count++;
//				break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int x=0;
//	scanf("%d", &x);
//	if (x > 0)
//	{
//		printf("-1");
//	}
//	if (x == 0)
//	{
//		printf("0");
//	}
//	if (x < 0)
//	{
//		printf("1");
//	}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//		printf("NO");
//	return 0;
//}


//int main()
//{
//	double tall = 0.0;
//	double sum = 0.0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &tall);
//		sum += tall;
//	}
//	printf("%.2lf", sum / 5.0);
//
//	return 0;
//}


//#include<string.h>


//int main()
//{
//	char user[20] = { 0 };
//	char secret[20] = { 0 };
//	char rsecret[] = "admin";
//	while (~scanf("%s %s", user, secret))
//	{
//		int ret = strcmp(rsecret, secret);
//		if (ret == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//			printf("Login Fail!\n");
//		memset(user, 0, sizeof(rsecret));
//		memset(secret, 0, sizeof(secret));
//	}
//	return 0;
//}


//int main()
//{
//	double m = 0;
//	double n = 0;
//	double count = 0;
//	double sim = 0.0;
//	int image1[100][100] = { 0 };
//	int image2[100][100] = { 0 };
//	scanf("%lf %lf", &m, &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &image1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &image2[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (image1[i][j] == image2[i][j])
//				count++;
//		}
//	}
//	sim = (count*100) / (m * n);
//	printf("%.2lf", sim);
//	return 0;
//}



