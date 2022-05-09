#define _CRT_SECURE_NO_WARNINGS 1
//2。计算1+22+333+444+.....的值
#include<stdio.h>
#include<assert.h>                      //使用断言，引头文件
int main()
{
	int n = 0;                          //创建变量n用来储存输入n的值
	int i = 0;                          //创建变量i来控制第一个循环
	int j = 0;                          //创建变量j来控制第二个循环
	int s = 0;                          //创建变量s来接收每个项加起来的和
	printf("请输入项数n\n");            //提醒用户输入n的值
	scanf("%d", &n);                    //输入的n的值储存再n中
	assert(0< n < 8);                   //判断n是否小于8
	for (i = 1;i <= n;i++)              //循环i次数，由n控制
	{
		int ret = 0;                    //每次循环都使ret等于0
		for (j = 1;j <=i;j++)           //循环j，用来计算每一项的值
		{
			ret = 10 *  ret+i;          //计算的结果乘于10变成上一位的值(如：各位变十位）再加上本位的值，然后再赋给ret
			
		}
		s += ret;                       //使每项的值相加，到s中
	}
	printf("%d\n", s);                  //打印最后的值
	return 0;                           //如果想显示最后的结果，请打上getchar（）
}