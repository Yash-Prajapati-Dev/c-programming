#include<stdio.h>
int main()
{
    float x, y;
    printf("enter the x coordinate:");
    scanf("%f",&x);

    printf("enter the y coordinate:");
    scanf("%f",&y);

    if(x==0 && y!=0){
        printf("point lies on y-axis");
    }
    else if(y==0 && x!=0){
        printf("point lies on x-axis");
    }
    else{
        printf("point lies on both axis");
    }
    return 0;

}