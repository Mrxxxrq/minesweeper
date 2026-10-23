#include<stdio.h>
#include"board.h"//.h类似宏，他其实只负责把那一坨展开，用里面的函数声明哄住后面，让这个程序觉得有函数声明，合法。
                 //然后就不管了，而函数定义的文件又只负责函数本身，谁爱用谁用，所以事实上这两个文件互不相认，全靠链接器。



void menu()
{
    printf("---------------------------\n");
    printf("---------1.开始游戏---------\n");
    printf("---------0.退出游戏---------\n");
    printf("---------------------------\n");
}

void game()
{
    char mine[ROWS][COLS];
    char show[ROWS][COLS];
    //初始化棋盘
    initboard(mine,ROWS,COLS,'0');
    initboard(show,ROWS,COLS,'*');
    //打印棋盘
    displayboard(show,ROW,COL);
    //布置雷
}
//需要函数来初始化棋盘


int main()
{
    int input = 0;
    do
    {
       menu();
       scanf("%d",&input);
       switch (input)
       {
       case 1:
           printf("\n");
           game();
           break;
       case 0:
           break;
       default:
           printf("输入错误，重试\n");
           break;
       }
       

    } while (input);
    return 0;
}
