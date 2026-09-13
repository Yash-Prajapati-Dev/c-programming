#include<stdio.h>
int main()
{
    int x, y;

    printf("enter the first number : ");
    scanf("%d",&x);

    printf("enter the second number : ");
    scanf("%d",&y);

    int q;
    q = (x / y);

    int r;
    r = x - (y*q);

    printf("remender is : %d",r);




    return 0;

}