#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[5][3],i,j,top,say=0,a[5];
    for(i=0;i<5;i++)
    {
        top=0;
        printf("%d.ogrencinin notlari:",i+1);
         for(j=0;j<3;j++)
            {scanf("%d",&d[i][j]);
              top=top+d[i][j];}
         a[i]=top;
        printf("\n");
    }
    printf("\nKalinan dersler:\n");
    for(i=0;i<5;i++)
    {
        printf("%d.ogrencinin kaldigi ders sayisi:",i+1);
        say=0;
         for(j=0;j<3;j++)
         {
             if(d[i][j]<=40)
               say++;
             else if(d[i][j]>40 && d[i][j]<60)
             {
                 if(a[i]/3<60)
                    say++;
             }
         }
        printf("%d\n",say);
    }


    return 0;
}
