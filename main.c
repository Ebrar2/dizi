#include <stdio.h>
#include <stdlib.h>

int main()
{
   int d[4][3],i,j,x=0,gec;
   int a[12];
   printf("Dizinin sirasiz hali\n");
   for(i=0;i<4;i++)
   {
       printf("%d.satiri giriniz:",i+1);
       for(j=0;j<3;j++)
         {scanf("%d",&d[i][j]);
           a[x]=d[i][j];
           x++;}
    printf("\n");
   }
   for(i=1;i<12;i++)
   {
       for(j=0;j<11;j++)
         if(a[j]>a[j+1])
       {
           gec=a[j+1];
           a[j+1]=a[j];
           a[j]=gec;
       }
   }
   x=0;
   for(i=0;i<4;i++)
   {
       for(j=0;j<3;j++)
         {d[i][j]=a[x];
         x++;
   }}
   printf("\nDizinin siralanmis hali:\n");
   for(i=0;i<4;i++)
   {
       for(j=0;j<3;j++)
         printf("%3d",d[i][j]);
    printf("\n");
   }
    return 0;
}
