#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int Fib(int n)
{
	int a1 = 1, a2 = 1, a3 = 2;
	if (n <= 2)
	{
		return 1;
	}
	for (int i = 2; i < n; ++i)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}
int main()
{
	int n = 0;
	printf("쳲����������У�����Ҫ��ڼ�����");
	scanf("%d", &n);
	printf("쳲����������е�%d����Ϊ��%d\n", n, Fib(n));
	system("pause");
	return 0;
}
