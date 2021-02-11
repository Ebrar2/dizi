#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int x,tahmin;
    srand(time(NULL));
    x=1+rand()%100;
    printf("Bilgisayr 1-100 arasi bir sayi tutmusur");
    printf("\nSiz tahminlerinizi girerek bilgisayarin yonlendirmesiyle sayiyi bulabilecekmisiniz?\n");
    do
    {
        printf("\nTahmininizi giriniz:");
        scanf("%d",&tahmin);
        if(tahmin==x)
        {
            printf("\nDogru tahmin");
            break;
        }
        else if(tahmin>x)
            printf("\nAsagi Asagi!");
        else
            printf("\nYukari Yukari!");
    }
    while(tahmin!=x);
    return 0;
}
