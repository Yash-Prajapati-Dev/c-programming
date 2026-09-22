#include<stdio.h>
int main()
{

int sp, cp;

printf("enter the selling price :");
scanf("%d",&sp);

printf("enter the cost price :");
scanf("%d",&cp);

if(cp>sp){
    printf("loss");
}

if(sp>cp){
    printf("profit");
}

if(sp==cp){
    printf("no profit , no loss");
}

return 0;


}
