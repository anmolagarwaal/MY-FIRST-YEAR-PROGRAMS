// content from 1 array to another and reverse
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
  printf(" %d ",arr[i]);
}

printf("\n");

for(int i = 0 ; i < 5 ; i++)
{
printf(" %d",brr[i]);
}
    return 0;
}