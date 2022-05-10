#define _CRT_SECURE_NO_WARNINGS 1
//3.求十个数的平均值
#include<stdio.h>
int main()
{
	float arr[10] = { 0 };                  //创建float型的数组（其实就是小数数组），并且将数组每个元素置零
	int i = 0;                              //创建变量i来控制循环
	float sum = 0.0;                        //创建变量sum来接收和的值
	printf("请输入10个数字");               //提醒用户输入十个数字
	for (i = 0;i < 10;i++)                  //循环十次用来使输入的值到数组中
	{
			scanf("%f", &arr[i]);           //每次输入会使值到arr数组中，而【i】下标表示第几个元素
			sum = sum + arr[i];             //将每次的结果都计算和到sum里
			printf("%f\n", arr[i]);         //打印每个数组的元素
	}
	sum /= 10.0;                            //求十个元素的平均值
	printf("%f", sum);                      //打印十个元素的平均值
	return 0;                               //如果想看到结果，输入一个getchar（）；
}