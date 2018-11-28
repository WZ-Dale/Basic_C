#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int Find_num(int arr[],int len)
{
	int left = 0, right = len - 1, mid = 0;		//下标
	int num = 0;
	printf("请输入要查找的数：");
	scanf("%d", &num);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (num < arr[mid])
		{
			right = mid - 1;
		}
		else if (num > arr[mid])
		{
			left = mid + 1;
		}
		else if (num == arr[mid])
		{
			printf("找到了！下标为：");
			return mid;				//同一个函数中return只返回一次，返回后下面语句不执行了，不需要break
		}
	}
	return -1;
}
int main()
{
	int a[] = { 1,3,5,7,9,11,13,15,17,19 };
	int i = 0, j = 0, x = 0, y = 0;
	y = sizeof(a) / sizeof(a[0]);
	printf("%d\n",Find_num(a,y));
	system("pause");
	return 0;
}
