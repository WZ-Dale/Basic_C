#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int sum = 0;
	char ch;
	printf("������һ��������������Ŀ�Ŀո�");
	while (scanf("%d", &i) == 1)
	{
		sum += i;
		while ((ch = getchar()) == ' ')		//����������˳�����ȡ��һ���ַ����ж��Ƿ�Ϊ�ո�
		{
			NULL;			//���Ϊ�ո�ʲô������
		}
		if (ch == '\n')
		{
			break;			//getchar�Ѿ����ڴ���룬��ʱ�ж��Ƿ�Ϊ���У�����ǣ����˳�
		}
		ungetc(ch, stdin);	//��������ڰ�getchar��������ȡ�����ַ��Ż�������
	}
	printf("����ǣ�%d\n",sum);
	system("pause");
	return 0;
}
