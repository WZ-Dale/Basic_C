#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 0, b = 0, c = 0;
	printf("请输入两个整数，并以逗号隔开：");
	scanf("%d,%d",&a,&b);
	c = a < b ? a : b;	//比较两数，将小值存入变量c
	while (c > 0)
	{
		if (a%c == 0 && b%c == 0)break;
		--c;
	}
	if (c)
	{
		printf("%d和%d这两个数的最大公约数为：%d\n", a, b, c);
	}
	else
	{
		printf("%d和%d这两个数无最大公约数\n", a, b);
	}
	system("pause");
	return 0;
}