#include<stdio.h>
//#include<string.h>


int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int arr[100] = { 2,3 };
		int count = 0;
		int i = 2;
		int j = 0;
		for (j = 4; j <= n; j++)
		{
			if (j % 2 == 0 || j % 3 == 0 || (j % 5 == 0 && j > 5) || (j % 7 == 0 && j > 7))
			{
				count++;
				continue;
			}
			arr[i++] = j;
		}
		for (i = 0; i < n - count - 1; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n%d\n", count);
		memset(arr, 0, sizeof(arr));
	}
	return 0;
}


//int main()
//{
//	int n = 0;
//	int x = 0;
//	int arr[50] = { 0 };
//	int i = 0;
//	int arr2[50] = { 0 };
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	if (n > 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i]<x && arr[i + 1]>x)
//			{
//				arr2[j++] = arr[i];
//				i++;
//				arr2[i] = x;
//				j++;
//			}
//			else if (x > arr[n - 1])
//			{
//				arr2[n] = x;
//				for (j = 0; j < n; j++)
//				{
//					arr2[j] = arr[j];
//				}
//				break;
//			}
//			else if (x < arr[0])
//			{
//				arr2[i] = x;
//				for (j = 0; j < n; j++)
//				{
//					i++;
//					arr2[i] = arr[j];
//				}
//				break;
//			}
//			arr2[j++] = arr[i];
//		}
//		for (i = 0; i < n + 1; i++)
//		{
//			printf("%d ", arr2[i]);
//		}
//	}
//	else
//		printf("%d %d", arr[0], x);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	int arr[50] = { 0 };
//	int arr1[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (x != arr[i])
//		{
//			arr1[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int max = 0;
//	int i = 0;
//	int min = 100;
//	double  sum = 0.0;
//	for (i = 0; i <7 ; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		if (n < min)
//			min = n;
//		sum += n;
//	}
//	sum = sum - max - min;
//	double avg = sum / 5.0;
//	printf("%.2lf", avg);
//	return 0;
//}
