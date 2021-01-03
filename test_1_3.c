#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int j = 0;
	int a[10][10] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	int a[100] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n * n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	i = 0;
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y < n; y++)
//		{
//			if (x > y)
//			{
//				if (a[i] == 0);
//				else
//				{
//					printf("NO");
//					return 0;
//				}
//			}
//			i++;
//		}
//	}
//	printf("YES");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a[100] = { 0 };
//	int b[100] = { 0 };
//	int i = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (i = 0; i < 2 * n * m;i++)
//	{
//		if (a[i] == b[i]);
//		else
//		{
//			printf("No\n");
//			return 0;
//		}
//	}
//	printf("Yes\n");
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	int max = 0;
//	int a[100] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > max)
//			max = a[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (a[x++] == max)
//			{
//				printf("%d %d", i+1, j+1);
//				return 0;
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	int a[100] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", a[x++]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int a[1000] = { 0 };
//	int b[1000] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (j = 0; j < m; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//	i = 0;
//	j = 0;
//	while (i < n && j < m)
//	{
//	    if (a[i] <= b[j])
//		{
//			printf("%d ", a[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", b[j]);
//			j++;
//		}
//	}
//	if (i == n)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", b[j]);
//		}
//	}
//	else
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int a[5000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = i; j < n; j++)
//		{
//			if (a[i] != a[j + 1]);
//			else
//				a[j + 1] = 0;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] != 0)
//			printf("%d ", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != x)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}