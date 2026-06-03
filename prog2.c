#include <stdio.h>
int main()

{ int n;
printf("enter the year you want to check if its a leap year or not ");
scanf("%d",&n);
if(n%4==0 && n%100 !=0)
{
 printf("the year is a leap year");
}
else if (n%4==0 && n%100==0 && n%400==0)
{
    printf("the year is a leap year");
}
else{
    printf("the year is not a leap year");
}
return 0;
}