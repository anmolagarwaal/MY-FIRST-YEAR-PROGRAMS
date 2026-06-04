#include <stdio.h>
int main()
{
    //ap 4 7 10 13 ... up to n terms
printf("enter a number ");
    // nth term = a+(n-1)d
    //here (3n+1)
int n;
scanf("%d",&n);
    for(int i = 4 ; i <= 3*n+1 ; i=i+3)
    {
        printf("%d\n",i);
    }
}