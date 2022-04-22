#define _CRT_SECURE_NO_WARINGS 1
//1.冒泡排序使得一个数组变成升序
#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		int flag = 1;//假设本次要排序的数组已经有序
		for (j = 0;j < sz - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;//本次排序的数组还未完全有序
		}
		}	
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}