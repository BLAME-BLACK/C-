#define _CRT_SECURE_NO_WARINGS 1
//1.计算数组里的字符个数
#include<stdio.h>
#include<string.h>                                //计算字符串的长度要引这个头文件
int main()
{
	char ch[] = {0};                              //创建字符数组ch
	int i = 0;                                    //创建变量i，控制循环
	int a = 0;                                    //创建变量a，计数
	int b = 0;                                    //创建变量b，计数
	printf("请输入任意大小写字符");               //提示用户输入
	gets(ch);                                     //使用户输入的字符储存在ch里
	int sz = strlen(ch);                          //计算字符元素个数并赋给sz
	for (i = 0;i < sz;i++)                        //循环
	{
			if (ch[i]>='a'&&ch[i]<='z')           //如果有小写字母，则
			{
				a++;                              //a+1
			}
			if (ch[i] >= 'A' && ch[i] <= 'Z')     //如果有大写字母，则
			{
				b++;                              //b+1
			}
	
	}
	printf("小写字母个数:%d\n", a);               //打印。。。
	printf("大写字母个数:%d\n", b);               //打印。。。
	return 0;                                     //如果想看到结果，输入两个getchar（）；
}