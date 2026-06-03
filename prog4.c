#include <stdio.h>
int main()
{
    int sp, cp ,a,b;
    printf("enter the cost price of the product ");
    scanf("%d",&cp);
    printf("enter the selling price of the product ");
    scanf("%d",&sp); 

    if(sp>cp)
    {
        a=sp-cp;
        printf("seller has made a profit");
        printf("\nprofit of %d",a);
    }
    else if(cp>sp)
    {
        b=cp-sp;
        printf("seller has made a loss");
        printf("\nloss of %d",b);
    }
    else
    {
        printf("no profit no loss");
    }
        return 0;
        }