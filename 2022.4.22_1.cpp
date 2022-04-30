#define _CRT_SECURE_NO_WARNINGS 1
//1.判断数是100-200之间含有数字7的素数
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	for (i = 101;i <= 200;i+=2)   //去掉偶数，算法优化
	{
		x=i % 100 ;             //去掉百位数
		x /= 10;                //计算十位数
		y = i % 10;             //计算个位数
		if (x == 7 || y == 7)   //判断个位数或十位数是否含有数字七
		{
			for (j = 2;j <= sqrt(i);j++) //生成2到开根号i的数字
			{
				if (i % j == 0)          //判断i能否被j整除，能，则不是素数
				{
					break;               //不是素数，条件成立，进入此，打破j的循环
				}
			}
				if (j > sqrt(i))         //如果到j大于开根号i都没有一个数可以整除i，则i是素数，此处为判断
				{
					printf("该数是100-200之间含有数字7的素数:%d\n", i);   //条件成立，打印i
				}
			}
		else
			continue;    //个位数或十位数不否含有数字七，则停止此次i循环，到下一个i循环	
	}
	return 0;
}