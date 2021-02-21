#include <stdio.h>
#include <stdlib.h>
#define N 8
char tankHangiYoeGitmeli(int e[][N],int x,int y,int z);
int main()
{
   int e[N][N]={{1,2,2,1,0,0,1,1},
               {1,2,2,0,0,0,1,1},
               {2,1,1,2,1,2,1,0},
               {2,2,2,1,1,1,0,0},
               {1,2,2,1,0,0,1,1},
               {0,0,0,1,1,2,1,2},
               {1,1,0,0,0,0,2,0},
               {2,2,2,1,1,1,1,1}};
    char a;
    a=tankHangiYoeGitmeli(e,4,2,1);
    if(a=='b')
        printf("\nBatiya gitmeli");
    else if(a=='d')
        printf("\nDoguya gitmeli");
    else if(a=='g')
        printf("\nGuneye gitmeli");
    else if(a=='k')
        printf("\nKuzeye gitmeli");
    else if(a=='y')
        printf("\nEsit");
    return 0;
}
char tankHangiYoeGitmeli(int e[][N],int x,int y,int z)
{
    int i,j;
    int b=0,k=0,g=0,d=0;
    for(j=y;j>-1;j--)
    {
        if(z==1)
        {
            if(e[x][j]==2)
               b++;
    }
    else if(z==2)
    {
        if(e[x][j]==1)
               b++;
    }
    }
    for(j=y;j<N;j++)
    {
         if(z==1)
        {
            if(e[x][j]==2)
               d++;
    }
    else if(z==2)
    {
        if(e[x][j]==1)
               d++;
    }
    }
    for(i=x;i<N;i++)
    {
        if(z==1)
        {
            if(e[i][y]==2)
               g++;
    }
    else if(z==2)
    {
        if(e[i][y]==1)
               g++;
    }
    }
     for(i=x;i>-1;i--)
    {
        if(z==1)
        {
            if(e[i][y]==2)
               k++;
    }
    else if(z==2)
    {
        if(e[i][y]==1)
               k++;
    }
    }
    if(b>k && b>g && b>d)
        return 'b';
    else if(d>k && d>g && b<d)
        return 'd';
    else if(g>k && b<g && g>d)
        return 'g';
    else if(b<k && k>g && k>d)
        return 'k';
    else
        return 'y';
}
