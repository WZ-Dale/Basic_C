#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("�����뵥����ĸ�������֣�");
	char x = getchar();
	if ('a' <= x && x <= 'z')
	{
		printf("%c\n", x - 32);
	}
	else if ('A' <= x && x <= 'Z')
	{
		printf("%c\n", x + 32);
	}
	else if ('0' <= x && x <= '9')
	{
		NULL;
	}
	else
	{
		printf("�������벻��ȷ��\n");
	}
	system("pause");
	return 0;
}