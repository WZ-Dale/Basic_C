//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int reverse_bit(unsigned int value)
{
	//int value_bit = 0, reverse_vale_bit = 0, reverse_vale = 0, i = 0;
	//while (value != 0)
	//{
	//	value_bit += (value % 2) * pow(10 ,i);
	//	value /= 2;
	//	++i;
	//}
	//printf("%d", value_bit);

	//int value_bit = 0, reverse_vale_bit = 0, reverse_vale = 0, i = 0;
	//while (value != 0 || i != 32)
	//{
	//	printf("%d", value % 2);
	//	value /= 2;
	//	++i;
	//}

	int reverse_vale = 0, i = 31;
	while (i > 0)
	{
		reverse_vale += (value % 2) * pow(2, i--);
		value /= 2;
	}
	return reverse_vale;
}

int main()
{
	int value = 0;
	scanf("%d", &value);
	printf("%u\n", reverse_bit(value));
	system("pause");
	return 0;
}