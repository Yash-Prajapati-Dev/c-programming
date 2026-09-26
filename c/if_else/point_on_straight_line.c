#include<stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3, m1, m2;
    printf("enter the coordinates:");
    scanf("%lf %lf %lf %lf %lf %lf",x1 x2 x3 y1 y2 y3);

    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);

    if(m1==m2){
        printf("these points are lies on straight line ");
    }
    else{
        printf("these points are not lies on straight line  ");
    }


return 0;


}