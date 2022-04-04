#define _CRT_SECURE_NO_WARINGS 1
//写一个关机程序
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = {0};
	system("shutdown -s -t 120");
again: 
	printf("请注意，你的电脑会在两分钟内关机，如果输入:我是猪，则取消关机\n");
	scanf("%s", &input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}