#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,j,k,gec,gec2;
   printf("Eleman sayisini giriniz:");
   scanf("%d",&n);
   int a[n][2];
   for(i=0;i<n;i++)
   {
       printf("%d.esyanin kodu ve sayisi:",i+1);
       for(j=0;j<2;j++)
         scanf("%d",&a[i][j]);
   }
     for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
             if(a[j][1]<a[k][1])
              {
                gec=a[k][1];
                a[k][1]=a[j][1];
                a[j][1]=gec;
                gec2=a[j][0];
                a[j][0]=a[k][0];
                a[k][0]=gec2;
            }
          }
    printf("\nEsyalarin sirali hali\n");
    for(j=0;j<n;j++)
    {
        printf("\nKodlar:");
        for(i=0;i<2;i++)
          printf("%3d",a[j][i]);

     printf("\n");

    }

    return 0;
}
