#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[10][10],i,j,enk;
    int x=0,y=0;
    printf("Arazinin parsel derinliklerini giriniz:\n");
    for(i=0;i<10;i++)
    {
        printf("%d.sat:",i);
        for(j=0;j<10;j++)
            scanf("%d",&d[i][j]);
      printf("\n");
    }
    enk=d[0][0]+d[0][1]+d[1][0]+d[1][1];
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(enk>(d[i][j]+d[i][j+1]+d[i+1][j]+d[i+1][j+1]))
            {
                enk=d[i][j]+d[i][j+1]+d[i+1][j]+d[i+1][j+1];
                x=i;
                y=j;
                printf("\nx:%d y:%d",x,y);
            }
        }
    }
    printf("\nSonuc:");
    printf("\nEvin yapilacagi parsellerin satir ve sutun numaralari:\n");
    printf("\n%d-%d,%d-%d,%d-%d,%d-%d",x+1,y,x+2,y+1,x+1,y+2,x+2,y+2);
    return 0;
}
