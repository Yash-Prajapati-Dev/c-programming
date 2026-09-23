#include<stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("enter the length :");
    scanf("%d",length);

    printf("enetr the breadth :");
    scanf("%d",breadth);

    area = length*breadth;
    perimeter =2*(length + breadth);

    if(area>perimeter){
        printf("the area is greater than perimeter");
    }
    else{
        printf("the area is less than perimeter");
    }

   

    return 0;

}
    