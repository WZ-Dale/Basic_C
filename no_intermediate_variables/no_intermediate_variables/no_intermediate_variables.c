#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);	//��ӡ����ǰ��a,b
	a = a^b;	//����������������ʵ�����м���������½����������ͱ���
	b = a^b;
	a = a^b;
	printf("a = %d, b = %d\n", a, b);	//��ӡ�������a,b
	system("pause");
	return 0;
}