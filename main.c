#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int d[10][10]={0},e,i,j,say=0;
    int sat=0,sat2=0,sat3=0,sat4=0;
    int sut=0,sut2=0,sut3=0,sut4=0;
    while(sat==sat2 || sat==sat3 ||  sat==sat4 || sat2==sat3 || sat3==sat4 || sat2==sat4)
    {
        sat=rand()%10;
        sat2=rand()%10;
        sat3=rand()%10;
        sat4=rand()%10;
    }
    while(sut==sut2 || sut==sut3 || sut2==sut3 || sut3==sut4 || sut2==sut4)
    {
        sut=rand()%10;
        sut2=rand()%10;
        sut3=rand()%10;
        sut4=rand()%10;
    }
    e=rand()%2;
    if(e==0)
    {
       e=rand()%2;
      if(e==0)
        {
        e=-1;
        if(sat+4*e>-1)
          d[sat][sut]=4,d[sat+e][sut]=4,d[sat+2*e][sut]=4,d[sat+3*e][sut]=4;
        else
        {
            e=1;
            d[sat][sut]=4,d[sat+e][sut]=4,d[sat+2*e][sut]=4,d[sat+3*e][sut]=4;
        }
    }}
    else if(e==1)
    {
        if(sat+4*e<10)
          d[sat][sut]=4,d[sat][sut+e]=4,d[sat][sut+2*e]=4,d[sat][sut+3*e]=4;
        else
        {
            e=-1;
            d[sat][sut]=4,d[sat][sut+e]=4,d[sat][sut+2*e]=4,d[sat][sut+3*e]=4;
        }
    }
    say=0;
    while(say!=2)
    {
    e=rand()%2;
     if(e==0)
    {
       e=rand()%2;
      if(e==0)
        {
        e=-1;
        if(sat2+2*e>-1)
          d[sat2][sut2]=3,d[sat2+e][sut2]=3,d[sat2+2*e][sut2]=3;
        else
        {
            e=1;
            d[sat2][sut2]=3,d[sat2+e][sut2]=3,d[sat2+2*e][sut2]=3;
        }
    }}
    else if(e==1)
    {
        if(sat2+2*e<10)
          d[sat2][sut2]=3,d[sat2][sut2+e]=3,d[sat2][sut2+2*e]=3;
        else
        {
            e=-1;
            d[sat2][sut2]=3,d[sat2][sut2+e]=3,d[sat2][sut2+2*e]=3;
        }
    }
    say++;
    int x,y;
    x=sat2;
    y=sut2;
    while(sat2==x || sut2==y)
    {sat2=rand()%10;
    sut2=rand()%10;
    }}
    say=0;
    srand(time(NULL));
     while(say!=3)
    {
    e=rand()%2;
     if(e==0)
    {
       e=rand()%2;
      if(e==0)
        {
        e=-1;
        if(sat3+e>-1)
          d[sat3][sut3]=2,d[sat3+e][sut3]=2;
        else
        {
            e=1;
            d[sat3][sut3]=2,d[sat3+e][sut3]=2;
        }
    }}
    else if(e==1)
    {
        if(sat3+e<10)
          d[sat3][sut3]=2,d[sat3][sut3+e]=2;
        else
        {
            e=-1;
            d[sat3][sut3]=2,d[sat3][sut3+e]=2;
        }
    }
    say++;
     int x,y;
    x=sat3;
    y=sut3;
    while(sat3==x || sut3==y)
    {sat3=rand()%10;
    sut3=rand()%10;
    }
    }
    say=0;
     while(say!=4)
    {
          d[sat4][sut4]=1;
    say++;
    sat4=rand()%10;
    sut4=rand()%10;
     }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
            printf("%d",d[i][j]);
        printf("\n");
    }
       printf("\n\n");
     say=0;
     while(say!=9)
     {
         printf("\nSatir ve sutun yerini giriniz:");
         scanf("%d%d",&i,&j);
         if(d[i][j]==3 || d[i][j]==2 || d[i][j]==1)
         if(d[i][j]==4)
                {printf("\nBuum!Bir tane amiral gemisi gitti");
                 for(i=0;i<10;i++)
                   { for(j=0;j<10;j++)
                       if(d[i][j]==4)
                          d[i][j]=0;
                   }}
         else if(d[i][j]==3)
                 {printf("\nBuum!Bir tane kruvazor gitti");
                 for(i=0;i<10;i++)
                   { for(j=0;j<10;j++)
                       if(d[i][j]==3)
                          d[i][j]=0;
                   }}
         else if(d[i][j]==2)
                {printf("\nBuum!Bir tane muhrip gitti");
                  for(i=0;i<10;i++)
                   { for(j=0;j<10;j++)
                       if(d[i][j]==2)
                          d[i][j]=0;
                   }}
        else
        {   printf("\nBuum!Bir tane denizalti gitti");
        for(i=0;i<10;i++)
                   { for(j=0;j<10;j++)
                       if(d[i][j]==1)
                          d[i][j]=0;
                   }}
        say++;
     }
     printf("\n\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
            printf("%d",d[i][j]);
        printf("\n");
    }
    return 0;
}
