#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8][8],x,i,j,y,kont=0;
    printf("Atin konumunu giriniz(Once satir sonra sutun):");
    scanf("%d%d",&x,&y);
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(x==i && y==j)
                a[i][j]='A';
            else
                a[i][j]='-';
        }
    }
    int sat[4]={x+1,x+2,x-1,x-2};
    int sut[4]={y+1,y+2,y-1,y-2};
    while(kont<9)
    {
       for(i=0;i<4;i++)
        {
            if(i%2==0)
        {
            for(j=1;j<4;j+=2)
                if((sat[j]>-1 && sat[j]<8) &&(sut[j]>-1 && sut[j]<8))
            {

                 a[sat[i]][sut[j]]='*';
                 kont++;
        }}
        else
          {
            for(j=0;j<4;j+=2)
                if((sat[j]>0 && sat[j]<8) &&(sut[j]>0 && sut[j]<8))
            {
                        a[sat[i]][sut[j]]='*';
                kont++;
        }
    }}}
    for(i=0;i<8;i++)
{
        for(j=0;j<8;j++)
            printf("%c",a[i][j]);

    printf("\n");
    }
    return 0;
}
