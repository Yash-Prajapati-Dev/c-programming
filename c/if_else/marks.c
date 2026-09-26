#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if(marks>91){
        printf("A grade");
    }
    else if(marks>81){
        printf("B grade");
    }
    else if(marks>71){
        printf("C grade");
    }
    else if(marks>61){
        printf("D grade");
    }
    else{
        printf("E grade");
    }

    return 0;
}