#include"game.h"

void game()
{
	char x = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);//初始化
	displayboard(board, ROW, COL);//打印棋盘
	while (1)
	{
		playermove(board, ROW, COL);//玩家下棋
		displayboard(board, ROW, COL);
		x = judgewin(board, ROW, COL); 
		if (x != 'C')
		{
			break;
		}
		computermove(board, ROW, COL);//电脑下棋
		displayboard(board, ROW, COL);
		x = judgewin(board, ROW, COL);//判断输赢
		if (x != 'C')
		{
			break;
		}
	}
	if (x == '#')
	{
		printf("玩家胜利\n");
	}
	else if (x == '*')
	{
		printf("电脑胜利\n");
	}
	else
	{
		printf("平局\n");
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
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择无效，请重新选择\n");
			break;
		}
		if (input == 0)
		{
			printf("退出游戏\n");
			break;
		}

	}while (1);
	
}



	int main()
	{
		menu();
		return 0;
	}