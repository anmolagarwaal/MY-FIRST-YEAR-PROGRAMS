// max element in array
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

   int b;
   b=arr[0];
   
   for(int i = 1 ; i < n ; i++)
   {
    if(arr[i]>b) 
    {
        b=arr[i];
        
    }
    else
    {
        b=arr[0];
    }
    
 }
printf("%d",b);
   return 0;
}