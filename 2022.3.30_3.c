#define _CRT_SECURE_NO_WARINGS 1
//3.找一个有序数组中的最大值
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,7,6,9,8,10 };
	int i = 0;
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1;i < sz;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
