#include <stdio.h>
#include <stdlib.h>

int main()
{
    char d[3][3]={};
    int say=0,i,j;
    while(1)
    {
        say++;
        printf("\nX olan oyuncunun sirasi(satir,sutun):");
        scanf("%d%d",&i,&j);
        d[i][j]='X';
        if(say>=5)
        {
            if(i==2 && d[i][j]=='X' && d[i-1][j]=='X' && d[i-2][j]=='X')
                {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                break;}
            else if(i==0 && d[i][j]=='X' && d[i+1][j]=='X' && d[i+2][j]=='X')
                 {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
            else if(i==1 && d[i][j]=='X' && d[i+1][j]=='X' && d[i-1][j]=='X')
                  {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
            else if(j==0 && d[i][j]=='X' && d[i][j+1]=='X' && d[i][j+2]=='X')
                 {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
            else if(j==2 && d[i][j]=='X' && d[i][j-1]=='X' && d[i][j-2]=='X')
               {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
            else if(j==1 && d[i][j]=='X' && d[i][j+1]=='X' && d[i][j-1]=='X')
                 {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
            else if(i==j && d[i][j]=='X' && d[i+1][j+1]=='X' && d[i+2][j+2]=='X')
                  {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
             else if(i==j && d[i][j]=='X' && d[i-1][j-1]=='X' && d[i-2][j-2]=='X')
                  {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
             else if(i==j && d[i][j]=='X' && d[i+1][j+1]=='X' && d[i-1][j-1]=='X')
                 {printf("\nOyun bitti!1. oyuncu(X) kazandi");
                 break;}
            else if(say==9)
                break;
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%c",d[i][j]);
        printf("\n");
        }
        printf("\nO olan oyuncunun sirasi(satir,sutun):");
        scanf("%d%d",&i,&j);
        say++;
        d[i][j]='O';
        if(say!=9 && say>=6)
        {
            if(i==2 && d[i][j]=='O' && d[i-1][j]=='O' && d[i-2][j]=='O')
                  {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
            else if(i==0 && d[i][j]=='O' && d[i+1][j]=='O' && d[i+2][j]=='O')
                   {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
            else if(i==1 && d[i][j]=='O' && d[i+1][j]=='O' && d[i-1][j]=='O')
                   {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
            else if(j==0 && d[i][j]=='O' && d[i][j+1]=='O' && d[i][j+2]=='O')
                  {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
            else if(j==2 && d[i][j]=='O' && d[i][j-1]=='O' && d[i][j-2]=='O')
                 {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
            else if(j==1 && d[i][j]=='O' && d[i][j+1]=='O' && d[i][j-1]=='O')
                 {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
            else if(i==j && d[i][j]=='O' && d[i+1][j+1]=='O' && d[i+2][j+2]=='O')
                  {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
             else if(i==j && d[i][j]=='O' && d[i-1][j-1]=='O' && d[i-2][j-2]=='O')
                   {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
             else if(i==j && d[i][j]=='O' && d[i+1][j+1]=='O' && d[i-1][j-1]=='O')
                  {printf("\nOyun bitti!2. oyuncu(O) kazandi");
                 break;}
        }
        printf("\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%c",d[i][j]);
        printf("\n");}
    }
    if(say==9)
        printf("\nBerabere");
    printf("\n------------------------------------\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%c",d[i][j]);
        printf("\n");
        }
    return 0;
}
