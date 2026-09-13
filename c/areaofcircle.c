#include<stdio.h>
int main(){

    float radius, area, pi;

    printf("enter the radius : ");
    scanf("%f",radius);

    pi = 3.14;
     
    area = (pi*radius*radius);
    printf("the area of circle :%f",area);
    
    return 0;
}
