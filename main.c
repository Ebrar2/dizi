#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec=1,bakiye=1000,yatTutar,cekTutar;
    printf("Secenekler:\n");
    printf("\n0-Cikis");
    printf("\n1-Bakiye Miktari");
    printf("\n2-Para Yatir");
    printf("\n3-Para Çek");
    while(sec!=0)
    {
        printf("\nLutfen seciminizi giriniz:");
        scanf("%d",&sec);
        if(sec==1)
            printf("\nBakiyeniz:%d",bakiye);
        else if(sec==2)
        {
            printf("\nYatirilacak para miktarini giriniz");
            scanf("%d",&yatTutar);
            printf("\nYatirma islemi basarili");
            bakiye=bakiye+yatTutar;
            printf("\nSon bakiyeniz:%d",bakiye);
        }
        else if(sec==3)
        {
            printf("\nCekilecek para miktarini giriniz:");
            scanf("%d",&cekTutar);
            printf("\nCekme islemi basarili");
            bakiye=bakiye-cekTutar;
            printf("\nSon bakiyeniz:%d",bakiye);
        }
    }
    return 0;
}
