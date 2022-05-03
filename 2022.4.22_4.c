#define _CRT_SECURE_NO_WARNINGS 1
//4.用函数求最小公倍数
#include<stdio.h>
int limit(int a, int b)                         //创建函数求最小公倍数，传进a和b接收
{
	int m = 0;                                  //创建变量m，用来接受最小公倍数的值
	int ret = 0;                                //创建变量ret
	int z = 0;                                  //创建变量z
	z = a *b;                                  //先计算a*b的值，也就是x*y的值存储到z里
	while (a % b)                               //循环判断a除b取余数等于0，则终止循环，得到了最大公因数
	{
		ret = a %b;                             //ret=a除b取余数
		a = b;                                  //b再赋值给a
		b = ret;                                //取余数的结果再给b
	}
	m = z / b;                                  //a*b相乘的结果除最大公因数就得到了最小公倍数
	return m;                                   //返回最小公倍数的值
}
int main()
{
	int x = 0;                                  //创建变量x
	int y = 0;                                  //创建变量y
	int max = 0;                                //创建变量max，用来接收最小公倍数
	printf("请输入两个数\n");                   //提醒用户输入两个数的值
	scanf("%d%d", &x, &y);                      //输入两个值x与y
	max = limit(x, y);	                        //max接收函数limit计算的结果
	if(max%x==0)                                //判断当max是两者的最小公倍数时才打印（max除x或者y中的任一数取余数等于0）
	printf("这两个数的最小公倍数为:%d", max);   //打印max的值
	return 0;                                   //需要看到结果就把return 0；去掉，换成两个getchar（）；
}