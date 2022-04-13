#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main() 
{
    float f = 0;
    float p = 0;
    float w = 0;
	int d = 0;
	int z = 0;
	int s = 0;
    printf("f表示总运费,p表示基本运费，w表示重量，d表示折扣,s表示距离\n");
    printf("请输入基本运费，重量，距离\n");
	scanf("%f %f %d", &p,&w,&s);
	z = s / 500;
	printf("%d", z);
	switch (z)
	{
	case 0: 
		d = 0;
		break;
	case 1: 
		d = 2;
		break;
	case 2:	
	case 3:
		d = 5;
		break;
	case 4:
	case 5:
		d = 10;
		break;
	default:
		d = 15;
		break;
	}
     f = p * w * s * (1 - d / 100.0);
     printf("%f", f);
	 return 0;
}