#define _CRT_SECURE_NO_WARINGS 1
#include"game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);//��ʼ������
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
		printf("���Ӯ\n");
	}
	else if 
		(printf("����Ӯ\n"));
	else 
		printf("ƽ��\n");

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
		printf("��ѡ��;>");
		scanf("%d\n", &input);
		switch (input)
		{
		case 0:
			game();
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("������\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}