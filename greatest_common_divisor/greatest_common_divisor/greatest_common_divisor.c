#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 0, b = 0, c = 0;
	printf("�������������������Զ��Ÿ�����");
	scanf("%d,%d",&a,&b);
	c = a < b ? a : b;	//�Ƚ���������Сֵ�������c
	while (c > 0)
	{
		if (a%c == 0 && b%c == 0)break;
		--c;
	}
	if (c)
	{
		printf("%d��%d�������������Լ��Ϊ��%d\n", a, b, c);
	}
	else
	{
		printf("%d��%d�������������Լ��\n", a, b);
	}
	system("pause");
	return 0;
}