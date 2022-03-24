#define _CRT_SECURE_NO_WARINGS 1
//5.编写一个程序，模拟用户登录，只能输入三次密码，均失败则退出
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码：\n");
		scanf("%s", &password);
		if (strcmp(password , "123456")==0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if(3==i)
	{
		printf("输入密码错误三次，退出程序");
	}
	return 0;
}