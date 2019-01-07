#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int sum = 0;
	char ch;
	printf("请输入一串整数和任意数目的空格：");
	while (scanf("%d", &i) == 1)
	{
		sum += i;
		while ((ch = getchar()) == ' ')		//从输入流按顺序接着取出一个字符，判断是否为空格
		{
			NULL;			//如果为空格，什么都不做
		}
		if (ch == '\n')
		{
			break;			//getchar已经把内存读入，此时判断是否为换行，如果是，则退出
		}
		ungetc(ch, stdin);	//此语句用于把getchar从输入流取出的字符放回输入流
	}
	printf("结果是：%d\n",sum);
	system("pause");
	return 0;
}
