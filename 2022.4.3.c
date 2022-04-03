#define _CRT_SECURE_NO_WARINGS 1
//电脑生成随机数，猜到则显示猜到，猜小则提示，，，可以显示再来一把
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************************\n");
	printf("*******1.play 0.exit *******\n");
	printf("****************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
    ret=rand()%100+1;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}
