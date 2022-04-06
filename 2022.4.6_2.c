#define _CRT_SECURE_NO_WARINGS 1
//2.写一个函数，交换两个整数的内容
#include<stdio.h>
void swap(int*pa, int*pb)
{
	(*pa) = (*pa) ^ (*pb);
	(*pb) = (*pa) ^ (*pb);
	(*pa) = (*pa) ^ (*pb);
}
int main()
{
	int a = 3;
	int b = 5;
	swap(&a,&b);
	printf("%d %d", a, b);
	return 0;
}