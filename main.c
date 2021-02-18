#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,a=0;
    for(i=1;i<10;i++)
    {
        a=a+pow(i,i);
        printf("\nSon basamakdaki sayi:%d",a%10);
    }

    return 0;
}
