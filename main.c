#include <stdio.h>
#include <stdlib.h>
void eleme(int n,int d[]);

int main()
{
    int n=10,i,d[n];
    printf("Dizinin elemanlarini giriniz:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    eleme(n,d);
    printf("\n------------------------------------------------\n");
    printf("\nDizinin son hali:");
    for(i=0;i<n;i++)
    {
        printf("%3d,",d[i]);
    }
    return 0;
}
void eleme(int n,int d[])
{
    int x,a[n];
    for(x=0;x<n;x++)
        a[x]=d[x];
    for(x=0;x<n;x++)
    {
        for(int y=x+1;y<n;y++)
        {
            if(a[y]==a[x])
              {
                d[y]=-1;
                d[x]=-1;
        }
    }
}}
