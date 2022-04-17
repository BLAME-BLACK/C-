#define _CRT_SECURE_NO_WARNINGS 1
//计算圆面积跟圆周长
#include<stdio.h>
#define PI 3.14159
int main()
	{
		float r, area,girth;
		scanf_s("%f", &r);
		area = PI * r * r;
		girth = PI * 2 * r;
		printf("圆面积为%f圆周长为%f\n", area,girth);
		return 0;
	}