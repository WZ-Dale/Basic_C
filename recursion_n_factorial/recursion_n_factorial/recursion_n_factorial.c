#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int N_factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return N_factorial(n - 1)*n;
	}
}
int main()
{
	int n = 3;
	printf("n£¡= %d\n",N_factorial(n));
	system("pause");
	return 0;
}
