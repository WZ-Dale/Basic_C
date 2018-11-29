#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{
	srand((unsigned)time(NULL));		//随机种子
	int num = rand() % 100;
	int left = 0, right = 100, i = 0;
	while (1)
	{
		printf("该数在0-100内！请输入你的猜测：");
		scanf("%d", &i);
		if (0 <= i && i <= 100)		//用户有可能输入错误，需要进行判定
		{
			if (i > num)
			{
				printf("高了！\n");
				right = i;
			}
			else if (i < num)
			{
				printf("低了！\n");
				left = i;
			}
			else
			{
				printf("恭喜，你猜中了！\n");
				break;
			}
		}
		else						//如果用户输入错误，需重新输入
		{
			printf("输入错误，请重新输入：");
		}
		
	}
}

int main()
{
	while (1)
	{
		int a = 0;
		printf("请输入0或者1（0表示退出游戏，1表示开始游戏）：");
		scanf("%d", &a);
		if (a == 0)
		{
			printf("游戏结束！\n");
			break;
		}
		else if (a == 1)
		{
			printf("开始游戏！\n");
			game();
		}
		else		//用户有可能输入错误，需要进行判定，如果用户输入错误，需重新输入
		{
			printf("输入错误，请重新输入！\n");
		}
	}
	system("pause");
	return 0;
}
