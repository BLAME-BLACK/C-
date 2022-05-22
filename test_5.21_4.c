#define _CRT_SECURE_NO_WARNINGS 1
//1.创建一个函数来实现有序数组的二分查找
#include<stdio.h>
int binary_search(int arr[], int k, int sz)         //创建一个函数来实现有序数组的二分查找
{                                                   
	int left = 0;                                   //创建变量left表示左下标
	int right = sz - 1;                             //创建变量right表示右下标
	while (left <= right)                           //循环来查找是否有符合条件的数据
	{
		int mid = (left + right) / 2;               //使mid等于左右下标之和的一半
		if (arr[mid] < k)                           //如果arr[mid]这个数据小于要找的数据
		{
			left = mid + 1;                         //则使左下标变为中间下标的后一位（因为既然要找数据比arr[mid]代表的数大，则说明要找数据在右边）
		}
		else if (arr[mid] > k)                      //如果arr[mid]这个数据大于要找的数据
		{
			right = mid-1;                          //则使右下标变为中间下标的前一位
		}
		else                                        //如果不是以上两种情况，则说明刚好计算的中点坐标是结果
		{
			return mid;                             //返回其坐标
		}
	}
	return -1;                                      //如果全部数据都循环查找了，没找到就返回-1；
}
int main()                           
{    
	int arr[] = { 2,10,27,34,44,46,50,52,66,85 };   //创建一个数组，随机达10个有序的数 
	int x = 46;                                     //创建一个变量来放要找的数
	int sz = sizeof(arr) / sizeof(arr[0]);          //该语句的效果是计算数组的元素个数，存放到sz里
	int ret = binary_search(arr, x, sz);            //将函数的结果赋给ret
	if (ret == -1)                                  //判断ret是否等于-1
	{
		printf("找不到指定数字\n");                 //结果ret等于-1，则打印
	}
	else                                            //结果不是-1
	{
		printf("找到了，下标是：%d\n", ret);        //打印。。。
	}
	return 0;                                       //想看到结果，打两个getchar（）；
}