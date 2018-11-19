#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[10] = {123,65,77,456,89,126,547,90,56,341};
	int max = 0,i = 0;
	for (i = 0;i < 10;i++)
	{
		max = (max >= a[i] ? max : a[i]);
	}
	printf("MAX = %d\n", max);	//输出众多数中最大值
	system("pause");
	return 0;
}