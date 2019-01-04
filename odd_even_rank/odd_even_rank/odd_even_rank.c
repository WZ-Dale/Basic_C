#include <stdio.h>
#include <stdlib.h>

void Select_rank(int* p, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = i + 1; j < len; ++j)		//注意此处为i+1，而不是i或者1
		{
			if (*(p + i) > *(p + j))			//注意i和j
			{
				int x = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = x;
			}
		}
	}
}
void Odd_Even(int* p, int len)
{
	int q = p;
	int b[10] = { 0 };
	int c[10] = { 0 };
	int i = 0, j = 0, k = 0;
	for (i = 0, j = 0, k = 0; i < len; ++i)
	{
		if (*p % 2 == 1)
		{
			b[j++] = *p;
		}
		else
		{
			c[k++] = *p;
		}
		++p;
	}
	p = q;
	for (int i = 0; i < j; ++i)
	{
		*p++ = b[i];
	}
	for (int i = 0; i < k; ++i)
	{
		*p++ = c[i];
	}
}
void Print_arry(int* p, int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", *p++);
	}
	printf("\n");
}
int main()
{
	int a[] = { 2, 5, 8, 1, 7, 9, 4, 3, 6, 0 };
	int y = sizeof(a) / sizeof(a[0]);
	Print_arry(a, y);			//打印排序前
	Select_rank(a, y);			//由小到大排序
	Print_arry(a, y);			//打印排序后
	Odd_Even(a,y);				//奇偶排序
	Print_arry(a, y);			//打印排序后
	system("pause");
	return 0;
}
