#define _CRT_SECURE_NO_WARNINGS 1
//1.计算每科成绩的平均分和总分
#include<stdio.h>
int main()
{
	char NAME;
	float MATH;
	float PHYSICS;
	float CHEMSTRY;
	float SUM;
	float AVERAGE;
	printf("MATH   PHYSICS  CHEMSTRY \n");
	scanf("%f%f%f", &MATH, &PHYSICS, &CHEMSTRY);
	AVERAGE = (MATH + PHYSICS + CHEMSTRY) / 3.0;
	SUM = MATH + PHYSICS + CHEMSTRY;
	printf(" SUM  AVERAGE\n");
	printf(" %f  %f\n", SUM, AVERAGE);
	scanf("%ch     %f      %f        %f       %f        %f\n", &NAME, &MATH, &PHYSICS, &CHEMSTRY, &SUM, &AVERAGE);
	scanf("%ch     %f      %f        %f       %f        %f\n", &NAME, &MATH, &PHYSICS, &CHEMSTRY, &SUM, &AVERAGE);
	printf("***********************************************************\n");
	printf("NAME  MATH   PHYSICS   CHEMSTRY   SUM  AVERAGE\n");
	printf("%ch     %f      %f        %f       %f        %f\n", NAME, MATH, PHYSICS, CHEMSTRY, SUM, AVERAGE);
	printf("%ch     %f      %f        %f       %f        %f\n", NAME, MATH, PHYSICS, CHEMSTRY, SUM, AVERAGE);
	return 0;
}
