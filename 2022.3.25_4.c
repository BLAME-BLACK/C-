#define _CRT_SECURE_NO_WARINGS 1
//4.打印1000-2000之间的闰年
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000;year <=2000;year++)
	{
		if ((0 == year % 4) && (0 != year % 100) || (0 == year % 400))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n 闰年有：%d", count);
	return 0;
}