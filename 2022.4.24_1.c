#define _CRT_SECURE_NO_WARNINGS 
//1.冒泡排序数组升序
#include<stdio.h>
int main()
{
	int i = 0;                     //创建变量i来循环
	int j = 0;                     //创建变量j来循环
	int tmp = 0;                   //创建变量来作为临时载体
	int arr[10];                   //创建数组存放10个数据
	for (i = 0;i<10;i++)           //循环10次来输入数据
	{
		scanf("%d", &arr[i]);      //使输入的数据存到数组里
	}
	for (i = 0;i < 9;i++)          //循环9次（因为冒泡排序法要执行n-1次，数据为n）
	{
		for (j = 0;j < 9-i;j++)    //循环比较，每次j会需要比较的数减少9-i个（因为每次排序后，总会减少一个需要排序的数据）
		{
			if (arr[j] > arr[j+1]) //如果说发现循环的第arr[j]个元素比arr[j+1]大，则（完成下列操作后，两个数据会交换）
			{
				tmp=arr[j];        //将arr[i]的数据给tmp
				arr[j] = arr[j+1]; //将arr[j+1]的数据给arr[j]
				arr[j+1] = tmp;    //将tmp的数据给arr[j+1]
			}
		}
	}
	for (i = 0;i<10;i++)           //循环10次，打印每个数据
	{
		printf("%d ",arr[i]);      //打印。。。。
	}
	return 0;                      //如果想看到结果，就输入两个getchar（）；
}