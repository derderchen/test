#include<stdio.h>


int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	while (scanf("%d", &n)!=EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n + 1 - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		int a = 1;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k < a; k++)
//			{
//				printf("* ");
//			}
//			a++;
//			printf("\n");
//		}
//		int b = 0;
//		for (i = 0; i < n + 1; i++)
//		{
//			for (j = 0; j < b; j++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k < n + 1 - i; k++)
//			{
//				printf("* ");
//			}
//			b++;
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}