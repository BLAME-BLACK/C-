#define _CRT_SECURE_NO_WARINGS 1
#include"game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);//初始化棋盘
	while (1)
	{
		PlayMove(board[ROW][COL],ROW,COL);
		DispalyBoard(board[ROW][COL],ROW,COL);
	    ret=Iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DispalyBoard(board[ROW][COL], ROW, COL);
		ret=Iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if 
		(printf("电脑赢\n"));
	else 
		printf("平局\n");

}
void menu()
{
	printf("**********************************\n");
	printf("********1.play     0.exit*********\n");
	printf("**********************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择;>");
		scanf("%d\n", &input);
		switch (input)
		{
		case 0:
			game();
			printf("退出游戏\n");
			break;
		case 1:
			printf("三子棋\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}