#define _CRT_SECURE_NO_WARNINGS 1
//3.�ж��ַ�
#include<stdio.h>
int main()
{
	char x = 0;
	printf("������һ���ַ�\n");
	scanf("%c", &x);
	if (x >= 48 && x <= 57)
	{
		printf("���ַ��������ַ�");
	}
	else if (x >= 65 && x < 90)
	{
		printf("���ַ��Ǵ�д��ĸ�ַ�");
	}
	else if (x >= 97 && x <= 122)
	{
		printf("���ַ���Сд��ĸ�ַ�");
	}
	else
	{
		printf("���ַ��������ַ�");
	}
	return 0;
}