#define _CRT_SECURE_NO_WARINGS 1
//1.дһ���������Ƚ��������еĽϴ�ֵ
#include<stdio.h>
int get_max(int x, int y)
{
	return(x > y) ? x:y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max=get_max(a,b);
	printf("max=%d\n", max);
	return 0;
}