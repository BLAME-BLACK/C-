#define _CRT_SECURE_NO_WARINGS 1
//2.输出1-100之间的奇数
#include<stdio.h>
int main()
{
	int i = 1;
	while (i < 99)
	{
		i += 2;
		printf("%d ", i);
	}
}