#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int d[7][7]={0},i,j,x,e=0,say=0,kont=0;
    int a[7],sira=1;
    srand(time(NULL));
    while(say<7)
    {
        if(say==0)
            {
                a[e]=rand()%8;
                say++;
                e++;}
        else
        {
            kont=0;
            x=rand()%8;
            for(i=0;i<e;i++)
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
    for(i=0;i<7;i++)
    {
        for(j=6;j>-1;j--)
          {
           d[a[i]][a[j]]=sira;
           sira++;}
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
            printf("%3d",d[i][j]);
     printf("\n");
    }
    return 0;
}
