//power using recursion
#include <stdio.h>
int power(int a,int b)
{
    if(b==0) return 1;
    int k= a*power(a,b-1);
    return k;
}

int main()
{
    int a,b;
    printf("enter a base ");
    scanf("%d",&a);
    printf("enter the power ");
    scanf("%d",&b);
    int p = power(a,b);

    printf("%d raised to power %d is %d",a,b,p);
}
