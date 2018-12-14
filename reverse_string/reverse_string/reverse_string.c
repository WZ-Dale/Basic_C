#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void Reverse_String(char * string)
{
	if (*string != '\0')
	{
		Reverse_String(++string);		//地址逐层加，函数逐层嵌套（穿棉袄）之后（脱棉袄）
		printf("%c", *(--string));			//地址逐层减，打印所指内容
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