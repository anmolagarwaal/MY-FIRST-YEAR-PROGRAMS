#include <stdio.h>
int main()
{
    int n;
    printf("enter a number you want to check if its even or odd ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number is even");

    }
    else
    {
        printf("the number is odd");
    }

    return 0;
}