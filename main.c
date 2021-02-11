#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j;
    printf("Dizinin Elemanlari\n");
    for(i=0;i<3;i++)
    {
        printf("\na dizisinin %d.satiri:",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n-------------------------------------------------\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
          printf("%3d",a[i][j]);
      printf("\n");
    }
    return 0;
}
