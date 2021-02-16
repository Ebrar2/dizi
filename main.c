#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   unsigned long int i,top=17,x,kont=0;
   for(i=11;i<2000000;i+=2)
   {
        for(x=2;x<=i/2;x++)
  {
      if(i%x==0)
       {
        kont++;
        break;}
  }
   if(kont==0)
        top=top+i;
   kont=0;
  if(i>1000000)
     printf("top:%ld",top);
   }

    return 0;
}
