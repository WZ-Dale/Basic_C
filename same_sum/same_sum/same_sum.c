#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, i = 0, sum = 0;
	printf("请输入一位整数：");
	scanf("%d", &a);
	int arr[6] = {0};			//代码是给人看的，不要为了方便把求的和放入数组中，虽然这样做简洁且运行快也不要
	for (i = 1; i < 6; ++i)		//保留一个a[0] = 0,为了后面累加方便，从而省去第一位求和需定义第一个数的麻烦
	{
		arr[i] = arr[i - 1] * 10 + a;
		sum += arr[i];			//记住先列框架再填补细节
	}
	printf("%d = %d + %d + %d + %d + %d\n", sum, arr[1], arr[2], arr[3], arr[4], arr[5]);
	system("pause");
	return 0;
}

