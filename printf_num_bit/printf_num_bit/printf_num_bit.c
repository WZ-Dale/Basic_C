#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printf_num(int value)
{
	int num = 0, i = 0;
	printf("该数的按位输出为：");
	while (value != 0)
	{
		num = value % 10;
		value /= 10;
		printf("%d  ",num);
	}
}
void printf_bits(int value)
{
	int num = 0, i = 0;
	while (value != 0)
	{
		num += (value % 2) * pow(10, i++);
		value /= 2;
	}
	printf("该数的二进制表示为：%d\n", num);
}

int main()
{
	int value = 0;
	printf("请输入一个整数：");
	scanf("%d", &value);
	printf_num(value);
	printf_bits(value);
	system("pause");
	return 0;
}