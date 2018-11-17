#include "stdio.h"
#include "stdlib.h"

int main()
{
	printf("输出100-200内的素数：\n");
	int a, b, m = 0;
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b < a; b++)
		{
			if (a%b == 0)break;
		}
		if (b == a)
		{
			printf("%d,", a);
			m = m + 1;
			if (m % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\b \n");
	system("pause");
	return 0;
}