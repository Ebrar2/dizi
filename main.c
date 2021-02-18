#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void sirala(int d[],int n);
int main()
{
    int n=10,i,d[n];
    printf("Rastgele olusan dizi:");
    for(i=0;i<n;i++)
       { d[i]=1+rand()%100;
         printf("%d,",d[i]);}
    sirala(d,n);
    printf("\nDizinin siralanmis hali:");
    for(i=0;i<n;i++)
        printf("%d,",d[i]);
    return 0;
}
void sirala(int d[],int n)
{
   int gec,i,j;
   for(i=1;i<n;i++)
   {
       for(j=0;j<n-1;j++)
       {
           if(d[j]>d[j+1])
           {
               gec=d[j+1];
               d[j+1]=d[j];
               d[j]=gec;
           }
       }
   }
}
