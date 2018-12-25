//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (value & (1 << i))
		{
			++count;
		}
	}
	return count;
}
void value_bits(int value)
{
	int num = 0, i = 0;	
	while (value != 0)
	{
		num += (value % 2) * pow(10, i++);
		value /= 2;
	}
	printf("该数的二进制表示为：%d", num);
}

int main()
{
	int value = 0, count = 0;
	printf("请输入一个整数，我们将计算其二进制中有几个1：");
	scanf("%d",&value);
	count = count_one_bits(value);
	value_bits(value);
	printf("，其中有%d个1\n",count);
	system("pause");
	return 0;
}