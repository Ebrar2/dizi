#include <stdio.h>
#include <stdlib.h>
int kacTaneVar(int d[],int n,int e[],int n2);
int main()
{
    int d[7]={3,12,11,12,7,3,12};
    int e[3]={3,12,41};

    printf("Sonuc:%d",kacTaneVar(d,7,e,3));
    return 0;
}

int kacTaneVar(int d[],int n,int e[],int n2)
{
    int i,j,gec=0;
    for(i=0;i<n2;i++)
    {
        int kont=0;
         for(j=0;j<n;j++)
        {
        if(e[i]==d[i])
         kont++;}

         if(kont!=0)
            gec++;

    }
    return gec;
}
