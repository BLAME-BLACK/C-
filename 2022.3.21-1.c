#define _CRT_SECURE_NO_WARINGS 1
//1¡£¼ÆËãnµÄ½×³Ë
#include<stdio.h>
int main()
{
	int ret = 1;
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		ret = ret * i;
	}
	n = ret;
	printf("%d\n", n);
	return 0;
}