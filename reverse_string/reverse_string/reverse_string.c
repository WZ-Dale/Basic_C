#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void Reverse_String(char * string)
{
	if (*string != '\0')
	{
		Reverse_String(++string);		//��ַ���ӣ��������Ƕ�ף����ް���֮�����ް���
		printf("%c", *(--string));			//��ַ��������ӡ��ָ����
	}
	//else
	//{
	//	printf("%c", *string);
	//}
}
int main()
{
	int i = 0;
	char ch[] = "abcdefgh";
	Reverse_String(ch);
	system("pause");
	return 0;
}