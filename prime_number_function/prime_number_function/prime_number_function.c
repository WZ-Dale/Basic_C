#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

Prime_number()
{
	int num = 0, i = 0;
	printf("请输入一个数，我们将判断其是否是素数：");
	scanf("%d",&num);
	for (i = 2; i < num; ++i)
	{
		if (num % i == 0)
		{
			printf("该数不是素数！\n");
			break;
		}
	}
	if (i == num)
	{
		printf("该数是素数！\n");
	}	
}
int main()
{
	Prime_number();
	system("pause");
	return 0;
}
