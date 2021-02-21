#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int zart,j=0,say=0,say2=0,say3=0,x=0;
    int zart2;
    float oran;
    srand(time(NULL));
    while(x<100000)
    {
        j=0;
        zart=2+rand()%11;
        if(zart==7 || zart==11)
            j=1;
        else
        {
            int a=-1;
            say=0;
            zart2=11;
            while(zart2!=zart)
               {
                   zart2=2+rand()%11;
                   say++;
                   if(zart2==7)
                       a=say;
               }
        if(a==-1)
            j=1;
        else
            j=0;

    }
    x++;
    if(j==1)
        say2++;
    else if(j==0)
         say3++;
    }
    oran=(float)say2/(say2+say3);
    printf("\n100 000 kez oynama sonucu kazanma olasiligi:%.2f",oran);
    return 0;
}
