#include <stdio.h>
int main()
{
    // sum of a given digit

    printf("enter a number ");
 int n;
  scanf("%d",&n);
  
   int sum=0;
   int ld;
while (n!=0)
{
   
   ld= n%10;
   sum = sum +ld;
   n=n/10;
}
printf("the total sums of the digit is %d ",sum);
}