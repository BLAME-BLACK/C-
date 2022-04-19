#define _CRT_SECURE_NO_WARNINGS 1
//4.求梯形面积
#include<stdio.h>
int main()
{
	double a, b, h, area;
	printf("请输入上底边长:");
	scanf("%lf", &a);
	printf("请输入下底边长:");
	scanf("%lf", &b);
	printf("请输入高:");
	scanf("%lf", &h);
	area = (a + b) * h / 2;
	printf("梯形面积为:%lf", area);
	return 0;
}
