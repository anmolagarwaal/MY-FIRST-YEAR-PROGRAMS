// reverse of array

#include <stdio.h>
 int main()
 {
    int arr[5]={17,60,30,50,200};
    
    // rotating array by 3 

    // last 3 digits in front


    for(int i = 2 , k = 4; i <=k; i++,k--)
    {
        int temp = arr[i];
        arr[i]= arr[k];
        arr[k]=temp;
    }
 for(int i = 0 ; i < 5 ; i ++)
  {
   printf(" %d ",arr[i]);
  }
 
 }