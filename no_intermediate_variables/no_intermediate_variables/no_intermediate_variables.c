#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);	//打印交换前的a,b
	a = a^b;	//三次异或操作，即可实现无中间变量条件下交换两个整型变量
	b = a^b;
	a = a^b;
	printf("a = %d, b = %d\n", a, b);	//打印交换后的a,b
	system("pause");
	return 0;
}