#include<stdio.h>
int main()
{
    int x=10,y=15,t;

    t=x;
    x=y;
    y=t;

    printf("x=%d,y=%d",x,y);

    return 0;
}
