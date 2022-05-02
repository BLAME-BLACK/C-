#define _CRT_SECURE_NO_WARNINGS 1
//3.计算前n相和
#include<stdio.h>
int main()
{
	int sum = 0;
	int n = 0;
	int x = 0;
	int i = 0;
	int e = 0;
	printf("请输入x的值\n");       //提醒用户输入x的值，并且换行
	scanf("%d", &x);               //输入函数，使输入的数存储到x中
	printf("请输入项数n\n");       //提醒用户输入n的值，并且换行
	scanf("%d", &n);               //与上同
	printf("\n");                  //换行
	sum = x;                       // 使sum等于x
	e = x;                         //使e等于x
	for (i = 1;i <= n-1;i++)       //循环，i要小于等于n-1次，使循环从1到n-1次（因为是从第二项开始循环的，第一项已经赋值给sum了，所以n-1次）
	{
		if (n == 1)                //判断，使当项数为1时，e置零，从而不影响后面计算总和
		{
			e = 0;                 //
		}
		else                       //n>2的情况
		{
			e = (-1)* e * x * x;   //每一项的值，先是将循环上的e=x；代入，得到第二项，循环时，第二项的结果就是e=（-1)*x*x*x,将第二项e代入计算，得到第三项，以此类推
		}
		sum = sum + e;             //当n==1时，sum=x，e=0；当n>2时，与上面的e思想一致，e此时不为零，sum=x
	}
	printf("S=%d", sum);           //打印结果
	return 0;
}