#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 1, high = 0;							// ��ֵ�͸߶�
	int row = 0, col = 0;								// ѭ������
	scanf("%d", &high);						// �������
	printf("1\n");							// �����һ�� 1
	for (row = 2; row <= high; sum = 1, row++)         // ���� row �� 2 �����
	{
		printf("1 ");						// ��һ�� 1
		for (col = 1; col <= row - 2; col++)		// ��λ�� col �ƹ���һ��ֱ�ӿ�ʼѭ��
		{
			printf("%d ", (sum = (row - col) * sum / col));
		}
		printf("1\n");						// ���һ�� 1������
	}
	system("pause");
	return 0;
}
