#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[] = { 123, 653, 77};
	int i = 0, j = 0,x = 0, y = 0;
	y = sizeof(a) / sizeof(a[0]);	//计算数组元素个数
	for (i = 0; i < y-1; ++i)	//选择排序法
	{
		for (j = i+1; j < y; ++j)
		{
			if (a[i] < a[j])	//将小的逐比较，放到最后面
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		} 
	}
		
	for (i = 0; i < 3; ++i)
	{
		printf("%d,",a[i]);		//输出排序后的数列
	}
	printf("\b \n");	//消除末尾逗号
	system("pause");
	return 0;
}