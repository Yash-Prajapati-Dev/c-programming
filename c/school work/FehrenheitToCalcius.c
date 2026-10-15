#include<stdio.h>
int main()
{
    float cel,feh;
    printf("enter the temperature into fehrenheit:");
    scanf("%f",&feh);

    cel = (feh-32)*5/9;

    printf("%f",cel);


    return 0;
}