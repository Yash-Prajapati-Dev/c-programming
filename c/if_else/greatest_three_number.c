#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter the first number:");
    scanf("%d",&a);

    printf("enter the second number:");
    scanf("%d",&b);

    printf("enter the third number:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("a is greater than b and c");
    }
    if(b>a && b>c){
        printf("b is greater than a and c");
    }
    if(c>a && c>b){
        printf("c is greater than a and b");
    }

    return 0;
}