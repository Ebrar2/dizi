#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 4
void diziBol(int d[][M],int x);
int main()
{
    int d[N][M],i,j;
    for(i=0;i<N;i++)
    {
        printf("%d.satiri giriniz:",i+1);
         for(j=0;j<M;j++)
         scanf("%d",&d[i][j]);
        printf("\n");
    }
    printf("\n------------------------------------------\n");
    printf("Sol ucgen:");
    diziBol(d,1);
    printf("\n------------------------------------------\n");
    printf("Sag ucgen:");
    diziBol(d,0);
    return 0;
}
void diziBol(int d[][M],int x)
{
    int i,j,say=0,b=0;
    if(x==1)
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                if((i+j)<N-1)
                        say++;


            }
        }

        int a[say];
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                if((i+j)<N-1)
                   {a[b]=d[i][j];
                   b++;
            }
        }}
        for(i=0;i<say;i++)
            printf("%3d",a[i]);
    }
   else  if(x==0)
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                if((i+j)>N-1)
                        say++;
            }
        }
        int a[say];
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                if((i+j)>N-1)
                   {a[b]=d[i][j];
                   b++;
            }
        }}
        for(i=0;i<say;i++)
            printf("%3d",a[i]);
    }
    else
        printf("\nHatali x degeri!");
}
