#define _CRT_SECURE_NO_WARINGS 1
//����n�Ľ׳�
#include<stdio.h>
int Fac(int n)
{
	if (1 <= n)
	{
		return 1;
	}
	else
	{
		return n*Fac(n - 1);
	}
}
int main()
{
	int n = 0;
	int ret;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}