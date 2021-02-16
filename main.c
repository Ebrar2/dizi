#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    char tarla[8][8];
    int i,j,sa,su;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            tarla[i][j]='-';

    }
    int say=0;
    srand(time(NULL));
    while(say<9)
    {
      sa=rand()%8;
      su=rand()%8;
         if(tarla[sa][su]=='-')
        {
            tarla[sa][su]='*';
            say++;
        }

    }
     for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            printf("%c",tarla[i][j]);
      printf("\n");
    }


    return 0;
}
