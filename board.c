#include"board.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void displayboard(char board[ROWS][COLS],int r,int c)
{
   int i = 0;
   int j = 0;
   
    for (j = 0; j <= c; j++)
    {
        printf("%d ",j);
    }
    printf("\n");
    for ( i = 1; i <=r; i++)
    {
        printf("%d ",i);
        for ( j = 1; j <=c; j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}



void initboard(char board[ROWS][COLS],int r,int c,char set)
{
    int i = 0;
    int j = 0;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            board[i][j] = set;
        }
        
    }
    
    
}



void setmine(char board[ROWS][COLS],int r,int c)
{
    srand((unsigned int)time(NULL));
    for(int i = 0;i<10;i++)
    {
        int x = rand()%c+1;
        int y = rand()%r+1;
        board[y][x] = '1';
    }
}