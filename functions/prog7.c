#include <stdio.h>
int min(int q,int p)
{
    int k;
    if(q<p)
    {
        q=k;
    }
    else
    {
        p=k;
    }
    return k;
}
int gcd(int x , int y)
{
    int hcf;
  min(x,y); 
  for(int i =1 ; i <= min(x,y) ; i++)
  {
    if(x%i==0 && y%i==0)
    {
        hcf =i;
    }
  }
    return hcf;
}
int main()
{
     int a,b;
    printf("enter first number ");
    scanf("%d",&a);

    printf("enter second number ");
    scanf("%d",& b);
  int hcf = gcd(a,b);
  min(a,b);
 printf("the hcf of %d and %d is %d ",a,b,hcf);
    return 0;
}