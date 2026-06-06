// number of pairs equal to sum

#include <stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int sum = 8;
    int count = 0;
    for (int i = 0 ; i < 8 ; i++)
    {
        for(int j= 0 ; j < 8 ; j++)
        {
            if(arr[i]+arr[j]==8 && i!=j)
            {
                count ++ ;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",count);
}