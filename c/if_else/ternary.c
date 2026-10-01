#include<stdio.h>
int main()
{
    int a;
    
    printf("enter the number:");
    scanf("%d",&a);

    //ternary operator
    //exp1 ? exp2 : exp3

    a%2==0 ? printf("even"):printf("odd");

    return 0;
}