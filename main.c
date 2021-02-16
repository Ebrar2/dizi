#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int top=0,d[50000];
    int i;
    d[0]=1;
    d[1]=1;
    for(i=2; ;i++)
    {
        d[i]=d[i-1]+d[i-2];
        if(d[i]%2==0)
            top=top+d[i];
        if(d[i]>4000000)
            break;
    }
    printf("TOP:%d",top);

    return 0;
}
