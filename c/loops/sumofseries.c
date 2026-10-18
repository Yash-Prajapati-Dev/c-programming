#include<stdio.h>
int main()
{
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);

    //1-2+3-4+5-6...nth term
    if(n%2==0){
        n=-n/2;
    }
    else
    {
        n=(-n/2)+n;
    }
    printf("the sum is:%d",n);

    return 0;
}