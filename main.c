#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[9][9]={0},i,j,x,say=0,e=0,num=1;
    int a[9],kont=0;
    while(say<9)
    {
      x=rand()%9;
       if(say==0)
         {
        a[e]=x;
        e++;
        say++;
    }
       else
       {
           kont=0;
           for(i=0;i<say;i++)
           {
               if(a[i]==x)
                kont++;
           }
         if(kont==0)
         {
             a[e]=x;
             e++;
             say++;
         }
       }
    }
    for(i=0;i<9;i++)
    {
        for(j=9;j>-1;j--)
        {
            if(a[i]!=1 && a[i]!=4 &&  a[i]!=7)
              {d[a[i]][a[j]]=num;
              num++;
    }}}
     for(i=0;i<9;i++)
    {
        printf("%d.satir:",i);
        for(j=0;j<9;j++)
            printf("%3d",d[i][j]);
    printf("\n");
    }
    return 0;
}
