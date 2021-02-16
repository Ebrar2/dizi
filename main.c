#include <stdio.h>
#include <stdlib.h>
int palindromMu(int a);
int main()
{
    int i,j,kont=101;
    for(i=100;i<1000;i++)
    {
        for(j=100;j<1000;j++)
            if(palindromMu(i*j)==i*j)
                if(i*j>kont)
                    kont=i*j;
    }
    printf("\nEn buyuk palindrom:%d",kont);
    return 0;
}
int palindromMu(int a)
{
    int x,tersi=0;
    while(a!=0)
    {
        x=a%10;
        tersi=tersi*10+x;
        a=a/10;
    }
    return tersi;
}
