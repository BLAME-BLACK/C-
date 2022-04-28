#define _CRT_SECURE_NO_WARNINGS 1
//4.将每位数加起来
#include<stdio.h>
int main()
{
	int sum = 0;
	int n = 0;
	int x = 1;
	scanf("%d", &n);   //输入n的值
	do                 //先计算一次
	{
		x = n % 10;    //计算个位数给x
		sum = sum + x;  //将计算结果累加起来
		n = n / 10;     //去除末位数后重新赋值给n
	} while (n!=0);     //此时判断是否n的值为0；（即判断n是否计算到最高位）
	printf("%d", sum);
	return 0;
}