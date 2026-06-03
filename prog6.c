#include <stdio.h>
int main()
{
    int a;
    printf("enter any positive integer ");
    scanf("%d",&a);
    if(a%3==0 || a%5==0)
    {
        if(a%15 !=0)
        {
            printf("number is divisible by 3 or 5 but not by 15 ");
        }
        else{
        printf("the number is divisible by 15 ");
    }
    }
    else{
        printf("the number is not divisible by 5 and 3");
    }
    return 0;
}