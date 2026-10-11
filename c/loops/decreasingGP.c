#include<stdio.h>
int main()
{
    float n;
    printf("enter the number:");
    scanf("%f",&n);

    //100, 50, 25, ....

    float a = 100; 
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a = a/2;
        
    }

    return 0;

}