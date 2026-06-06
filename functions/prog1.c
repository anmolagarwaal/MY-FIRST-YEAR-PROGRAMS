#include <stdio.h>
void england() //6
{
    printf("you are in england\n"); //7
    return;
}
void australia()  //4
{
    printf("you are in australia\n");
    england();//5
    return;
}
void india() //2
{
    printf("you are in india\n");
    australia(); //3
    return;
}
int main()
{
    india(); //1
    return 0;
}