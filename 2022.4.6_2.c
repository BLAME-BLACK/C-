#define _CRT_SECURE_NO_WARINGS 1
//2.дһ��������������������������
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