#define _CRT_SECURE_NO_WARNINGS 1
//2.��1000��10000֮�����abcd=(ab+cd)��ƽ�������ʵ���λ��
#include<stdio.h>
int main()
{
	int a = 0,b = 0,c=0,d=0;
	int z = 0;
	int x = 0, y = 0;
	for (z = 1000;z< 10000;z++)
	{
		a = z / 1000;
		b = (z % 1000) / 100;
		c = (z % 100) / 10;
		d = (z % 10) / 1;
		x = (a * 10) + (b * 1);
		y = (c * 10) + (d * 1);
		if (z == (x+y)*(x+y))
		{
			printf("�����Ǿ���abcd=(ab+cd)��ƽ�� �����ʵ���λ��;%d", z);
			printf("\n");
		}
	}
	return 0;
}