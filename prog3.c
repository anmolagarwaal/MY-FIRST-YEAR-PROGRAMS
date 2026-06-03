#include <stdio.h>
int main()
{
printf("enter the value you want to get the absolute value of ");
int n,k;
scanf("%d",&n);
if(n>=0)
{
    printf("the absolute value is %d",n);
}
else 
{
    k = n*-1;
    printf("the absolute value is %d",k);
}
return 0;
}