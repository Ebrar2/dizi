#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define n 4
#define m 4
#define MAYINSAYISI 6
void yerlestir(int tahta[][m]);
int main()
{
    int tahta[n][m]={0};
    int i,j;
    yerlestir(tahta);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%3d",tahta[i][j]);
        printf("\n");
    }
    return 0;
}
void yerlestir(int tahta[][m])
{
    int x,y,z;
    srand(time(NULL));
    for(x=0;x<MAYINSAYISI;x++)
    {
        y=rand()%n;
        z=rand()%m;
       if(tahta[y][z]==0)
        tahta[y][z]=1;
       else
        x--;
    }

}
