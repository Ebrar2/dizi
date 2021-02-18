#include <stdio.h>
#include <stdlib.h>
float fahrCev(float x);
float canCev(float y);
int main()
{
    float f,c;
    printf("%.2f",fahrCev(0));
    printf("\n%.2f",canCev(0));
    return 0;
}
float fahrCev(float x)
{
    float fah;
    fah=(x*180/100)+32;
    return fah;
}
float canCev(float y)
{
    float can;
    can=((y-32)/180)*100;
    return can;
}
