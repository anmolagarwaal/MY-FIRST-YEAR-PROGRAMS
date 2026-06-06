//sum of element at even - sum of element at odd
#include <stdio.h>
int main()
{
    int arr[10]={21,7,11,14,15,26,37,28,19,10};
     int even = 0 ;
     int  odd = 0;
 
     for(int i = 0 ; i < 10 ; i++)
     {
        if(i%2==0)
        {
            even = even + arr[i];
        }
        else{
            odd = odd + arr[i];
        }
     }
int diff = even - odd;
     printf("%d",diff);

     return 0;
}