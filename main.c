#include <stdio.h>
#include <stdlib.h>
int kombinasyon(int n,int j);
int fakt(int n);
int main()
{
   int d[200],d2[200],i,j,k,e=0,a=0;
   for(i=0;i<10;i++)
     d2[i]=i+1;
    for(k=0;k<13;k++)
        printf("  ");
    printf("1");
    printf("\n");
   for(i=0;i<10;i++)
   {
       a=0;
       for(k=i;k<10;k++)
          printf("  ");
       for(j=0;j<=d2[e];j++)
       {
           printf("%5d",kombinasyon(d2[e],a));
           a++;
       }
           e++;
       printf("\n");
   }
    return 0;
}
int kombinasyon(int n,int j)
{
    int kom;
    kom=fakt(n)/(fakt(n-j)*fakt(j));
        return kom;
}
int fakt(int n)
{   int sonuc=1;
    if(n==0 || n==1)
        return 1;
    else
      {while(n!=1)
      {
        sonuc=sonuc*n;
        n--;
      }}
    return sonuc;
  }
