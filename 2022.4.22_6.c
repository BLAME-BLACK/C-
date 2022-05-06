#define _CRT_SECURE_NO_WARNINGS 1
//6.计算有多少颜色搭配
#include<stdio.h>
int main()
{
    int i, j, k, n = 0;                                            //创建变量
    for (i = 2;i <= 6;i++)                                         //循环红球从2开始到上限6
    for (j = 1;j <= 6;j++)                                         //循环绿球从1开始到上限6
    for (k = 0;k <= 4;k++)                                         //循环蓝球从0开始到上限4
    {
        if (i + j + k == 8)                                        //如果三种球的总和等于8才符合题目
      {
                 n++;                                              //每一个符合条件的搭配，都记录一次
              printf("红球：%d 绿球：%d 蓝球：%d\n", i, j, k);     //打印符合条件的情况
       }
     }
    printf("共有%d种颜色搭配。\n", n);                             //打印。。。
    return 0;                                                      //如果想显示结果，打上两个getchar（）
}