#define _CRT_SECURE_NO_WARNINGS 1
//2.用函数求三个数中的最大值
#include<stdio.h>
float MAX(float x, float y, float z)
{
	if (x > y && x > z)
		return x;
	else if (y > z)
		return y;
	else
		return z;
}
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float max = 0;
	printf("请输入a,b,c的值，输入后请按回车键\n");
	scanf("%f %f %f", &a, &b, &c);
    max = MAX(a, b, c);
	printf("三者中最大值为max=%f",max);
	return 0;
}