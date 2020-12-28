#include<stdio.h>



int main()
{
	int n = 0;
	int i=0;
	while (scanf("%d", &n) != EOF && n >= 2 && n <= 20)
	{
		for (n; n>=1; n--)
		{
			int j = 0;
			for (j = 1; j <= n; j++)
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
//	while (scanf("%d", &n)!=EOF&&n>=2&&n<=20)
//	{
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
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
//	int i = 0;
//	while (scanf("%d", &n)!=EOF&&n>0&&n<20)
//	{
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
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
//	int n;
//	int i = 0;
//	int arr[100];
//	while (scanf("%d", &n)!=EOF&&n>0&&n<100)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	double a, b;
//	char c;
//	while (scanf("%lf%c%lf", &a, &c, &b)!=EOF)
//	{
//		if (c == '+')
//		{
//			printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
//		}
//		else if (c == '-')
//		{
//			printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
//		}
//		else if (c == '*')
//		{
//			printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
//		}
//		else if (c == '/')
//		{
//			if (b != 0)
//			{
//				printf("%.4lf/%.4lf=%.4lf", a, b, a / b);
//			}
//			else
//				printf("Wrong!Division by zero!");
//		}
//		else
//			printf("Invalid operation!");
//	}
//	return 0;
//}


//int main()
//{
//	int year, month;
//	while (scanf("%d %d", &year, &month)!=EOF&&month>0&&month<=12)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			if (month == 2)
//			{
//				printf("29\n");
//			}
//			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//				printf("31\n");
//			else
//				printf("30\n");
//		}
//		else if (month == 2)
//		{
//			printf("28\n");
//		}
//		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//			printf("31\n");
//		else
//		{
//			printf("30\n");
//		}
//	}
//	return 0;
//}


//#include<math.h>
//
//int main()
//{
//	float a, b, c,x1,x2;
//	while (scanf("%f %f %f", &a, &b, &c)!=EOF)
//	{
//		if (a != 0)
//		{
//			int s = b * b - 4 * a * c;
//			if (s == 0)
//			{
//				x1 = (-b) / (2 * a);
//				printf("x1=x2=%.2f\n", x1);
//			}
//			else if (s > 0)
//			{
//				x1 = (-b - sqrt(s)) / (2 * a);
//				x2 = (-b + sqrt(s)) / (2 * a);
//				printf("x1=%.2f;x2=%.2f\n", x1, x2);
//			}
//			else if (s < 0)
//			{
//				x1 = (-b) / (2 * a);
//				x2 = sqrt(-s) / (2 * a);
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x1, x2, x1, x2);
//			}
//		}
//		else
//		{
//			printf("Not quadratic equation\n");
//			continue;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	float BMI;
//	float a = 0;
//	float b = 0;
//	while (scanf("%f %f", &a, &b)!=EOF)
//	{
//		BMI = a / ((b*b)/10000);
//		if (BMI < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (BMI >= 18.5 && BMI <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (BMI > 23.9 && BMI <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}




//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c)!=EOF)
//	{
//		if ((a + b) > c && (a+c) > b&&(b+c)>a)
//		{
//			if (a == b&&b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}




//#define NUM 7
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("*****  1.Add        2.Sub  ******\n");
//	printf("*****  3.Mul        4.Div  ******\n");
//	printf("*****  5.And        6.Xor  ******\n");
//	printf("******       0.Exit       *******\n");
//	printf("*********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int And(int x, int y)
//{
//	return x & y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//
//
//int main()//计算器
//{
//
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择运算：");
//		scanf("%d", &input);
//		if (input > 0 && input < NUM)
//		{
//			int (*p[NUM])(int, int) = { 0,Add,Sub,Mul,Div,And,Xor };
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("结果为：%d\n", p[input](x, y));
//		}
//	} while (input);
//	printf("退出程序");
//	return 0;
//}