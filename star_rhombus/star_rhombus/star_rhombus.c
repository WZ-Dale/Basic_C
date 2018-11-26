#include "stdio.h"
#include "stdlib.h"

void space(i,row)
{
	for (int k = 1; k <= (row - i) / 2; ++k)	//星号前或后应打印(j-i)/2个空格
	{
		printf(" ");
	}
}
void star(i)
{
	for (int l = 1; l <= i; ++l)	//当前行应该打印i个星号
	{
		printf("*");
	}
}
int main()
{
	int i = 1, rownum = 1, row = 13;	//i表示应打印星数，rownum表示当前行号，row表示总行数
	for (; rownum <= row; ++rownum)
	{
		space(i, row);		//星号前打印空格
		star(i);			//打印星号
		//space(i, row);		//星号后打印空格
		printf("\n");
		if (rownum < (row + 1) / 2)		//判断当前行是否为菱形上半部分
		{
			i += 2;			//如果是星数i自增2
		}
		else
		{
			i -= 2;			//如果否星数i自减2
		}
	}
	system("pause");
	return 0;
}