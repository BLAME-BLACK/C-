#define _CRT_SECURE_NO_WARINGS 1
//дһ���ػ�����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = {0};
	system("shutdown -s -t 120");
again: 
	printf("��ע�⣬��ĵ��Ի����������ڹػ����������:��������ȡ���ػ�\n");
	scanf("%s", &input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}