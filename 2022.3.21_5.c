#define _CRT_SECURE_NO_WARINGS 1
//5.��дһ������ģ���û���¼��ֻ�������������룬��ʧ�����˳�
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("���������룺\n");
		scanf("%s", &password);
		if (strcmp(password , "123456")==0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if(3==i)
	{
		printf("��������������Σ��˳�����");
	}
	return 0;
}