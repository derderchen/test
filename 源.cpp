#include"game.h"

void game()
{
	char x = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);//��ʼ��
	displayboard(board, ROW, COL);//��ӡ����
	while (1)
	{
		playermove(board, ROW, COL);//�������
		displayboard(board, ROW, COL);
		x = judgewin(board, ROW, COL); 
		if (x != 'C')
		{
			break;
		}
		computermove(board, ROW, COL);//��������
		displayboard(board, ROW, COL);
		x = judgewin(board, ROW, COL);//�ж���Ӯ
		if (x != 'C')
		{
			break;
		}
	}
	if (x == '#')
	{
		printf("���ʤ��\n");
	}
	else if (x == '*')
	{
		printf("����ʤ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}


void menu()
{
	srand((unsigned int)time(NULL));
	do
	{
		int input = 0;
		printf("##################################\n");
		printf("######  1.paly     0.exit  #######\n");
		printf("##################################\n");
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ����Ч��������ѡ��\n");
			break;
		}
		if (input == 0)
		{
			printf("�˳���Ϸ\n");
			break;
		}

	}while (1);
	
}



	int main()
	{
		menu();
		return 0;
	}