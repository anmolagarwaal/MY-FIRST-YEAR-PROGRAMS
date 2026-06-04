#include <stdio.h>
int main()
{ printf("enter the number you want a table of till 10 ");
    int n,k;
    scanf("%d",&n);

for(int i = 1 ; i <=10 ; i++)
{
  k=n*i;
  printf("\n%d",k);
}
return 0;

}