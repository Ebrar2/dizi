#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[10],i,say=1,j,gec,gec2;
    int a[10];
    printf("Dizinin elemanlarini giriniz:\n");
    for(i=0;i<10;i++)
        scanf("%d",&d[i]);
    for(i=0;i<10;i++)
    {
       say=1;
       for(j=0;j<10;j++)
       {
           if(j!=i)
           {
           if(d[i]==d[j])
              say++;
           }
       }
       a[i]=say;
    }
    int b[10];
    for(i=0;i<10;i++)
        {
        printf("%3d",a[i]);
        b[i]=i;
        }
      for(i=0;i<10;i++)
    {
       for(j=0;j<9;j++)
       {
           if(a[j+1]<a[j])
           {
            gec=a[j];
            a[j]=a[j+1];
            a[j+1]=gec;
            gec2=b[j+1];
            b[j+1]=b[j];
            b[j]=gec2;
           }
    }}
    printf("\nDizinin siralanmis hali:\n");
    for(i=0;i<10;i++)
        printf("%3d",d[b[i]]);
    return 0;
}
