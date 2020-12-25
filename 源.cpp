#include<stdio.h>

typedef struct user
{
	char name[20];
	char idcard[20];
	char tele[20];
	float tall;
	int age;
	float weight;
	char sex[3];
}user;

void user_define(user* p)
{
	printf("姓名：");
	scanf("%s", &p->name);
	printf("身份证号码：");
	scanf("%s", &p->idcard);
	printf("电话：");
	scanf("%s", &p->tele);
	printf("身高：");
	scanf("%f", &p->tall);
	printf("体重（kg）：");
	scanf("%f", &p->weight);
	printf("年龄：");
	scanf("%d", &p->age);
	printf("性别：");
	scanf("%s", &p->sex);
}

void user_printf(user* p)
{
	printf("\n\n\n");
	printf("姓名：%s\t", p->name);
	printf("年龄：%d\t", p->age);
	printf("性别：%s\t", p->sex);
	printf("电话：%s\t", p->tele);
	printf("身份证号码：%s\n", p->idcard);
	printf("身高（kg）：%f\t", p->tall);
	printf("体重：%f\t", p->weight);
}

int main()
{
	user one;
	user_define(&one);
	user_printf(&one);
	return 0;
}



//typedef struct m
//{
//	int a;
//	int b;
//}m;
//
//void print(m* p)
//{
//	printf("%d\n", p->a);
//	printf("%d\n", p->b);
// }
//
//int main()
//{
//	m s = { 1,2 };
//	print(&s);
//	return 0;
//}

