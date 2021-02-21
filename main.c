#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int n;
#define N n
void satirOrtalamaBul(int d[][N],int n,float a[]);
void listele(int d[][N],int n);
int main()
{
   int i,j;
   printf("Kare matrisin boyutunu giriniz:");
   scanf("%d",&n);
   int d[n][n];
   float a[n];
   srand(time(NULL));
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
        d[i][j]=100+rand()%900;
   }
   listele(d,n);
   satirOrtalamaBul(d,n,a);
   printf("\n\n------------------------------\n");
   for(i=0;i<n;i++)
          printf("%.2f,",a[i]);

    return 0;
}
void listele(int d[][N],int n)
{
    int i,j;
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%3d,",d[i][j]);
      printf("\n");
    }
}
void satirOrtalamaBul(int d[][N],int n,float a[])
{
    int i,j;
    float ort,top=0.0;
    for(j=0;j<n;j++)
    {
        top=0.0;
        for(i=0;i<n;i++)
            top=top+d[i][j];
     a[j]=top/n;
    }
}
