#define _CRT_SECURE_NO_WARINGS 1
//4.��ӡ9*9�ھ���
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1;i <= 9;i++)
	{
		int j = 0;
		for (j = 1;j <=i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j );
		}
		printf("\n");
	}
	return 0;
}