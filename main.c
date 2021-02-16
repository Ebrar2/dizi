#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,top=0;

    for(i=0;i<3;i++)
    {
        printf("%d.sira elemanlari:",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
      printf("\n");
    }
    int say=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {    if(j+i==2)
                top=top+a[i][j];
            else if(i==j)
            {
            if(i==1 && j==1 && say<1)
                {
                    say++;
                    top=top+a[i][j];
                }
            else
                top=top+a[i][j];
    }}}
    printf("\nTop:%d",top);
    return 0;
}
