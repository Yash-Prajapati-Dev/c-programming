#include<stdio.h>
int main()
{
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);

    //1-2+3-4+5-6...nth term
    int sum;
    if(n%2==0){
        sum = -n/2;
    }
    else
    {
        sum=(-n/2)+n;
    }
    printf("the sum is:%d",sum);

    return 0;
}