#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[5][4],i,j,top,enkE,enk=10000;
    printf("Katmanlarim sertlik miktarlarini giriniz\n");
    for(i=0;i<5;i++)
    {
        printf("%d.katman(1.kuyudan 4.kuyuya dogru):",i+1);
        for(j=0;j<4;j++)
            scanf("%d",&d[i][j]);
    printf("\n");
    }
    for(j=0;j<4;j++)
    {
        top=0;
        for(i=0;i<5;i++)
            top=top+d[i][j];
    if(top<enk)
    {
        enk=top;
        enkE=j;
    }
    }
    top=0,i=0;
    int say=0;
    printf("\nEnke:%d",enkE);
    while(top<=10)
    {
            top=top+d[i][enkE];
            say++;
            i++;
            }
    printf("\nBurgu %d.Kuyunun %d.Katmaninda degistirilir",enkE+1,say);
    return 0;
}
