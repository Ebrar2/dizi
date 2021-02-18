#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=100,j,x,kont=0,carp=1;
    while(i>=100)
    {
        printf("\nSayiyi giriniz:");
        scanf("%d",&i);
        if(i>100)
            printf("Yanlis!Lutfen 2 basamakli sayi giriniz:");
    }
    while(i>9)
    {
        kont++;
        j=i;
        carp=1;
        while(j!=0)
        {
            x=j%10;
            carp=carp*x;
            j=j/10;
        }
        i=carp;
    }
    printf("\nCarpim direnci:%d",kont);
    return 0;
}
