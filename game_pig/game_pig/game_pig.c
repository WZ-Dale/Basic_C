#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "string.h"
#include "stdlib.h"


int user_scanf()
{
	int i = 0;
	char ch[100] = { 0 };
	printf("\n������\"������\"��");
	gets(ch);
	if (strcmp("������", ch) == 0)
	{
		system("shutdown -a");
		i = 1;
		printf("\n��ȡ���Զ��ػ�");
	}
	else { printf("���������룬�����豸����ʱ����,���Զ��ػ���"); }
	return i;
}
int main()
{
	printf("�����룺������\n��������豸������600�뵹��ʱ�ػ���");
	system("shutdown -s -t 600");
	while (1)
	{
		int j = user_scanf();
		if (j == 1)break;
	}
	system("pause");
	return 0;
}