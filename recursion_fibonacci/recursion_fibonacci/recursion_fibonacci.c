#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 2) + Fib(n - 1);
	}
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
