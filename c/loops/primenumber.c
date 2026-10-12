#include<stdio.h>
int main()
{
    int n;
    printf("enter the integer:");
    scanf("%d",&n);

    int a;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(a==0) printf("the number is prime\n");
    else printf("the number is composite\n");
    
    return 0;
}