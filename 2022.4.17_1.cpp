#define _CRT_SECURE_NO_WARNINGS 1
//����Բ�����Բ�ܳ�
#include<stdio.h>
#define PI 3.14159
int main()
	{
		float r, area,girth;
		scanf_s("%f", &r);
		area = PI * r * r;
		girth = PI * 2 * r;
		printf("Բ���Ϊ%fԲ�ܳ�Ϊ%f\n", area,girth);
		return 0;
	}