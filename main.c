#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=1,j,kont=0;
    for(i=1;i<20;i++)
        x=x*i;
    for(i=x; ;i++)
    {
        kont=0;
     for(j=1;j<20;j++)
          {
              if(i%j==0)
                kont++;
          }
    if(kont==19)
        {  printf("\nAranan:%d",i);
           break;
    }}
    return 0;
}
