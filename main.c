#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Ne kadarlik gireceksiniz:");
    scanf("%d",&n);
    int d[2*n-2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if((i==0 && j==0) || (i==0 && j==1) || (i==1 && j==0))
          { d[j]=1;
           printf("%6d",d[j]);
        }
        else
        {
          d[j+i]=d[j+i-1]+d[j+i-2];
           printf("%6d",d[j+i]);
        }}
     printf("\n");
      }
    return 0;
}
