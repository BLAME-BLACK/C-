#define _CRT_SECURE_NO_WARINGS 1
//4.演示多个字符从两端移动，向中间汇集。（即字符从两端开始显示）
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to this world!!";
	char arr2[] = "#######################";
	int sz = sizeof(arr1)/sizeof(arr1[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;right--;
		if (left < right)
		{
			system("cls");
		}
	}
	return 0;
}