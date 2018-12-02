#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

Leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d是不是闰年\n", year);
	}
}
int main()
{
	int year = 0;
	printf("输入 year = ");
	scanf("%d",&year);
	Leap_year(year);
	system("pause");
	return 0;
}