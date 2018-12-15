#include <stdio.h>
#include <stdlib.h>

int N_factorial(int n)
{
	int num = 1;
	for (int i = 1; i <= n; ++i)
	{
		num *= i;
	}
	return num;
}
int main()
{
	int n = 3;
	printf("n£¡= %d\n", N_factorial(n));
	system("pause");
	return 0;
}
