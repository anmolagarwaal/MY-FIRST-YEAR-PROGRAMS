//reverse an array without using any extra array

#include <stdio.h>
int main()
{
    int arr[5]={17,60,30,50,200};

   int i = 0 ; int j = 4;

   while(i<j)
   {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j]=temp;

    i++;
    j--;
   }
for(int i = 0 ; i < 5 ; i++){
printf(" %d ",arr[i]);
}
   
    return 0;
}