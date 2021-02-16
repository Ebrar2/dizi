#include <stdio.h>
#include <stdlib.h>
int basamakSayi(int i);
int main()
{
    int i,gec,rak,basamak,n,kont1,kont2,sicrayan=0;
    for(i=1;;i++)
    {
        kont1=0;
        kont2=0;
        n=0;
        gec=i;
        basamak=basamakSayi(i);
        int say[basamak];
        while(gec!=0)
        {
            rak=gec%10;
            say[n]=rak;
            gec=gec/10;
            n++;
        }
        for(int j=0;j<n-1;j++)
        {
            if(say[j]<=say[j+1])
                kont1++;
            else if(say[j]>=say[j+1])
                kont2++;
        }
        if(kont1!=n-1 && kont2!=n-1)
               sicrayan++;

        if(sicrayan*100/i==99)
        {
            printf("\nSicrayan:%d",i);
            break;
        }
    }
}
int basamakSayi(int i)
{
    int kont=0;
    while(i!=0)
        {
            kont++;
            i=i/10;
        }
        return kont;
}
