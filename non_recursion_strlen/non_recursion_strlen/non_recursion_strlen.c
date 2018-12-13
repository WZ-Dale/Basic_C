#include <stdio.h>
#include <stdlib.h>

int Strlen(char * ch)
{
	int i = 0;
	while (*(ch++)!= '\0')			//先判断地址所指向内容，再给地址加一用于下次判断
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