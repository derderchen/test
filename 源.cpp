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
	printf("������");
	scanf("%s", &p->name);
	printf("���֤���룺");
	scanf("%s", &p->idcard);
	printf("�绰��");
	scanf("%s", &p->tele);
	printf("��ߣ�");
	scanf("%f", &p->tall);
	printf("���أ�kg����");
	scanf("%f", &p->weight);
	printf("���䣺");
	scanf("%d", &p->age);
	printf("�Ա�");
	scanf("%s", &p->sex);
}

void user_printf(user* p)
{
	printf("\n\n\n");
	printf("������%s\t", p->name);
	printf("���䣺%d\t", p->age);
	printf("�Ա�%s\t", p->sex);
	printf("�绰��%s\t", p->tele);
	printf("���֤���룺%s\n", p->idcard);
	printf("��ߣ�kg����%f\t", p->tall);
	printf("���أ�%f\t", p->weight);
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

