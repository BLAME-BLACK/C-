#define _CRT_SECURE_NO_WARINGS 1
//1.判断一个数是否是奇数
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	(0 == x % 2) ? printf("该数不是奇数") : printf("该数是奇数");
}
