#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("���������룬");
	for (int count = 3; count > 0; --count)
	{
		printf("������%d�λ��ᣩ��", count);
		char ch[1024] = { 0 };
		gets(ch);
		if (strcmp("13579wz", ch) == 0)
		{
			printf("������ȷ��\n");
			break;
		} 
		else if (count > 1)
		{
			printf("����������������룬");
		}
		else
		{
			printf("�������δ����˳�����\n");
		}
	}
	system("pause");
	return 0;
}
