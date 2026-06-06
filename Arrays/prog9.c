//array is call by reference 
#include <stdio.h>
int main()
{
    int arr[10]={3,7,11,14,15,26,37,28,19,10};
    // odd index changes to multiple of 2 
    //even idex increases by 1

    for(int i = 0 ; i < 10 ; i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+1;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        printf(" %d ",arr[i]);
 
    }

    return 0;
}