#define _CRT_SECURE_NO_WARINGS 1
//4.接受一个整型值（无符号），按顺序打印他的每一位(递归思想）
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}