#include<stdio.h>
int main()
{
     int a, b, c;
    printf("enter the shyam age:");
    scanf("%d",&a);

    printf("enter the mohan age:");
    scanf("%d",&b);

    printf("enter the akash age:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("shyam is greatest");
        }
        else{
            printf("akash is greatest");
        }
    }
        if(b>c){
            printf("mohan is greatest");
        }
        else{
            printf("akash is greatest");
        }
    }    


    return 0;
}