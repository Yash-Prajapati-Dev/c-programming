#include<stdio.h>
int main()
{
    int n;
    printf("enter the the number :");
    scanf("%d",&n);
    int product=1;
    int i;

    for( i=1;i<=n;i++){
        product = product*i;
    }

    printf("factorial = %d",product);

    return 0;
}