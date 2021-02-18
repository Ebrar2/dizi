#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int say,i=0,k=0;
    printf("Hangi sayinin logaritmasini bulmak istiyorsun:");
    scanf("%d",&say);
    while(say>pow(2,i))
    {
        if(say==pow(2,i))
            k=pow(2,i);
       else if(say>pow(2,i))
        {
            while(say>=pow(2,k))
                k++;
        }
        i++;
    }
    printf("\nLog cevabi:%d",k-1);
    return 0;
}
