#include <stdio.h>
int main()
{
     int a,b;
    printf("enter first number ");
    scanf("%d",&a);

    printf("enter second number ");
    scanf("%d",& b);
     
    int temp;
 
    temp = a;
     a=b;
     b=temp;

     printf("the value of a is %d ",a);
     printf("the value of a is %d ",b);
}