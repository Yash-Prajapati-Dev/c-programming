#include<stdio.h>
int main()
{
    int x = 4,y,z;
    y = --x;      //phela x ki value subtract and again fill value of x
    z = x--;  //phale x ki value fill and again subtract and fill in x
    printf("%d %d %d",x,y,z);

    return 0;
}