#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, n = 0;
	int arr[50] = { 1, 1, 0 };
	for (i = 2; i < 50; ++i)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("项数\t数值\t\n");
	for (i = 0; i < 50; ++i)
	{
		printf("%d\t%d\t\n", i+1, arr[i]);
	}
	printf("斐波那契数列中，你需要求第几个：");
	scanf("%d", &n);
	printf("斐波那契数列中第%d个数为：%d\n",n,arr[n-1]);
	system("pause");
	return 0;
}
