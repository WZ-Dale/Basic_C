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
	printf("����ǰ��a = %d, b = %d\n", a, b);
	Exchange(&a, &b);
	printf("������a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}
