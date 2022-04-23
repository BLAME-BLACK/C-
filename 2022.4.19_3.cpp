#define _CRT_SECURE_NO_WARNINGS 1
//3.计算三角形面积
#include<stdio.h>
#include<math.h>
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	
	printf("请输入三角形的三边\n");
	scanf("%f %f %f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		float s = 0;
		s = (a + b + c) / 2;
		s = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("三角形面积为s=%f", s);
	}
	else 
		printf("三条边不能构成三角形");
	return 0;
}