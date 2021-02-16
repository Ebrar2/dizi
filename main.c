#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[150000],x,i,say=0;
    int top=0;
    d[0]=1;
    for(i=500;i<15000;i++)
    {
        top=0;
        for(x=1;x<=i+1;x++)
            top=top+x;
      d[i]=top;
    }
    for(i=500;i<14000;i++)
    {
           say=0;
      for(x=1;x<=d[i]/2;x++)
          if(d[i]%x==0)
            say++;
    if(say>=500)
        {printf("\nAranan(d[%d])sayi:%d sayac:%d",i,d[i],say);
           break;
    }}
    return 0;
}
