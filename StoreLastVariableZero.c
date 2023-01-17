#include<stdio.h>
int main()
{
    int x=2465,y;

    y=x%10;
    x=x-y;

    printf("\n%d",x);

    return 0;
}
