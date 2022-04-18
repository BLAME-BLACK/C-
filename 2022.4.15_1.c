#define _CRT_SECURE_NO_WARINGS 1
//1.打印三角形
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1;i <= 5;i++)
	{
		for (j = 1;j <= 2 * i - 1;j++)
		{
			printf("* ");
		}
		for (j = 1;j <= 10 - 2 * i;j++)
		{
			printf(" ");
		}
		/*for (j = 1;j <= 2 * i - 1;j++)
		{
			printf("* ");
		}*/
			printf("\n");
	}
}
