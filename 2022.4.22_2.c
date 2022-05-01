#define _CRT_SECURE_NO_WARNINGS 1
//2.计算每位数的和
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	float sum = 0;
	float x = 1;               //x,y,z都是float类型的数，才能使其进行小数计算，接收也是
	float y = 2;
	float z = 0;
	float m = 0;
	scanf("%d", &n);            //输入计算的项数
	for (i = 1;i <= n;i++)      //从第一项到第n项的循环
	{
		z = x / y;              //计算每一项的值
		sum = sum + z;          //将每一项的值加起来
		m = y;                  //将分母的值保存起来，以防丢失
		y = x + y;              //计算新的分母
		x = m;                  //计算新的分子
	}
	printf("%f", sum);
	return 0; 
}