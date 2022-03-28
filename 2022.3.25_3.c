#define _CRT_SECURE_NO_WARINGS 1
//3.给定两个数，求两个数的最大公因数
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r=m % n)
	{
		m = n;
		n = r;
	}
	printf("最大公因数%d\n", n);
	return 0;
}