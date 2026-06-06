#include <stdio.h>

int add(int x, int y)
{
    return x+y;
}

int main()
 { 
    int a,b;
    printf("enter first number");
    scanf("%d",&a);

    printf("enter second number");
    scanf("%d",& b);
   int sum;
   sum = add(a,b);
   printf("sum of two numbers %d",sum);
    return 0;
}