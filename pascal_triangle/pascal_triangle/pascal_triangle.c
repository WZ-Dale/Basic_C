#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int high = 0;							// 高度
	int row = 0, col = 0;
	scanf("%d", &high);						// 输入层数
	int a[100][100] = { 0 };
	for (row = 0; row < high; col = 0, ++row)
	{
		a[row][col] = 1;
		for (col = 0; col <= row; ++col)
		{
			if (row > 0 && col > 0 && col <= row)
			{
				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
			}
			printf("%d ", a[row][col]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}