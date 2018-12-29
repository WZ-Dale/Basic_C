//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 : 1999  2299
//输出例子 : 7
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int Bit_different_count(int num1, int num2)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if ((num1 & (1 << i)) != (num2 & (1 << i)))
		{
			++count;
		}
	}
	return count;
}
int main()
{
	int num1 = 0, num2 = 0;
	scanf("%d %d", &num1, &num2);
	printf("%d\n",Bit_different_count(num1, num2));
	system("pause");
	return 0;
}
