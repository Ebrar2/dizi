#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#define N 20
int atamaVarmi(char d[][N],int x,int y);
int main()
{
    int i,j,say=0,x,y;
    char d[N][N];
    for(i=0;i<N;i++)
        {for(j=0;j<N;j++)
           d[i][j]='-';}
    srand(time(NULL));
    while(say<10)
     {
         x=rand()%20;
         y=rand()%20;
         if(say==0)
         {
             d[x][y]='V';
             say++;
         }
         else
         {
             if(atamaVarmi(d,x,y)!=0)
             {d[x][y]='V';
             say++;
         }
    }}
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%c",d[i][j]);
        printf("\n");
    }
    return 0;
}
int atamaVarmi(char d[][N],int x,int y)
{
    int i,j,say=0,fark1,fark2;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(d[i][j]=='V')
            {
                fark1=abs(i-j);
                fark2=abs(x-y);
                if(x!=i && y!=j)
             {
                    if(fark1==fark2 && i<j && x>y)
                      say++;
                    else if(fark1==fark2 && i>j && x<y)
                        say++;
                    else if(fark1==fark2 && i>j && x>y)
                        return 0;
                    else if(fark1==fark2 && i<j && x<y)
                        return 0;
             }
                else
                     return 0;

        }
        }
    }
    if(say!=0)
        return 1;
}
