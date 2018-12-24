#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 1, high = 0;							// 数值和高度
	int row = 0, col = 0;								// 循环计数
	scanf("%d", &high);						// 输入层数
	printf("1\n");							// 输出第一个 1
	for (row = 2; row <= high; sum = 1, row++)         // 行数 row 从 2 到层高
	{
		printf("1 ");						// 第一个 1
		for (col = 1; col <= row - 2; col++)		// 列位置 col 绕过第一个直接开始循环
		{
			printf("%d ", (sum = (row - col) * sum / col));
		}
		printf("1\n");						// 最后一个 1，换行
	}
	system("pause");
	return 0;
}
