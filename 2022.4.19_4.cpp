#define _CRT_SECURE_NO_WARNINGS 1
//4.判断三角形
#include<stdio.h>
int main()
{
		int a = 0;
		int b = 0;
		int c = 0;
		printf("请输入三条边,后敲回车键\n");
		scanf("%d %d %d", &a, &b, &c);
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b && b== c &&a==c)
			{
				printf("该三角形是等边三角形");
			}
			else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
			{
				printf("该三角形是等腰三角形");
			}
			else
			{
				printf("该三角形是普通三角形");
			}
		}
		else
			printf("三条边不能构成三角形");
		return 0;
	}
