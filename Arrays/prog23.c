#include <stdio.h> // finding duplciate element 
int main()
{
    int arr[6]={17,60,30,50,200,60};
    int check = 0;

    for(int i = 0 ; i < 6 ; i++)
    {
        for(int k = 0 ; k < 6 ; k++)
        {
            if(arr[i]=arr[k] && i!=k)
            {
                
                check =1;
            }
        }
    }
 if(check =1)
 {
    printf("duplicate is present ");
 }
else{
    printf("duplicate is not present");
}

}