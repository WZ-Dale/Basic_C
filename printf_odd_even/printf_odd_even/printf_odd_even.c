#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void value_bits( int value)
{
	int num = 0, i = 0, j = 0, k = 0, odd_num = 0, even_num = 0;
	while (value != 0)
	{
		num += (value % 2) * pow(10, i++);
		if (i % 2 == 1)
		{
			odd_num += (value % 2) * pow(10, j++);
		}
		else
		{
			even_num += (value % 2) * pow(10, k++); 
		}
		value /= 2;
	}
	printf("�����Ķ����Ʊ�ʾΪ��%d\n", num);
	printf("��������λ�Ķ����Ʊ�ʾΪ��%d\n", odd_num);
	printf("����ż��λ�Ķ����Ʊ�ʾΪ��%d\n", even_num);
}

int main()
{
	int value = 0;
	scanf("%d", &value);
	value_bits(value);
	system("pause");
	return 0;
}
