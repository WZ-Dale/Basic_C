//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//student a am i
//i ma a tneduts
//i am a student

#include <stdio.h>
#include <stdlib.h>

int My_strlen(char* p)
{
	int len = 0;
	while (*p)
	{
		++len;
		++p;
	}
	return len;
}
void Exchange(char* left, char* right)
{
	while (left < right)
	{
		char ex = *left;
		*left = *right;
		*right = ex;
		++left;
		--right;
	}
}

int main()
{
	char a[] = "student a am i";
	int len = 0, i = 0;
	char* p = a;
	char* left = a;
	char* right = a;
	printf("%s\n", a);

	len = My_strlen(a);
	printf("%d\n", len);
	Exchange(p, p + len - 1);
	printf("%s\n", a);

	while (*p)
	{
		while ((*p != ' ') && (*p != '\0'))
		{
			right++;
			p++;
		}
		Exchange(left, right - 1);
		if (*p)
		{
			left = right + 1;
			right = left;
			p++;
		}
	}
	printf("%s\n", a);

	system("pause");
	return 0;
}
