#include <stdio.h>
int main()
{
 // reverse of a number

 printf("enter a number ");
 int n;
  scanf("%d",&n);
  int i = 0;
  int ld;

  while(n!=0)
  {
    ld = n%10;
    printf("%d",ld);
    n=n/10;
  }
  return 0;
}