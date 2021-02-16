#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,elde=0,elde2=0,top=0,top2=0;
    int d[3];

    for(i=0;i<3;i++)
    {
        printf("a dizisinin %d.satiri:",i);
         for(j=0;j<3;j++)
           scanf("%d",&a[i][j]);
      printf("\n");
    }
    for(i=0;i<3;i++)
    {
        top=0;
        top2=0;
        for(j=0;j<3;j++)
        {
            printf("%2d",a[i][j]);
            top=a[i][j]+top;
            if(j+i==2)
                top2=top2+a[i][j];

        }
        top=top+elde;
        printf("%2d",top%10);
        elde=elde/10;
        top2=top2+elde2;
        d[2-i]=top%10;
        elde2=elde2/10;
    printf("\n");
    }
    printf("\n---------------------------------------\n");
    for(i=0;i<3;i++)
        printf("%2d",d[i]);
    return 0;
}
