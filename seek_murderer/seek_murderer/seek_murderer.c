#include <stdio.h>
#include <stdlib.h>

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

int main()
{
	char murderer;
	for (murderer = 'A'; murderer <= 'D'; ++murderer)
	{
		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'C') == 3)
		{
			printf("������%c\n",murderer);
		}
	}
	system("pause");
	return 0;
}
