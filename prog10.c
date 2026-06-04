#include <stdio.h>
int main()
{
    printf("enter a number ");
 int n;
  scanf("%d",&n);

  // factorial of a number

  int i=1,k;
  int fact=1;
  while(n!=0)
  {
    k=i*n;
    n--;
    fact = fact*k;
    
  }
  printf("%d",fact);
}