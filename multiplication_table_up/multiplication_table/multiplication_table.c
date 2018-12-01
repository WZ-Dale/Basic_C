#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	printf("需要打印几阶乘法表：");
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%d * %d = %d\t",j,i,i*j);		//水平制表符的使用
		}
		printf("\n");
	}
	system("pause");
	return 0;
}