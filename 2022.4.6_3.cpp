#define _CRT_SECURE_NO_WARINGS 1
//3��дһ������ÿ����һ�κ�����num��һ
#include<stdio.h>
int Add(int*num)
{
	(*num)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	return 0;
}