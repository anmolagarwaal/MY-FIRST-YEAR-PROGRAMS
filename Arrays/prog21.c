#include <stdio.h>
int main()
{
    int arr[5]={17,60,30,50,200};
    // using flag and compairing
    int count = 0;

    int x = 200;
int i;
    for( i= 0 ; i < 5 ; i++)
    {
        if(arr[i]==x)
        {
           count =1;
           break;
        }
        
    }
    if(count ==1)
    {
        printf("%d is present in the array at index %d",x,i);
    }
    else{

        printf("%d is not present in the array",x);
    }

  
    return 0;
}