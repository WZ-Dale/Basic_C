#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[] = { 123, 653, 77};
	int i = 0, j = 0,x = 0, y = 0;
	y = sizeof(a) / sizeof(a[0]);	//��������Ԫ�ظ���
	for (i = 0; i < y-1; ++i)	//ѡ������
	{
		for (j = i+1; j < y; ++j)
		{
			if (a[i] < a[j])	//��С����Ƚϣ��ŵ������
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		} 
	}
		
	for (i = 0; i < 3; ++i)
	{
		printf("%d,",a[i]);		//�������������
	}
	printf("\b \n");	//����ĩβ����
	system("pause");
	return 0;
}