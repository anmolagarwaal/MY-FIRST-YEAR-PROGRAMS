#include <stdio.h>
int main()
{
    float a,b;
    printf("enter the coordinates ");
    scanf("%f",&a);
    scanf("%f",&b);

    if(a!=0 && b==0)
    {
        printf("point lies on the x axis");
    }
    else if(b!=0 && a==0)
    {
        printf("point lies on the y axis");
    }
    else if(a==0 && b==0)
    {
        printf("point lies on the origin");
    }
    else{
        printf("the point lies on the plane");
    }
    return 0;
}