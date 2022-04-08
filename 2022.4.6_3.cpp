#define _CRT_SECURE_NO_WARINGS 1
//3。写一个程序，每调用一次函数，num加一
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