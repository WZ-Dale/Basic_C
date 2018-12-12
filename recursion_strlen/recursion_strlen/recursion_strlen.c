#include <stdio.h>
#include <stdlib.h>

int Strlen(char * ch)
{
	static int i = 0;
	if (*ch != '\0')
	{
		Strlen(++ch);
	}
	return i++;
	//if (*ch == '\0')			//下面这种方式也可以
	//{
	//	return i;
	//}
	//else
	//{
	//	Strlen(++ch);
	//}
	//++i;
}

int main()
{
	char ch[] = "abc";
	//printf("%d",strlen(ch));
	printf("%d\n", Strlen(ch));
	system("pause");
	return 0;
}
