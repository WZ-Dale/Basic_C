#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int DigitSum(int num)
//{
//	static int sum = 0;
//	if (num < 10)
//	{
//		sum += num;
//	}
//	else
//	{
//		sum += num % 10;
//		DigitSum(num / 10);
//	}
//	return sum;
//}
int DigitSum(num)
{
	if (num > 0)
	{
		return num % 10 + DigitSum(num / 10);
	}
	return 0;
}

int main()
{
	int num = 0;
	printf("输入一个四位数：");
	scanf("%d",&num);
	printf("%d\n", DigitSum(num));
	system("pause");
	return 0;
}
