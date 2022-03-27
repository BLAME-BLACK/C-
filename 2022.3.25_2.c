#define _CRT_SECURE_NO_WARINGS 1
//2.写一个代码打印1-100之间3的倍数
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1;i < 100;i++)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);
		}
	}
	return 0;
}