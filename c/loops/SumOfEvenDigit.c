#include<stdio.h>
int main()
{
    int n,ld;
    printf("enter the numbers:");
    scanf("%d",&n);

    int sum = 0;
    int LD =0;
    while(n!=0){
        LD= n%10;
        if(n%2==0){
        sum = sum +LD;
        }
        n=n/10;
    }
    printf("sum of the digit is : %d",sum);

    return 0;
}