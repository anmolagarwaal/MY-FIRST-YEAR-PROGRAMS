// reversing array by passing it through fucn

#include <stdio.h>

int rot(int arr[],int a , int b)
{
   for(int i = a, j = b; i <=j; i++,j--)
   {
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
}
int main()
{
    int arr[5]={17,60,30,50,200};
    int n = 3; // rotating by 3 step
    rot(arr,2,4);
for(int i= 0 ; i < 5 ; i++)
{
printf(" %d ",arr[i]);
}
    
    return 0;
}