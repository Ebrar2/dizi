#include <stdio.h>
#include <stdlib.h>
int asalMi(int j);
int main()
{
    int d[10002],i,j;
    d[0]=2;
    i=1;
    for(j=3;;j++)
    {
       if(asalMi(j)==0)
                { d[i]=j;
                i++;}
        if(i==10002)
        {
              printf("Ara:%d",d[10002]);
              break;
        }
    }

    return 0;
}
int asalMi(int j)
{
    int kont=0,i;
    for(i=2;i<j/2;i++)
    {
        if(j%i==0)
            kont++;
    }
    if(kont==0)
        return 0;
    else
        return 1;
}
