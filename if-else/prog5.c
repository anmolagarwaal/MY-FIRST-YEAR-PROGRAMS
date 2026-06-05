 #include <stdio.h>
 int main()
 {
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("\nenter second number");
    scanf("%d",&b);
    printf("\nenter third number");
    scanf("%d",&c);

    if(a > b && a > c)
    {
   printf("the greatest is  %d",a);
    }
    
   else if(b > a && b > c)
    {
   printf("the greatest is  %d",b);
    }
    
    else if(c > b && c > a)
    {
   printf("the greatest is  %d",c);
    }
    return 0;
 }