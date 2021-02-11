#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define  N 10
int menu();
void diziYaz(int d[],int n);
void doldur(int d[],int n);
void kabarcikSirala(int d[],int n);
void secmeSirala(int d[],int n);
int dogrusalAra(int d[],int n,int aranan);
int ikiliAra(int d[],int n,int aranan);
float ortalama(int d[],int n);
float ortanca(int d[],int n);
int mod(int d[],int n);
int main()
{
    int d[N]={0};
    int secim,aranan;
    do{
    secim=menu();
     switch(secim)
     {
case 0:
    printf("\nProgram bitti");
    break;
case 1:
   diziYaz(d,N);
   break;
case 2:
    doldur(d,N);
    break;
case 3:
    kabarcikSirala(d,N);
    break;
case 4:
    secmeSirala(d,N);
    break;
case 5:
    printf("\nAranani girin:");
    scanf("%d",&aranan);
    if(dogrusalAra(d,N,aranan)==0)
        printf("\nAranan sayi dizide yok");
    else
        printf("\nAranan sayi %d.indis",dogrusalAra(d,N,aranan));
    break;
case 6:
      printf("\nAranani girin:");
      scanf("%d",&aranan);
      if(ikiliAra(d,N,aranan)==-1)
        printf("\nAranan sayi dizide yok");
      else
        printf("\nAranan sayi %d .indis",ikiliAra(d,N,aranan));
     break;
case 7:
    printf("\nOrtalama:%.2f",ortalama(d,N));
    break;
case 8:
    printf("\nOrtanca:%.2f",ortanca(d,N));
    break;
case 9:
    printf("\nMod:%d",mod(d,N));
    break;
default:
    printf("\nHatali giris\a\n");
    }
    }while(secim!=0);
    return 0;
}
int menu()
{
    int secim;
    printf("\n----------------MONU-----------------\n");
    printf("0-Programi kapat\n");
    printf("1-Diziyi yaz\n");
    printf("2-Diziyi rastgele doldur\n");
    printf("3-Diziyi sirala (Bubble sort)\n");
    printf("4-Diziyi sirala (Selection sort)\n");
    printf("5-Dizide ara(Linear search)\n");
    printf("6-Dizide ara(Binary search)\n");
    printf("7-Ortalama(Mean)\n");
    printf("8-Ortanca(Meian)\n");
    printf("9-Mod(Mod)\n");
    printf("-----------------------------------------\n");
    printf("Seciminiz:");
    scanf("%d",&secim);
    return secim;
}
void diziYaz(int d[],int n)
{
    int i;
    printf("\nDizi:\n");
    for(i=0;i<n;i++)
        printf("%3d",d[i]);
}
void doldur(int d[],int n)
{
    int i;
    for(i=0;i<n;i++)
        d[i]=rand()%101;
    printf("\nRatgele:");
    for(i=0;i<n;i++)
        printf("%3d",d[i]);
}
void kabarcikSirala(int d[],int n)
{
    int i,j,gec;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(d[j]>d[j+1])
            {
                gec=d[j+1];
                d[j+1]=d[j];
                d[j]=gec;
            }
        }
    }
    printf("\nDizinin siralanmis(Bubble) hali:\n");
    for(i=0;i<n;i++)
        printf("%3d",d[i]);

}
void secmeSirala(int d[],int n)
{
    int i,j,gec;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(d[i]>d[j])
            {
                gec=d[i];
                d[i]=d[j];
                d[j]=gec;
            }
        }
    }
    printf("\nDizinin siralanmis hali(selection)\n");
    for(i=0;i<n;i++)
        printf("%3d",d[i]);
}
int dogrusalAra(int d[],int n,int aranan)
{
    int i,say=0;
    for(i=0;i<n;i++)
    {
        say++;
        if(aranan==d[i])
            break;
    }
    if(say==0)
        return 0;
    else
        return say;

}
int ikiliAra(int d[],int n,int aranan)
{
    int bas=0;
    int son=n-1;
    int orta;
    kabarcikSirala(d,n);
    while(son>=bas)
    {
        orta=(son+bas)/2;
        if(d[orta]==aranan)
            return orta;
        else if(d[orta]>aranan)
            son=orta-1;
        else
            bas=orta+1;
    }
    return -1;
}
float ortalama(int d[],int n)
{
    int i;
    float top=0.0;
    for(i=0;i<n;i++)
        top=top+d[i];
  return top/n;
}
float ortanca(int d[],int n)
{
    float ort;
    kabarcikSirala(d,n);
    if(n%2==0)
        ort=(float)(d[n/2]+d[n/2-1])/2;
    else
        ort=d[n/2];
    return ort;
}
int mod(int d[],int n)
{
    int i,j,enb=0,say=0,ar=0;
    for(i=0;i<n;i++)
    {
        say=0;
        for(j=i+1;j<n;j++)
        {
            if(d[i]==d[j])
              say++;
        }
    if(enb<say)
    {
        say=enb;
        ar=d[i];
    }
    }
    return ar;
}
