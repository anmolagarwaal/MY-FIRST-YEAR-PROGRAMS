//reverse an array using any extra array
#include <stdio.h>
int main()
{
    int arr[5]={17,60,30,50,200};

   int brr[5];

   for(int i = 0 ; i < 5 ; i++)
   {
    brr[4-i]=arr[i];
   }
for(int i = 0 ; i < 5 ; i++)
{
   arr[i]=brr[i] ;
}
for(int i = 0 ; i < 5 ; i++)
{
  printf(" %d ",arr[i]);
}
    return 0;
}