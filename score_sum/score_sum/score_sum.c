#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 0;
	double sum = 0;					//double类型定义
	for (a = 1; a <= 100; ++a)		//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
	{
		if (a % 2 == 0)
		{
			sum -= 1.0 / a;			//浮点数除法，分母也要是浮点数
		}
		else
		{
			sum += 1.0 / a;
		}
	}
	printf("sum=%f\n", sum);		//浮点数输出要用%f
	system("pause");
	return 0;
}