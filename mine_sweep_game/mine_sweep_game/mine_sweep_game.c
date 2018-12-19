#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TABLE_ROW 10
#define TABLE_COL 10
#define MINE_NUM 10

void Menu(void)
{
	//游戏菜单
	printf("======================\n");
	printf("=======扫雷游戏=======\n");
	printf("1.开始游戏\n2.退出游戏\n");
	printf("======================\n");
}
void Init_table(char show_table[TABLE_ROW + 2][TABLE_COL + 2], char mine_table[TABLE_ROW + 2][TABLE_COL + 2])
{
	//初始化给玩家看的数组
	int row = 0, col = 0;
	for (row = 0; row < TABLE_ROW + 2; ++row)
	{
		for (col = 0; col < TABLE_COL + 2; ++col)
		{
			show_table[row][col] = '*';
		}
	}
	//初始化存储雷阵数组
	for (row = 0; row < TABLE_ROW + 2; ++row)
	{
		for (col = 0; col < TABLE_COL + 2; ++col)
		{
			mine_table[row][col] = '0';
		}
	}
	int num = MINE_NUM;
	while (num > 0)
	{
		row = rand() % TABLE_ROW + 1;
		col = rand() % TABLE_COL + 1;
		if (mine_table[row][col] == '1')		//如果该处有雷，则从新布雷
		{
			continue;
		}
		mine_table[row][col] = '1';
		--num;
	}

}
void Display_show(char show_table[TABLE_ROW + 2][TABLE_COL + 2])
{
	//打印给玩家看的数组
	int row = 0, col = 0;
	printf("    ");
	for (col = 1; col <= TABLE_COL; ++col)
	{
		printf(" %d", col);
	}
	printf("\n    ---------------------\n");
	for (row = 1; row <= TABLE_ROW; ++row)
	{
		printf("%02d |", row);
		for (col = 1; col <= TABLE_COL; ++col)
		{
			printf(" %c", show_table[row][col]);
		}
		printf(" |\n");
	}
	printf("    ---------------------\n");
}
void Display_mine(char mine_table[TABLE_ROW + 2][TABLE_COL + 2])
{
	//打印存储雷阵数组
	int row = 0, col = 0;
	printf("    ");
	for (col = 1; col <= TABLE_COL; ++col)
	{
		printf(" %d", col);
	}
	printf("\n    ---------------------\n");
	for (row = 1; row <= TABLE_ROW; ++row)
	{
		printf("%02d |", row);
		for (col = 1; col <= TABLE_COL; ++col)
		{
			printf(" %c", mine_table[row][col]);
		}
		printf(" |\n");
	}
	printf("    ---------------------\n");
}
void Show_chang(char show_table[TABLE_ROW + 2][TABLE_COL + 2], char mine_table[TABLE_ROW + 2][TABLE_COL + 2], int row, int col)
{
	//用于计算当前区周围的雷数，并将计算结果写入该区
	int num = mine_table[row - 1][col - 1] - '0'
		+ mine_table[row - 1][col] - '0'
		+ mine_table[row - 1][col + 1] - '0'
		+ mine_table[row][col - 1] - '0'
		+ mine_table[row][col + 1] - '0'
		+ mine_table[row + 1][col - 1] - '0'
		+ mine_table[row + 1][col] - '0'
		+ mine_table[row + 1][col + 1] - '0';
	show_table[row][col] = '0' + num;
}
void Update_show_table(char show_table[TABLE_ROW + 2][TABLE_COL + 2], char mine_table[TABLE_ROW + 2][TABLE_COL + 2], int row, int col)
{
	//更新用户看到的数组
	Show_chang(show_table, mine_table, row, col);
	if (show_table[row][col] == '0')
	{
		if (row != 1 && col != 1 && row != 10 && col != 10)
		{
			for (int i = row - 1; i <= row + 1; ++i)
			{
				for (int j = col - 1; j <= col + 1; ++j)
				{
					Show_chang(show_table, mine_table, i, j);
				}
			}
		}
		if (row == 1 && col == 1)
		{
			Show_chang(show_table, mine_table, row, col + 1);
			Show_chang(show_table, mine_table, row + 1, col);
			Show_chang(show_table, mine_table, row + 1, col + 1);
		}
		if (row == 1 && col == 10)
		{
			Show_chang(show_table, mine_table, row, col - 1);
			Show_chang(show_table, mine_table, row + 1, col - 1);
			Show_chang(show_table, mine_table, row - 1, col);
		}
		if (row == 10 && col == 1)
		{
			Show_chang(show_table, mine_table, row - 1, col);
			Show_chang(show_table, mine_table, row - 1, col + 1);
			Show_chang(show_table, mine_table, row, col + 1);
		}
		if (row == 10 && col == 10)
		{
			Show_chang(show_table, mine_table, row - 1, col - 1);
			Show_chang(show_table, mine_table, row - 1, col);
			Show_chang(show_table, mine_table, row, col - 1);
		}
		if (row == 1 && col >= 2 && col <= 9)
		{
			Show_chang(show_table, mine_table, row, col - 1);
			Show_chang(show_table, mine_table, row, col + 1);
			Show_chang(show_table, mine_table, row + 1, col - 1);
			Show_chang(show_table, mine_table, row + 1, col);
			Show_chang(show_table, mine_table, row + 1, col + 1);
		}
		if (row == 10 && col >= 2 && col <= 9)
		{
			Show_chang(show_table, mine_table, row - 1, col - 1);
			Show_chang(show_table, mine_table, row - 1, col);
			Show_chang(show_table, mine_table, row - 1, col + 1);
			Show_chang(show_table, mine_table, row, col - 1);
			Show_chang(show_table, mine_table, row, col + 1);
		}
		if (row >= 2 && row <= 9 && col == 1)
		{
			Show_chang(show_table, mine_table, row - 1, col);
			Show_chang(show_table, mine_table, row - 1, col + 1);
			Show_chang(show_table, mine_table, row, col + 1);
			Show_chang(show_table, mine_table, row + 1, col);
			Show_chang(show_table, mine_table, row + 1, col + 1);
		}
		if (row >= 2 && row <= 9 && col == 10)
		{
			Show_chang(show_table, mine_table, row - 1, col - 1);
			Show_chang(show_table, mine_table, row - 1, col);
			Show_chang(show_table, mine_table, row, col - 1);
			Show_chang(show_table, mine_table, row + 1, col - 1);
			Show_chang(show_table, mine_table, row + 1, col);
		}
	}
}
void In_Game(void)
{
	//进入游戏
	//需要使用到两个二维数组，一个用来给玩家看，另一个存储雷阵
	//第一个数组里：'*'表示没揭开，'1''2'等具体字符数字表示周围雷数
	char show_table[TABLE_ROW + 2][TABLE_COL + 2];
	//第二个数组里：'0'表示此处无雷，'1'表示此处有雷
	char mine_table[TABLE_ROW + 2][TABLE_COL + 2];
	//定义一个数用来存放揭开无雷区的数量
	int non_mine = 0;
	//1.初始化两个数组
	Init_table(show_table, mine_table);
	//2.打印给玩家看的数组
	Display_show(show_table);
	while (1)
	{
		//3.用户输入坐标，系统判定输入是否合法
		int row = 0, col = 0;
		printf("请输入坐标row(1-%d) col(1-%d)：", TABLE_ROW, TABLE_COL);
		scanf("%d %d", &row, &col);
		if (row < 1 || row > TABLE_ROW || col < 1 || col > TABLE_COL)
		{
			printf("输入坐标不合法，请重重新输入！\n");
			continue;
		}
		//4.判定用户输入坐标是否有雷，如果有雷，结束游戏
		if (mine_table[row][col] == '1')
		{
			printf("你踩到雷了！GAME OVER!\n");
			Display_mine(mine_table);
			break;
		}
		//5.如果用户没踩雷，判定所有无雷区是否揭开完，如果是，用户胜利，展示雷阵数组，结束游戏
		++non_mine;
		if (non_mine == TABLE_ROW * TABLE_COL - MINE_NUM)
		{
			printf("扫雷成功！Congratulation！\n");
			Display_mine(mine_table);
			break;
		}
		//6.所有无雷区没有揭开完，就将该区周围雷数统计写入，并更新玩家看到的数组
		Update_show_table(show_table, mine_table, row, col);
		Display_show(show_table);
	}
}
void Start_game(void)
{
	while (1)
	{
		//用户选择是否开始游戏
		int choice = 0;
		printf("请输入1或2：");
		scanf("%d", &choice);
		while (choice == 1)
		{
			printf("开始游戏！\n");
			In_Game();			//进入游戏
			printf("是否开始新的游戏？\n如果开始新的游戏请输入1，退出请输入2！\n请输入：");
			scanf("%d", &choice);
			if (choice == 1)
			{
				continue;
			}
			else if (choice == 2)
			{
				break;			//退出游戏
			}
			else
			{
				printf("输入有误，请重新输入！\n");		//输入不合法时，重新输入
				continue;
			}
		}
		if (choice == 2)
		{
			printf("退出游戏！\n");
			break;			//退出游戏
		}
		else
		{
			printf("输入有误，请重新输入！\n");		//输入不合法时，重新输入
			continue;
		}
	}
}
int main()
{
	srand((unsigned int)time(0));
	Menu();
	Start_game();
	system("pause");
	return 0;
}