#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("请输入密码，");
	for (int count = 3; count > 0; --count)
	{
		printf("（还有%d次机会）：", count);
		char ch[1024] = { 0 };
		gets(ch);
		if (strcmp("13579wz", ch) == 0)
		{
			printf("密码正确！\n");
			break;
		} 
		else if (count > 1)
		{
			printf("密码错误！请重新输入，");
		}
		else
		{
			printf("密码三次错误！退出程序！\n");
		}
	}
	system("pause");
	return 0;
}
