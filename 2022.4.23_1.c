#define _CRT_SECURE_NO_WARNINGS 1
//1.计算是否是水仙花数
#include<stdio.h>
#include<assert.h>                              //引头文件使用断言
int man()
{
	int n =0;                                   //创建变量n
	int a, b, c, x;                             //创建变量a，b，c，x，接收n的百位，十位，个位，和a，b，c三个数立方之后的和
	printf("请输入三位数的数字\n");             //提示用户输入一个三位数的数字
	scanf("%d", &n);                            //将输入的三位数储存到n里
	assert(0 <= n <= 1000);                     //判断输入的三位数是否输入错误
     a = n / 100;                               //计算n的的百位数 
	 b = (n % 100) / 10;                        //计算n的十位数，计算原理（n先取模（取余数）100，再除一个10） 
	 c = n % 10;                                //计算n的个位数 
	 x = a * a * a + b * b * b + c * c * c;     //计算n的个位，十位，百位，立方的的和
	 if (n == x)                                //判断x是否等于n，即数是否是水仙花数，是。则
		 printf("该数是水仙花数\n");            //打印。。。
	 else                                       //不是水仙花数，则
		 printf("该数不是水仙花数\n");          //打印。。。。
	return 0;                                   //如果想显示结果，则打两个getchar（）
}