#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int asalMi(int i);
int basamakS(int x);
int main()
{
    int i,kont,k=0,z,y,say=0;
    int f[5]={3,7,109,673,0};
    for(i=674;;i++)
    {
        if(asalMi(i)==0)
        {
            for(k=0;k<4;k++)
            {
                kont=basamakS(f[k]);
                z=f[k]+i*pow(10,kont);
                kont=basamakS(i);
                y=f[k]*pow(10,kont)+i;
         //  printf("\ni:%d z:%d y:%d",i,z,y);
        //  printf("\nasalmi(z):%d asalmi(y):%d ,i:%d",asalMi(z),asalMi(y),i);
                if(asalMi(z)==0 && asalMi(y)==0)
                   say++;
        }
       // printf("\nsay:%d i:%d",say,i);
        if(say==4)
        {
        f[4]=i;
        break;
        }
    }
      say=0;
      }
    int top=0;
    for(i=0;i<5;i++)
        top=top+f[i];
    printf("Top:%d f[5]:%d",top,f[4]);
    printf("\nASAlMi:%d,%d,%d,%d",asalMi(8233),asalMi(8237),asalMi(823109),asalMi(823673));
    printf("\nASAlMi:%d,%d,%d,%d",asalMi(3823),asalMi(7823),asalMi(109823),asalMi(673823));

    return 0;
}
int asalMi(int i)
{
       int kont=0,j;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
              kont++;

        }
        if(kont==0)
              return 0;
        else
            return 1;
}
int basamakS(int x)
{
   int kont=0;
    while(x!=0)
    {
        x=x/10;
        kont++;
    }
    return kont;
}
