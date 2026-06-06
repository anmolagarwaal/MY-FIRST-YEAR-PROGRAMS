//product

// user input size

#include <stdio.h>
int main()
{
  int n;
   
   printf("enter the size of the array ");
   scanf("%d",&n);
   int arr[n];
   for(int  i = 0 ; i<= n-1 ; i++)
   {
    printf("enter the elements of array at %d position ",i);
    scanf("%d",&arr[i]);
    
   }
 int prod =1;
   for(int i = 0 ; i < n ; i++)
   {
    prod = prod*arr[i];
   }

   printf("%d",prod);

   return 0;
}