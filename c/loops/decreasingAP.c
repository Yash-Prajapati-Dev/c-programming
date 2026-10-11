#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    //100 , 97 , 91 .....

    int a = 1; 
    for(int i=100;a>n;i++)
    {
        printf("%d ",a);
        a = a-3;
    }

    return 0;

}