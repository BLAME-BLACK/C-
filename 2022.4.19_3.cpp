#define _CRT_SECURE_NO_WARNINGS 1
//3.�������������
#include<stdio.h>
#include<math.h>
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	
	printf("�����������ε�����\n");
	scanf("%f %f %f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		float s = 0;
		s = (a + b + c) / 2;
		s = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("���������Ϊs=%f", s);
	}
	else 
		printf("�����߲��ܹ���������");
	return 0;
}