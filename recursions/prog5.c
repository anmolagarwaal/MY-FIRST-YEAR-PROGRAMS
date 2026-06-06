#include <stdio.h>
int stair(int n)
{
    if(n==1) return 1;
    if(n==2)return 2;

    
    int way = stair(n-1)+stair(n-2);
    return way ;

}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    stair(n);
    //stair path problem
  printf("the no of ways are %d ",stair(n));
    return 0;


}