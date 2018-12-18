#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

char g_board[ROW][COL];

void Init()
{
	for (int row = 0; row < ROW; ++row)
	{
		for (int col = 0; col < COL; ++col)
		{
			g_board[row][col] = ' ';
		}
	}
}
void Print()
{
	printf(" ___ ___ ___ \n");
	for (int row = 0; row < ROW; ++row)
	{
		printf("| %c | %c | %c |\n", g_board[row][0], g_board[row][1], g_board[row][2]);
		printf("|___|___|___|\n");
	}
	printf("\n");
}
void Player_Move()
{
	int row = 0, col = 0;
	printf("请玩家落子！输入落子坐标（row，col）：");
	while (1)
	{
		fflush(stdin);
		int check_input = scanf("%d %d", &row, &col);
		if (check_input != 2)
		{
			printf("输入不合法，请重新输入：");
			continue;
		}
		if (row < 0 || row > ROW - 1 || col < 0 || col > COL - 1)
		{
			printf("输入的坐标有误！请重新输入：");
			continue;
		}
		if (g_board[row][col] != ' ')
		{
			printf("此处有棋子！请重新输入：");
			continue;
		}
		g_board[row][col] = 'x';
		break;
	}
}
void Computer_Move()
{
	int row = 0, col = 0;
	printf("请电脑落子！\n");
	while (1)
	{
		row = rand() % ROW;
		col = rand() % COL;
		if (g_board[row][col] != ' ')
		{
			continue;
		}
		g_board[row][col] = 'o';
		break;
	}
}
char Check_Winner()
{
	int row = 0, col = 0;

	for (row = 0; row < ROW; ++row)		//检测行
	{
		if (g_board[row][0] == g_board[row][1] && g_board[row][0] == g_board[row][2] 
			&& g_board[row][0] != ' ')
		{
			return g_board[row][0];
		}
	}

	for (col = 0; col < COL; ++col)		//检测列
	{
		if (g_board[0][col] == g_board[1][col] && g_board[0][col] == g_board[2][col]
			&& g_board[0][col] != ' ')
		{
			return g_board[0][col];
		}
	}

	if ((g_board[0][0] == g_board[1][1] && g_board[0][0] == g_board[2][2] && g_board[1][1] != ' ') 
		|| (g_board[2][0] == g_board[1][1] && g_board[2][0] == g_board[0][2] && g_board[1][1] != ' '))//检测两条对角线
	{
		return g_board[1][1];
	}

	int count = 0;
	for (row = 0; row < ROW; ++row)		//判定和棋
	{
		for (col = 0; col < COL; ++col)
		{
			if (g_board[row][col] != ' ')
			{
				++count;
			}
		}
	}
	if (count == ROW*COL)
	{
		return 'p';
	}

	return ' ';
}
int main()
{
	srand((unsigned int)time(0));
	char winner = 0;
	Init();				//1.初始化棋盘
	Print();			//2.打印棋盘
	while (1)
	{
		//玩家的棋子 x
		//电脑的棋子 o
		//winner == x	玩家胜利
		//winner == o	电脑胜利
		//winner == ' ' 游戏未结束
		//winner == p	和棋

		Player_Move();		//3.玩家落子
		Print();
		winner = Check_Winner();	
		if (winner != ' ')
		{
			break;
		}

		Computer_Move();	//4.电脑落子
		Print();
		winner = Check_Winner();
		if (winner != ' ')
		{
			break;
		}
	}

	if (winner == 'x')
	{
		printf("玩家胜利！\n");
	}
	if (winner == 'o')
	{
		printf("电脑胜利！\n");
	}
	if (winner == 'p')
	{
		printf("和棋！\n");
	}

	system("pause");
	return 0;
}
