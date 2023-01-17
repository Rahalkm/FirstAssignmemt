#include<stdio.h>
int main()
{
    int x=10,y=15;

    y=x+y;
    x=y-x;
    y=y-x;

    printf("x=%d,y=%d",x,y);

    return 0;

}
