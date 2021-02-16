#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5
int diziYaz(int d[][M]);
int main()
{
   int d[N][M],i,j;
   printf("Dizinin elemanlarini giriniz:\n");
   for(i=0;i<N;i++)
   {
       printf("%d.satiri girin:",i+1);
       for(j=0;j<M;j++)
         scanf("%d",&d[i][j]);
     printf("\n");
   }
   printf("\nEnkucuk elemani:%d",diziYaz(d));
    return 0;
}
int diziYaz(int d[][M])
{
    int i,j,enk=d[1][4];
    printf("\nSag alt ucgen elemaanlari:");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if((j+i)>=5)
             {
                printf("%3d",d[i][j]);
                if(enk>d[i][j])
                    enk=d[i][j];
             }
        }
    }
       return enk;
}
