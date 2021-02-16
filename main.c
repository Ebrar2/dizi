#include <stdio.h>
#include <stdlib.h>
int asalMi(int i);
int main()
{
    int i,kont;
    for(i=3;i<600851475143/2;i++)
    {
        if(asalMi(i)==0)
        {
            if(600851475143%i==0)
             {
                kont=i;
               printf("\nkont:%d",kont);}

        }}

    printf("\nAranan:%d",kont);
    return 0;
}
int asalMi(int i)
{
    int kont=0,x;
    for(x=2;x<=i/2;x++)
    {
        if(i%x==0)
            kont++;
    }
    if(kont==0)
        return 0;
    else
        return 1;
}
