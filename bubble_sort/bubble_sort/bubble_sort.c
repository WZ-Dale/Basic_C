#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = { 7, 9, 2, 4, 8, 1, 6, 0, 5 };
	int y = sizeof(a) / sizeof(a[0]);
	//printf("%d\n",y);
	int i = 0, j = 0;
	for (j = y - 1; j > 0; --j)
	{
		for (i = 0; i < j; ++i)
		{
			if (a[i]>a[i + 1])
			{
				int x = 0;
				x = a[i];
				a[i] = a[i + 1];
				a[i + 1] = x;
			}
		}
	}
	for (int i = 0; i < y; ++i)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}
