#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

typedef struct Point		//����һ���ṹ�巵������,������������ΪPoint
{
	int x;
	int y;
}Point;
Point Find(int arr[ROW][COL], int f)			//�ú�������ֵ����ΪPoint
{
	int x = 0;
	int y = COL - 1;
	Point ret = { -1, -1 };
	while ((x <= ROW - 1) && (y >= 0))
	{
		if (f == arr[x][y])
		{
			ret.x = x;
			ret.y = y;
			return ret;
		}
		else if (f < arr[x][y])
		{
			--y;
		}
		else
		{
			++x;
		}
	}
	return ret;
}

int main()
{
	int f = 0;
	int a[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("������Ҫ�ҵ���:");
	scanf("%d", &f);
	Point ret = Find(a, f);
	if ((ret.x != -1) && (ret.y != -1))
	{
		printf("�ҵ��ˣ��±�Ϊ(%d,%d)\n", ret.x, ret.y);
	}
	else
	{
		printf("û�ҵ���\n");
	}
	system("pause");
	return 0;
}
