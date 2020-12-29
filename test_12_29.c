#include<stdio.h>


int main()
{
    int n, i, j;
    while (~scanf("%d", &n))
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j < i)
                    printf(" ");
                else
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
//	while (scanf("%d", &n) != EOF)
//	{
//		int a = n;
//		int i = 0;
//		int j = 0;
//		for (i = 0; i <= n; i++)
//		{
//			for (i = 0; i < n - a; i++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < a; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//			a--;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		int a = n;
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			a--;
//			for (i = 0; i < a; i++)
//			{
//				printf(" ");
//			}
//			for (i = 0; i < n - a; i++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF&&n>=2&&n<=20)
//	{
//		int j = 0;
//		int i = 0;
//		int k = 0;
//		int a = n;
//		for (i = 0; i < a; i++)
//		{
//			for (j = 1; j < n; j++)
//			{
//				printf("  ");
//			}
//			for (k = 0; k <= a - j; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//			n--;
//		}
//	}
//	return 0;
//}