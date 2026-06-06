// second largest element of the array
#include <stdio.h>
int main()
{
    int arr[5]={17,60,30,50,200};
    int large;
    int penultimate =arr[0];
    large = arr[0];
    for(int i = 0 ; i < 5 ; i++)
    {
      if(arr[i]> large)
      {
        large = arr[i];
      }
    }
    printf("the largest number is %d",large);

    for(int i = 0; i < 5 ; i++)
    {
        if(arr[i]!= large && penultimate < arr[i])
        {
            penultimate = arr[i];
        }
    }
 printf("\nthe second largest element is %d\n ",penultimate);
    return 0;
}