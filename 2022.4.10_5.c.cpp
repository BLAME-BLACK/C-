#define _CRT_SECURE_NO_WARNINGS 1
//5.求前n项和
#include<stdio.h>
int main()
{
    int i = 0;
	int ret = 1;
	int n = 0;
	int sum = 0;
	printf("请输入要求几项\n");
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		ret = i * ret;
		sum = ret + sum;
	}
	printf("%d", sum);
	return 0;
}