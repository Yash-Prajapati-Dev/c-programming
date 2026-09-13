#include<stdio.h>
int main()
{
    int x, y;

    printf("enter the divident : ");
    scanf("%d",&x);

    printf("enter the divisor : ");
    scanf("%d",&y);

    int q;
    q = (x / y);

    int r;
    r = x - (y*q);

    printf("remender is : %d",r);




    return 0;

}