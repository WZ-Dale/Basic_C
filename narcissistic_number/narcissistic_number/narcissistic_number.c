#include <stdio.h>
#include <stdlib.h>
#include <math.h>		//使用到数学公式，加math.h头文件

int main()
{
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < 1000; ++i)
	{
		a = i / 100;		//有时候要注意是否需要清零
		b = i / 10 % 10;
		c = i % 10;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
		{
			printf("%d,", i);
		}
	}
	printf("\b \n");
	system("pause");
	return 0;
}
