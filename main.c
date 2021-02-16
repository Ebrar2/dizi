#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,top=0,kareTop=0;
    for(i=1;i<=100;i++)
    {
        top=top+i;
        kareTop=kareTop+i*i;
    }
    printf("Fark:%d",top*top-kareTop);
    return 0;
}
