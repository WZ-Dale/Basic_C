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
	printf("��������ӣ������������꣨row��col����");
	while (1)
	{
		fflush(stdin);
		int check_input = scanf("%d %d", &row, &col);
		if (check_input != 2)
		{
			printf("���벻�Ϸ������������룺");
			continue;
		}
		if (row < 0 || row > ROW - 1 || col < 0 || col > COL - 1)
		{
			printf("����������������������룺");
			continue;
		}
		if (g_board[row][col] != ' ')
		{
			printf("�˴������ӣ����������룺");
			continue;
		}
		g_board[row][col] = 'x';
		break;
	}
}
void Computer_Move()
{
	int row = 0, col = 0;
	printf("��������ӣ�\n");
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

	for (row = 0; row < ROW; ++row)		//�����
	{
		if (g_board[row][0] == g_board[row][1] && g_board[row][0] == g_board[row][2] 
			&& g_board[row][0] != ' ')
		{
			return g_board[row][0];
		}
	}

	for (col = 0; col < COL; ++col)		//�����
	{
		if (g_board[0][col] == g_board[1][col] && g_board[0][col] == g_board[2][col]
			&& g_board[0][col] != ' ')
		{
			return g_board[0][col];
		}
	}

	if ((g_board[0][0] == g_board[1][1] && g_board[0][0] == g_board[2][2] && g_board[1][1] != ' ') 
		|| (g_board[2][0] == g_board[1][1] && g_board[2][0] == g_board[0][2] && g_board[1][1] != ' '))//��������Խ���
	{
		return g_board[1][1];
	}

	int count = 0;
	for (row = 0; row < ROW; ++row)		//�ж�����
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
	Init();				//1.��ʼ������
	Print();			//2.��ӡ����
	while (1)
	{
		//��ҵ����� x
		//���Ե����� o
		//winner == x	���ʤ��
		//winner == o	����ʤ��
		//winner == ' ' ��Ϸδ����
		//winner == p	����

		Player_Move();		//3.�������
		Print();
		winner = Check_Winner();	
		if (winner != ' ')
		{
			break;
		}

		Computer_Move();	//4.��������
		Print();
		winner = Check_Winner();
		if (winner != ' ')
		{
			break;
		}
	}

	if (winner == 'x')
	{
		printf("���ʤ����\n");
	}
	if (winner == 'o')
	{
		printf("����ʤ����\n");
	}
	if (winner == 'p')
	{
		printf("���壡\n");
	}

	system("pause");
	return 0;
}
