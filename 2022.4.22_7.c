#define _CRT_SECURE_NO_WARNINGS 1
//7.计算到7的几分之一的和
#include<stdio.h>
int main()
{
	float n = 0;                   //创建变量n，代表每一项
	float k = 1;                   //创建变量k代表分母
	int i = 0;                     //创建变量i来控制第一个循环
	float j = 0;                   //创建变量j来控制第二个循环
	float s = 0;                   //创建变量来接收最后的计算结果
	for (i = 1;i <= 7;i++)         //对应题目中项数n=7，则循环7次
	{
		for (j =1;j<=i;j++ )       //用循环来计算每一项的阶乘，其中，用i来控制j的循环次数
		{
			k = k * j;             //k等于上一次的k乘于j
		}
		n = 1.0 / k;               //计算每一项的结果储存到n里
		s = s + n;                 //用第一个循环来控制将每一项的值存到s里
	}
	printf("%0.9f", s);            //0.9表示打印小数点后9位，f表示数值是小数点形式（语法规定）
	return 0;                      //如果想显示结果，则输入两个getchar（）
}