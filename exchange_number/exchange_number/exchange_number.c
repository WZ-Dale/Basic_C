#include <stdio.h>
#include <stdlib.h>

void Exchange(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a = 111, b = 222;
	printf("交换前：a = %d, b = %d\n", a, b);
	Exchange(&a, &b);
	printf("交换后：a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}
