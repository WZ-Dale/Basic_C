//不使用（a + b） / 2这种方式，求两个数的平均值。
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 12, b = 8;
	//printf("%d\n", (a + b) >> 1);   //可能溢出
	//printf("%d\n", b + ((a - b) >> 1));
	printf("%d\n", (a&b) + ((a^b) >> 1));
	//用a和b相同的部分加上a和b不同的地方，不同的部分除以二就是（a^b >> 1）
	system("pause");
}
