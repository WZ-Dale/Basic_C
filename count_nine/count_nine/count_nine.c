#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 0, count = 0;
	for (a = 0; a <= 100; ++a)
	{
		if (a < 10 && a == 9)
		{
			++count;
		}
		else 
		{
			if (a/10 == 9) ++count;
			if (a%10 == 9) ++count;
		}
	}
	printf("1-100�ڵ�����������%d������9\n",count);
	system("pause");
	return 0;
}