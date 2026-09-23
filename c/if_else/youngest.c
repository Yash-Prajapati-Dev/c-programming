#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter the shyam person age:");
    scanf("%d",&a);

    printf("enter the mohan person age:");
    scanf("%d",&b);

    printf("enter the akash person age:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("shyam is youngest");
    }
    if(b>a && b>c){
        printf("mohan is youngest");
    }
    if(c>a && c>b){
        printf("akash is youngest");
    }
    return 0;
}