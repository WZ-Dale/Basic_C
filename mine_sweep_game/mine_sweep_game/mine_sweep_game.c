#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TABLE_ROW 10
#define TABLE_COL 10
#define MINE_NUM 10

void Menu(void)
{
	//��Ϸ�˵�
	printf("======================\n");
	printf("=======ɨ����Ϸ=======\n");
	printf("1.��ʼ��Ϸ\n2.�˳���Ϸ\n");
	printf("======================\n");
}
void Init_table(char show_table[TABLE_ROW + 2][TABLE_COL + 2], char mine_table[TABLE_ROW + 2][TABLE_COL + 2])
{
	//��ʼ������ҿ�������
	int row = 0, col = 0;
	for (row = 0; row < TABLE_ROW + 2; ++row)
	{
		for (col = 0; col < TABLE_COL + 2; ++col)
		{
			show_table[row][col] = '*';
		}
	}
	//��ʼ���洢��������
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
		if (mine_table[row][col] == '1')		//����ô����ף�����²���
		{
			continue;
		}
		mine_table[row][col] = '1';
		--num;
	}

}
void Display_show(char show_table[TABLE_ROW + 2][TABLE_COL + 2])
{
	//��ӡ����ҿ�������
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
	//��ӡ�洢��������
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
	//���ڼ��㵱ǰ����Χ������������������д�����
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
	//�����û�����������
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
	//������Ϸ
	//��Ҫʹ�õ�������ά���飬һ����������ҿ�����һ���洢����
	//��һ�������'*'��ʾû�ҿ���'1''2'�Ⱦ����ַ����ֱ�ʾ��Χ����
	char show_table[TABLE_ROW + 2][TABLE_COL + 2];
	//�ڶ��������'0'��ʾ�˴����ף�'1'��ʾ�˴�����
	char mine_table[TABLE_ROW + 2][TABLE_COL + 2];
	//����һ����������Žҿ�������������
	int non_mine = 0;
	//1.��ʼ����������
	Init_table(show_table, mine_table);
	//2.��ӡ����ҿ�������
	Display_show(show_table);
	while (1)
	{
		//3.�û��������꣬ϵͳ�ж������Ƿ�Ϸ�
		int row = 0, col = 0;
		printf("����������row(1-%d) col(1-%d)��", TABLE_ROW, TABLE_COL);
		scanf("%d %d", &row, &col);
		if (row < 1 || row > TABLE_ROW || col < 1 || col > TABLE_COL)
		{
			printf("�������겻�Ϸ��������������룡\n");
			continue;
		}
		//4.�ж��û����������Ƿ����ף�������ף�������Ϸ
		if (mine_table[row][col] == '1')
		{
			printf("��ȵ����ˣ�GAME OVER!\n");
			Display_mine(mine_table);
			break;
		}
		//5.����û�û���ף��ж������������Ƿ�ҿ��꣬����ǣ��û�ʤ����չʾ�������飬������Ϸ
		++non_mine;
		if (non_mine == TABLE_ROW * TABLE_COL - MINE_NUM)
		{
			printf("ɨ�׳ɹ���Congratulation��\n");
			Display_mine(mine_table);
			break;
		}
		//6.����������û�нҿ��꣬�ͽ�������Χ����ͳ��д�룬��������ҿ���������
		Update_show_table(show_table, mine_table, row, col);
		Display_show(show_table);
	}
}
void Start_game(void)
{
	while (1)
	{
		//�û�ѡ���Ƿ�ʼ��Ϸ
		int choice = 0;
		printf("������1��2��");
		scanf("%d", &choice);
		while (choice == 1)
		{
			printf("��ʼ��Ϸ��\n");
			In_Game();			//������Ϸ
			printf("�Ƿ�ʼ�µ���Ϸ��\n�����ʼ�µ���Ϸ������1���˳�������2��\n�����룺");
			scanf("%d", &choice);
			if (choice == 1)
			{
				continue;
			}
			else if (choice == 2)
			{
				break;			//�˳���Ϸ
			}
			else
			{
				printf("�����������������룡\n");		//���벻�Ϸ�ʱ����������
				continue;
			}
		}
		if (choice == 2)
		{
			printf("�˳���Ϸ��\n");
			break;			//�˳���Ϸ
		}
		else
		{
			printf("�����������������룡\n");		//���벻�Ϸ�ʱ����������
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