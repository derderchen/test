#include<stdio.h>

int main()
{
	long n = 0;
	int i = 0;
	int arr[20] = { 0 };
	scanf("%ld", &n);
	while(n)
	{
		arr[i] = n % 6;
		n = n / 6;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}


//#include<math.h>
	/*long n = 0;
	long a = 0;
	int i = 0;
	unsigned long b = 0;
	scanf("%ld", &n);
	while (n)
	{
		a = n % 6;
		n = n / 6;
		if (a == 0)
		{
			b += 1 * pow(10, i);
			i++;
		}
		else
		{
			b += a * pow(10, i);
			i++;
		}
	}
	printf("%u", b);*/


//int main()
//{
//	char board[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%c", &board[i][j]);
//			getchar();
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == 'K')
//			{
//				printf("KiKi wins!");
//				return 0;
//			}
//			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == 'K')
//			{
//				printf("KiKi wins!");
//				return 0;
//			}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == 'B')
//		{
//			printf("BoBo wins!");
//			return 0;
//		}
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == 'B')
//		{
//			printf("BoBo wins!");
//			return 0;
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == 'B')
//	{
//		printf("BoBo wins!");
//		return 0;
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == 'K')
//	{
//		printf("KiKi wins!");
//		return 0;
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == 'B')
//	{
//		printf("BoBo wins!");
//		return 0;
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == 'K')
//	{
//		printf("KiKi wins!");
//		return 0;
//	}
//	printf("No winner!");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[30][30] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//				printf("%5d", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%5d", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	int a = 0;
//	int b = 0;
//	int k = 0;
//	int i = 0;
//	int j = 0;
//	char t;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k);
//	getchar();
//	while ( k--&&scanf("%c %d %d", &t, &a, &b))
//	{
//			if (t == 'r')
//			{
//				for (i = 0; i < n; i++)
//				{
//					int tmp = arr[a - 1][i];
//					arr[a - 1][i] = arr[b - 1][i];
//					arr[b - 1][i] = tmp;
//				}
//			}
//			else if (t == 'c')
//			{
//				for (i = 0; i < n; i++)
//				{
//					int tmp = arr[i][a - 1];
//					arr[i][a - 1] = arr[i][b - 1];
//					arr[i][b - 1] = tmp;
//				}
//			}
//		getchar();
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}