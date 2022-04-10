#define _CRT_SECURE_NO_WARINGS 1
//1.编写一个函数不创建临时变量，实现计算字符串长度
#include<stdio.h>
int my_strlen(char*str)
{
	if(*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else 
	{
		return 0;
	}
	
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}