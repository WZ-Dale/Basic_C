#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

Leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d������\n", year);
	}
	else
	{
		printf("%d�ǲ�������\n", year);
	}
}
int main()
{
	int year = 0;
	printf("���� year = ");
	scanf("%d",&year);
	Leap_year(year);
	system("pause");
	return 0;
}