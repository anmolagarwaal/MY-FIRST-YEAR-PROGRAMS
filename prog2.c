
#include <stdio.h>
int main()
{
    //even numbers

    printf("enter the number till when you want to print the even number ");
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        if (i%2==0)
        {
            printf("\n %d",i);
        }
    }
}