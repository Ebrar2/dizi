#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[6][6],i,j,say=0;
    for(i=0;i<6;i++)
    {
        printf("%d.sehrin tum sehirlere mesafelerini giriniz:",i+1);
          for(j=0;j<6;j++)
            scanf("%d",&d[i][j]);
       printf("\n");
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(d[i][j]!=d[j][i])
                {printf("%d-",i+1);
                 say++;}
        }
    }


    printf("\n%d adet uzaklik farkli girilmistir",say-say/2);
    return 0;
}
