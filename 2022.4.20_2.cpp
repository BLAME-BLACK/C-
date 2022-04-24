#define _CRT_SECURE_NO_WARNINGS 1
//2.求一个函数的根
#include<stdio.h>
#include<math.h>
int main()
{
	double x1 = 0;
	double x2 = 0;
	double a = 0.0;
	double b = 0.0;
    double c = 0.0;
	double p ;
	printf("请输入系数a，b，c，的值\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	p = (b * b)-( 4 * a * c);
	if (p > 0)
	{
		printf("该方程有两相异实根");
	}
	else if (p == 0)
	{
		printf("该方程有两个相同的根");
	}
	else
	{	
		printf("该方程有虚数根");
	}
	printf("\n");
	x1 = (-b + sqrt(p)) / (2 * a);
	x2 = (-b - sqrt(p)) / (2 * a);
	printf("x1=%lf  x2=%lf", x1, x2);
}
