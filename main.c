#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,x,j,kont=0,say1=0,top;
    printf("\nIlginc sayilar:");
    for(i=1000;i<pow(10,4);i++)
       {
        j=i;
        while(kont!=2)
        {
            x=j%10;
            say1=say1+x*pow(10,kont);
            j=j/10;
            kont++;
        }
        top=say1+j;
        if(pow(top,2)==i)
            printf("\n%d,",i);
     kont=0;
     say1=0;
       }
    return 0;
}
