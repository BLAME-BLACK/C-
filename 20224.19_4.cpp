#define _CRT_SECURE_NO_WARNINGS 1
//4.�ж�������
#include<stdio.h>
int main()
{
		int a = 0;
		int b = 0;
		int c = 0;
		printf("������������,���ûس���\n");
		scanf("%d %d %d", &a, &b, &c);
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b && b== c &&a==c)
			{
				printf("���������ǵȱ�������");
			}
			else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
			{
				printf("���������ǵ���������");
			}
			else
			{
				printf("������������ͨ������");
			}
		}
		else
			printf("�����߲��ܹ���������");
		return 0;
	}