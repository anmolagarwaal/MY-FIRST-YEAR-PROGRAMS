// printing address of arrays
#include <stdio.h>
int main()
{
 
   int arr[5];
   for(int  i = 0 ; i < 5 ; i++)
   {
    printf("enter the elements of array at %d position ",i);
    scanf("%d",&arr[i]);
    
   }


   for(int i = 0 ; i < 5 ; i++)
   {
    printf("%p\n",&arr[i]);
   }
}