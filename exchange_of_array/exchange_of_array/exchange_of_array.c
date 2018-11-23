#include "stdio.h"
#include "stdlib.h"

int main()
{
	int i = 0, x = 0, y = 0;
	int a[] = {1,3,5,7,9}, b[] = {2,4,6,8,10};
	y = sizeof(a) / sizeof(a[0]);	//计算数组元素个数
	for (i = 0; i < y; ++i)
	{
		x = a[i];
		a[i] = b[i];
		b[i] = x;
	}
	for (i = 0; i < y; ++i)		//输出交换后的数组a
	{
		printf("%d,",a[i]);
	}
	printf("\b \n");			//消除末尾逗号
	for (i = 0; i < y; ++i)		//输出交换后的数组b
	{
		printf("%d,",b[i]);
	}
	printf("\b \n");			//消除末尾逗号
	system("pause");
	return 0;
}