#define _CRT_SECURE_NO_WARNINGS 1
//4.���������
#include<stdio.h>
int main()
{
	double a, b, h, area;
	printf("�������ϵױ߳�:");
	scanf("%lf", &a);
	printf("�������µױ߳�:");
	scanf("%lf", &b);
	printf("�������:");
	scanf("%lf", &h);
	area = (a + b) * h / 2;
	printf("�������Ϊ:%lf", area);
	return 0;
}