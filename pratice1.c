#define _CRT_SECURE_NO_WARINGS 1
//1.�ж�һ�����Ƿ�������
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	(0 == x % 2) ? printf("������������") : printf("����������");
}
