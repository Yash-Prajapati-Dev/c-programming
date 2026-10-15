#include<stdio.h>
#include<math.h>
int main()
{

float principal, rate, time, Ci;
printf("enter the principal : ");
scanf("%f",&principal);

printf("enter the rate : ");
scanf("%f",&rate);

printf("enter the time : ");
scanf("%f",&time);

Ci = principal*(pow(1+rate/100,time))-principal;

printf("your compound interest is: %.2f",Ci);


return 0;
}