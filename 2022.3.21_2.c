#define _CRT_SECURE_NO_WARINGS 1
//2.1！+2！+3!......+n！
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for(i=1;i<=n;i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
