#include <stdio.h>

void swap(int *x,int *y)
{
 int temp;
 temp = *x;
 *x = *y;
 *y = temp;
}

//call by reference
int main()
{
    int a,b;
    a=9;
    b=2;
swap(&a,&b);

printf("the value of a is %d ",a);
printf("the value of b is %d ",b);
return 0;
}