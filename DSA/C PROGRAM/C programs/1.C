#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two numbers to swap");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping numbers is %d %d",a,b);
    return 0;

}