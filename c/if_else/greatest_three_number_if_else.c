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

    if(a>b){
        if(a>c)
        printf("a is greatest");
    }
    else{
        printf("c is greatest");
    }
    return 0;
}