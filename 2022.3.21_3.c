#define _CRT_SECURE_NO_WARINGS 1
//��һ�����������в���һ����
#include<stdio.h>
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	scanf("%d", &k);
	while (left <= right)
	{
		if(arr[mid]>k)
		{
			right = mid-1;
		}
		else if (arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		if(left>right)
		{
			printf("�Ҳ���\n");
		}
	}
	return 0;
}