#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("请输入单个字母或者数字：");
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
		printf("您的输入不正确！\n");
	}
	system("pause");
	return 0;
}