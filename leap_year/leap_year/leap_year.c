#include "stdio.h"
#include "stdlib.h"

int main()
{
	printf("输出1000-2000之内的闰年：\n");
	int a = 0, b = 0;
	for (a = 1000; a <= 2000; a++)
	{
		if ((a%4 == 0 && a%100 != 0) || a%400 == 0)
		{
			b++;
			printf("%d,",a);
		}
	}
	printf("\b \n共%d个\n",b);
	system("pause");
	return 0;
}