#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "string.h"
#include "stdlib.h"


int user_scanf()
{
	int i = 0;
	char ch[100] = { 0 };
	printf("\n请输入\"我是猪\"：");
	gets(ch);
	if (strcmp("我是猪", ch) == 0)
	{
		system("shutdown -a");
		i = 1;
		printf("\n已取消自动关机");
	}
	else { printf("请重新输入，否则设备倒计时结束,将自动关机："); }
	return i;
}
int main()
{
	printf("请输入：我是猪。\n否则你的设备将进入600秒倒计时关机。");
	system("shutdown -s -t 600");
	while (1)
	{
		int j = user_scanf();
		if (j == 1)break;
	}
	system("pause");
	return 0;
}