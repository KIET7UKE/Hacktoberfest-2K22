#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("YOU ARE ELIGIBLE TO VOTE!");
    }
    else
    {
        printf("YOU ARE NOT ELIGIBLE TO VOTE!");
    }
    return 0;
}