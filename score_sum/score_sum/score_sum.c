#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 0;
	double sum = 0;					//double���Ͷ���
	for (a = 1; a <= 100; ++a)		//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
	{
		if (a % 2 == 0)
		{
			sum -= 1.0 / a;			//��������������ĸҲҪ�Ǹ�����
		}
		else
		{
			sum += 1.0 / a;
		}
	}
	printf("sum=%f\n", sum);		//���������Ҫ��%f
	system("pause");
	return 0;
}