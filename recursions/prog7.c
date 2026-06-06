#include <stdio.h>
int maze(int cr , int cc , int er , int ec)
{
    int rightways = maze (cr,cc+1,er,ec);
     int downways = maze(cr+1 ,cc,er,ec);
 int totalways = rightways + downways;
}
int main()
{
   int n,m;
   printf("enter the rows of the maze %d ",n);
   scanf("%d",&n);
    printf("enter the coloumn of the maze %d ",m);
   scanf("%d",&m);
   int noOfways = maze(1,1,n,m);
   printf("no of ways are %d ",noOfways);
    return 0;
}