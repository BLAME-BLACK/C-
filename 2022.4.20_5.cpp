#define _CRT_SECURE_NO_WARNINGS 1
//5.��һ�������ĸ�
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
	printf("������ϵ��a��b��c����ֵ\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	p = (b * b)-( 4 * a * c);
	if (p > 0)
	{
		printf("�÷�����������ʵ��");
	}
	else if (p == 0)
	{
		printf("�÷�����������ͬ�ĸ�");
	}
	else
	{	
		printf("�÷�����������");
	}
	printf("\n");
	x1 = (-b + sqrt(p)) / (2 * a);
	x2 = (-b - sqrt(p)) / (2 * a);
	printf("x1=%lf  x2=%lf", x1, x2);
}