//sum of elements

#include <stdio.h>
int main()
{
 
   int arr[5];
   for(int  i = 0 ; i < 5 ; i++)
   {
    printf("enter the elements of array at %d position ",i);
    scanf("%d",&arr[i]);
    
   }
int sum;
   for(int i = 0 ; i < 5;  i++)
   {
    sum = sum + arr[i];
   }

   printf("%d",sum);
}