#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include<time.h>
#include<stdlib.h>

//初始化棋盘
void initboard(char board[ROWS][COLS],int r,int c,char set);

void displayboard(char board[ROWS][COLS],int r,int c);

void setmine(char board[ROWS][COLS],int r,int c);