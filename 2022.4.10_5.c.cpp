#define _CRT_SECURE_NO_WARNINGS 1
//5.��ǰn���
#include<stdio.h>
int main()
{
    int i = 0;
	int ret = 1;
	int n = 0;
	int sum = 0;
	printf("������Ҫ����\n");
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		ret = i * ret;
		sum = ret + sum;
	}
	printf("%d", sum);
	return 0;
}