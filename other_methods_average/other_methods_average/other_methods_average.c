//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 12, b = 8;
	//printf("%d\n", (a + b) >> 1);   //�������
	//printf("%d\n", b + ((a - b) >> 1));
	printf("%d\n", (a&b) + ((a^b) >> 1));
	//��a��b��ͬ�Ĳ��ּ���a��b��ͬ�ĵط�����ͬ�Ĳ��ֳ��Զ����ǣ�a^b >> 1��
	system("pause");
}
