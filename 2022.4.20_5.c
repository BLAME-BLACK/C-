#define _CRT_SECURE_NO_WARNINGS 1
//5.判断是否是回文数
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int z = 0;
	scanf("%d", &n);   //输入数字n
	z = n;             //讲数值n赋给z，防止n在后续计算中变化，而丢失n的值
	while (n)          //当n为0时，不循环，控制循环条件，每次计算n的值都会进行返回判断
	{
		m = m * 10 + n % 10;     //计算n的反序列
		n /= 10;                 //将最后一位数去掉，再将计算后的值赋给n
	}
	if (m == z)                  //最后判断你输入的值n，即z(正序列)与m（反序列）是否相等
		printf("该数是回文数:%d",z);
	else
		printf("该数不是回文数:%d",z);
	return 0;
}