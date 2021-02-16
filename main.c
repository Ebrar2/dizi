#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[6][5]={0},x,y,i=0,j;
    printf("Robotu konumunu giriniz:");
    scanf("%d%d",&x,&y);
    d[x][y]=1;
    printf("\n-----------------------------------------------------\n");
    printf("(1:sag,2:sol,3:asagi,4:yukari");
    printf("\nKomutlarinizi giriniz:");
    do
    {
        scanf("%d",&i);
        if(i==1)
        {
            if(y+1<5)
                {d[x][y+1]=1;
                y++;}
            }
        else if(i==2)
        {
            if(y-1>-1)
            {
            d[x][y-1]=1;
             y--;
            }}
        else if(i==3)
        {
            if(x+1<6)
              {d[x+1][y]=1;
               x++;
        }}
        else if(i==4)
        {
            if(x-1>-1)
            {   d[x-1][y]=1;
                x--;
        }}
    }while(i!=0);
    printf("\n------------------------------------------------------------\n");
    printf("\nRobotu rotasi:\n");
    for(i=0;i<6;i++)
    {
        printf("%d.sat:",i);
         for(j=0;j<5;j++)
            printf("%3d",d[i][j]);
       printf("\n");
    }
    return 0;
}
