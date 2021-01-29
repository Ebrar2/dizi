#include <stdio.h>
#include <stdlib.h>
void yuzeTam(int d[],int n);

int main()
{
    int d[10],i;
    printf("Notlari giriniz(20 tane):\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&d[i]);
    }
    printf("\nNotlarin arttirilmis hali\n");
    yuzeTam(d,10);
    for(i=0;i<10;i++)
        printf("%3d,",d[i]);

    return 0;
}

void yuzeTam(int d[],int n)
{
    int i,x,enbuyuk=d[0];

    for(i=0;i<n;i++)
    {
        if(enbuyuk<d[i])
            enbuyuk=d[i];
    }
    x=(100-enbuyuk);
    for(i=0;i<n;i++)
    {
        d[i]=d[i]+d[i]*x/enbuyuk;
    }

}
