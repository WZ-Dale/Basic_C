//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = { 2, 6, 4, 6, 4, 2, 5, 1, 1 };
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0, j = 0;
	for (i = 0; i < len; ++i)
	{
		int count = 0;
		for (j = 0; j < len; ++j)
		{
			if ((a[i] ^ a[j]) == 0)			//异或的结果为0说明相等
			{
				++count;
			}
		}
		if (count != 2)
		{
			break;
		}
	}
	printf("%d\n",a[i]);
	system("pause");
	return 0;
}
