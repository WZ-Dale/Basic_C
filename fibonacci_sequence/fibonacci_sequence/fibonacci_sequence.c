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
	printf("����\t��ֵ\t\n");
	for (i = 0; i < 50; ++i)
	{
		printf("%d\t%d\t\n", i+1, arr[i]);
	}
	printf("쳲����������У�����Ҫ��ڼ�����");
	scanf("%d", &n);
	printf("쳲����������е�%d����Ϊ��%d\n",n,arr[n-1]);
	system("pause");
	return 0;
}
