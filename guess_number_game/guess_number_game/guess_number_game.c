#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{
	srand((unsigned)time(NULL));		//�������
	int num = rand() % 100;
	int left = 0, right = 100, i = 0;
	while (1)
	{
		printf("������0-100�ڣ���������Ĳ²⣺");
		scanf("%d", &i);
		if (0 <= i && i <= 100)		//�û��п������������Ҫ�����ж�
		{
			if (i > num)
			{
				printf("���ˣ�\n");
				right = i;
			}
			else if (i < num)
			{
				printf("���ˣ�\n");
				left = i;
			}
			else
			{
				printf("��ϲ��������ˣ�\n");
				break;
			}
		}
		else						//����û������������������
		{
			printf("����������������룺");
		}
		
	}
}

int main()
{
	while (1)
	{
		int a = 0;
		printf("������0����1��0��ʾ�˳���Ϸ��1��ʾ��ʼ��Ϸ����");
		scanf("%d", &a);
		if (a == 0)
		{
			printf("��Ϸ������\n");
			break;
		}
		else if (a == 1)
		{
			printf("��ʼ��Ϸ��\n");
			game();
		}
		else		//�û��п������������Ҫ�����ж�������û������������������
		{
			printf("����������������룡\n");
		}
	}
	system("pause");
	return 0;
}
