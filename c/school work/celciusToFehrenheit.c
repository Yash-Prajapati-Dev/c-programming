#include<stdio.h>
int main()
{
    float cel,feh;
    printf("enter the temperature into celcius");
    scanf("%f",&cel);

    feh = (9*cel)/5+32;

    printf("%f",feh);


    return 0;
}