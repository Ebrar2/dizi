#include <stdio.h>
#include <stdlib.h>
int main()
{
    long int i,j,z,top;
    for(i=150; ;i++)
    {
        for(z=100;z<i;z++)
        {
            for(j=100;j<i;j++)
            {
                top=i+j+z;
                if(top==1000 && j*j+z*z==i*i)
                {
                    printf("\nOzel uclu carp:%ld",i*z*j);
                    break;
                     }
            }
        }
    }
    return 0;
}
