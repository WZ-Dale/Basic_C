#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int N_k(n, k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return N_k(n, k - 1)*n;			//�ݹ�����Ҫ���ǲ𣬴�������δ��
	}
}

int main()
{
	int n = 0, k = 0;
	printf("n = ");
	scanf("%d", &n);
	printf("k = ");
	scanf("%d", &k);
	printf("n^k = %d\n",N_k(n, k));
	system("pause");
	return 0;
}