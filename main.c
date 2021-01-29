#include <stdio.h>
#include <stdlib.h>
int ilkBenzersiz(int d[],int n);
int main()
{
    int d[7]={3,12,1,12,7,3,12};
    printf("Dizinin ilk benzersizi:%d",ilkBenzersiz(d,7));
    return 0;
}
int ilkBenzersiz(int d[],int n)
{
    int i,j,kont=0,ben=d[0];
    for(i=0;i<n;i++)
    {
        kont=0;
        for(j=0;j<n;j++)
         { if(d[i]!=d[j])
          kont++;
    }
    if(kont==n-1)
        return d[i];
    }
    if(kont!=n-1)
        return -1;

}
