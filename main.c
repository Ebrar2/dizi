#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int x,i;
    int basamak=0,bas=0,son=0,gec=0,kont=0,say=0;
    for(i=110;i<100000;i++)
        {
         gec=i;
         bas=i;
         while(gec!=0)
         {
             basamak++;
             x=gec%10;
             gec=gec/10;
         }
         while(kont<basamak/2)
         {
             x=bas%10;
             son=son*10+x;
             bas=bas/10;
             kont++;
         }
         if(basamak%2==0)
         {
             if(bas==son)
              {if(i%109==0)
                say++;
         }}
         else
         {
             if(son==(bas/10))
             {
                 if(i%109==0)
                 say++;
             }
         }
          kont=0;
         basamak=0;
         son=0;
        }
        printf("%d tane",say);
    return 0;
}
