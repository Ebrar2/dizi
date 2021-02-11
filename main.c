#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 2
void tekdenCifte(int c[][M],int d[],int e);
int main()
{
    int d[6]={1,2,3,4,5,6};
    int c[N][M]={0};
    tekdenCifte(c,d,6);
    return 0;
}

void tekdenCifte(int c[][M],int d[],int e)
{
    int i,j,a=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            c[i][j]=d[a];
       a++;
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            printf("%d",c[i][j]);
      printf("\n");
    }
}
