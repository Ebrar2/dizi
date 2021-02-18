#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],b[5],i,j,kont=0;
    printf("a dizisinin elemanlarini(5) giriniz:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nb dizisinin elemanlarini(5) giriniz:");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    printf("\nOrtak elemanlar:");
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
            if(a[i]==a[j])
            a[i]=-1;
    }
    for(i=0;i<5;i++)
     {
         kont=0;
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
             kont++;
     }
      if(kont!=0)
          printf("%d,",a[i]);
     }
    return 0;

}
