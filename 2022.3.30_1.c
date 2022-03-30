#define _CRT_SECURE_NO_WARINGS 1
//1.计算1-100之间所有整数中出现的9的个数
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1;i < 100;i++)
	{
		if (9 == i % 10)
		{
			count++;
		}
        if (9 == i / 10)
		{
			count++;
		}
	}
	printf("count:%d\n", count);
	return 0;
}