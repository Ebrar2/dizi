#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int asalYolla(int j);
int asalMi(int i);

int main()
{
    int i,top,j,a,kont;
    for(i=36;i<6000;i++)
    {
        kont=0;
      if(i%2!=0 && asalMi(i)==1)
         {
           for(a=1;a<sqrt(i/2);a++)
           {
               for(j=2;j<=i-2;j++)
               {
                   if(asalYolla(j)==j)
                        top=j+2*a*a;

                   if(i==top)
                          {
                              kont=1;
                              break;}
               }
               if(kont==1)
                break;

         }
          if(kont==0)
            {
                printf("\ni:%d",i);
                break;
            }
    }
}

       return 0;
}
int asalMi(int i)
{
    int kont=0;
    for(int x=2;x<=i/2;x++)
    {
        if(i%x==0)
            kont++;
    }
    if(kont==0)
        return 0;
    else
        return 1;
}
int asalYolla(int j)
{
    int i,kont=0;
    for(i=2;i<=j/2;i++)
    {
    if(j%i==0)
            kont++;
    }
    if(kont==0)
        return j;
    if(j==2)
        return j;
    else
        return 0;
}
