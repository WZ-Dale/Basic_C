#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, i = 0, sum = 0;
	printf("������һλ������");
	scanf("%d", &a);
	int arr[6] = {0};			//�����Ǹ��˿��ģ���ҪΪ�˷������ĺͷ��������У���Ȼ��������������п�Ҳ��Ҫ
	for (i = 1; i < 6; ++i)		//����һ��a[0] = 0,Ϊ�˺����ۼӷ��㣬�Ӷ�ʡȥ��һλ����趨���һ�������鷳
	{
		arr[i] = arr[i - 1] * 10 + a;
		sum += arr[i];			//��ס���п�����ϸ��
	}
	printf("%d = %d + %d + %d + %d + %d\n", sum, arr[1], arr[2], arr[3], arr[4], arr[5]);
	system("pause");
	return 0;
}

