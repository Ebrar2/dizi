#include <stdio.h>
#include <stdlib.h>

int main()
{
    char d[6][5];
    int i,j,k=65,a[10],gec,x,b[2];
    for(j=0;j<5;j++)
    {
       for(i=0;i<6;i++)
         {
             if(i==4 && j==4)
                d[i][j]='.';
             else if(i==5 && j==4)
                 d[i][j]='?';
             else
              {
                d[i][j]=k;
                k++;}

    }}
    for(i=0;i<6;i++)
    {
        printf("%d.satir:",i+1);
          for(j=0;j<5;j++)
             printf("%c",d[i][j]);
      printf("\n");
    }
    printf("\nSifreli mesajin sayilarini giriniz:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n--------------------------------------------\n");
      int z=0;
    for(i=0;i<10;i++)
    {
        gec=a[i];
        z=0;
        while(gec!=0)
        {

            x=gec%10;
            gec=gec/10;
            b[z]=x;
            z++;
        }
    printf("%c",d[b[1]+1][b[0]+1]);
    }
    return 0;
}
