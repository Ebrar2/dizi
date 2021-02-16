#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[4][6],i,j,elde=0,top=0;
    for(i=0;i<4;i++)
    {
        printf("\n%d.satir :",i);
        for(j=0;j<6;j++)
            scanf("%d",&d[i][j]);
      printf("\n");
    }
    printf("\n------------------------------\n");
    int a[6];
    for(i=0;i<4;i++)
    {
        printf("\n%d.satir :",i);
        for(j=0;j<6;j++)
            printf("%3d",d[i][j]);
      printf("\n");
    }
    int x;
    for(i=0;i<6;i++)
    {
        top=0;
       for(j=0;j<4;j++)
           top=top+d[j][5-i];

    x=top%10+elde;
    elde=top/10;
    a[5-i]=x;
    }
    printf("\n      ");
    for(i=0;i<6;i++)
        printf("%3d",a[i]);
    return 0;
}
