#include <stdio.h>
#include <stdlib.h>

int Strlen(char * ch)
{
	int i = 0;
	while (*(ch++)!= '\0')			//���жϵ�ַ��ָ�����ݣ��ٸ���ַ��һ�����´��ж�
	{
		++i;
	}
	return i;
}

int main()
{
	char ch[] = "abc";
	//printf("%d",strlen(ch));
	printf("%d\n", Strlen(ch));
	system("pause");
	return 0;
}