#include<stdio.h>
int main()
{
    int x;

    printf("Enter a three digit number :");
    scanf("%d",&x);

    x=(x%10)*100+(x/10);

    printf("%d",x);

    return 0;

}
