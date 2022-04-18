#define _CRT_SECURE_NO_WARINGS 1
//5.计算100到200之间的素数
#include<stdio.h>
#include<math.h>
int main()
{

	int i = 0;
	int count = 0;
	for (i = 101;i <=200;i+=2)
	{
		int j = 0;
		for (j = 2;j <=sqrt(i);j++)
		{
			if (0 == i % j)
			{
				break;
			}
		}
			if (j >sqrt(i))
			{
				count++;
				printf("%d ", i);
			}
	}
	printf("\ncount:%d ", count);
	return 0;
}
