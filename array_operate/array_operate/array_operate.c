#include <stdio.h>
#include <stdlib.h>

Init_arr(int arr[])
{
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i;
	}
}
Emty_arr(int arr[])
{
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = 0;
	}
}
Reverse_arr(int arr[])
{
	for (int i = 0; i < 5; ++i)
	{
		int x = 0;
		x = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = x;
	}
}
Printf_arr(int arr[])
{
	for (int i = 0; i < 10; ++i)
	{
		printf("%d,",arr[i]);
	}
	printf("\b \n");
}

int main()
{
	int a[10] = { 0 };

	Init_arr(a);			//��ʼ������
	Printf_arr(a);

	Emty_arr(a);			//�������
	Printf_arr(a);

	Init_arr(a);
	Reverse_arr(a);		//����Ԫ������
	Printf_arr(a);

	system("pause");
	return 0;
}
