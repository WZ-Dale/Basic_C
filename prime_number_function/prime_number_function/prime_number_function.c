#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

Prime_number()
{
	int num = 0, i = 0;
	printf("������һ���������ǽ��ж����Ƿ���������");
	scanf("%d",&num);
	for (i = 2; i < num; ++i)
	{
		if (num % i == 0)
		{
			printf("��������������\n");
			break;
		}
	}
	if (i == num)
	{
		printf("������������\n");
	}	
}
int main()
{
	Prime_number();
	system("pause");
	return 0;
}
