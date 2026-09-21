#include<stdio.h>
int main()
{

    int a;
    printf("enter the positive integer :");
    scanf("%d",&a);

    if (a%2==0){
        printf("the integer is even :%d",a);
    }

    else{
    printf("the integer is odd :%d",a);
    }

        
    

    return 0;
}