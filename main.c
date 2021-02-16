#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,top=0;
    for(i=0;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
            top=top+i;
    }
    printf("Top:%d",top);
    return 0;
}
