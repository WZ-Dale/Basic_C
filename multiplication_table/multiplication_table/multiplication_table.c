#include "stdio.h"
#include "stdlib.h"

int main()
{
	printf("输出乘法口诀表：\n");
	int a, b;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if(a*b<10) printf("%d x %d = %d   ", a, b, a*b);
			else printf("%d x %d = %d  ", a, b, a*b);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}