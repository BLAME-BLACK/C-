#include<stdio.h>
#define COL 3
#define ROW 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DispalyBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);
char Iswin(char board[ROW][COL], int row, int col);
