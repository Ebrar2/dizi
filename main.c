#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pey[5][4],i,j,top=0,enb,enbuyuk=0;
    printf("Kanaldaki peynir miktarlarini giriniz\n");
    for(i=0;i<5;i++)
    {
        printf("%d.Kanal(1.bolumden 4.bolume dogru):",i+1);
        for(j=0;j<4;j++)
            scanf("%d",&pey[i][j]);
      printf("\n");
    }
    for(i=0;i<5;i++)
    {
        top=0;
        for(j=0;j<4;j++)
            top=top+pey[i][j];
      if(top>enbuyuk)
       {
           enb=i;
           enbuyuk=top;
       }
    }
    top=0;
    j=0;
    while(top<=5)
    {
        top=top+pey[enb][j];
        j++;
    }
    printf("Kanal faresi %d.Kanalin %d.Bolgesinde uykuya daldi",enb+1,j);
    return 0;
}
