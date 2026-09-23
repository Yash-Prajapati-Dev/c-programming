#include<stdio.h>
int main()
{
    int a;
    printf("enter the number :");
    scanf("%d",&a);

    if(a>99 && a<999){
        printf("the number have three digit");
    }
    else{
        printf("the number don't have three digit");
    }
    return 0;
}

