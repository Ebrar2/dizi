#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    char d[8][8];
    int i,j,sut[8],say=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            d[i][j]='-';
    }
    srand(time(NULL));
    while(say<8)
    {
        if(say==0)
            {sut[say]=rand()%8;
            say++;
}
      else
      {
          int kont=0;
          j=rand()%8;
          for(i=0;i<say;i++)
             {
                if(j==sut[i])
                    kont++;}
        if(kont==0)
           {
            sut[say]=j;
            say++;}
      }}
     for(i=0;i<8;i++)
         d[i][sut[i]]='K';
    printf("\n ");
      for(i=0;i<8;i++)
        printf("%d",i);
    printf("\n");
    for(i=0;i<8;i++)
    {
          printf("%d",i);
        for(j=0;j<8;j++)
            printf("%c",d[i][j]);
      printf("\n");
    }

    return 0;
}
