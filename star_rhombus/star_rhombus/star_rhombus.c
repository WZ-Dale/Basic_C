#include "stdio.h"
#include "stdlib.h"

void space(i,row)
{
	for (int k = 1; k <= (row - i) / 2; ++k)	//�Ǻ�ǰ���Ӧ��ӡ(j-i)/2���ո�
	{
		printf(" ");
	}
}
void star(i)
{
	for (int l = 1; l <= i; ++l)	//��ǰ��Ӧ�ô�ӡi���Ǻ�
	{
		printf("*");
	}
}
int main()
{
	int i = 1, rownum = 1, row = 13;	//i��ʾӦ��ӡ������rownum��ʾ��ǰ�кţ�row��ʾ������
	for (; rownum <= row; ++rownum)
	{
		space(i, row);		//�Ǻ�ǰ��ӡ�ո�
		star(i);			//��ӡ�Ǻ�
		//space(i, row);		//�Ǻź��ӡ�ո�
		printf("\n");
		if (rownum < (row + 1) / 2)		//�жϵ�ǰ���Ƿ�Ϊ�����ϰ벿��
		{
			i += 2;			//���������i����2
		}
		else
		{
			i -= 2;			//���������i�Լ�2
		}
	}
	system("pause");
	return 0;
}