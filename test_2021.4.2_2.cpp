#define _CRT_SECURE_NO_WARNINGS 1
//2.�ú������������е����ֵ
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
	printf("������a,b,c��ֵ��������밴�س���\n");
	scanf("%f %f %f", &a, &b, &c);
    max = MAX(a, b, c);
	printf("���������ֵΪmax=%f",max);
	return 0;
}