#include<stdio.h>

#define PI 3.1415926f

int main(void)
{
    float r=0.0;
    float d=0.0;
    float zhouchang=0.0;
    float area=0.0;

    scanf("%f",&d);
    
    r=d/2;
    zhouchang=2*PI*r;
    area=PI*r*r;

    printf("\n面积为%.2f",area);
    printf("\n周长为%.2f",zhouchang);

    return 0;
}