#include<stdio.h>
int main()
{
    float x;
    printf("enter the decimal value : ");
    scanf("%f",&x);

    int y;
    y = x;
    
    float z;
    z =( x - y);

    printf("the decimal part is :%f",z);
    


    return 0;

}