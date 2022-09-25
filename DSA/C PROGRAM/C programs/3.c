#include<stdio.h>
int main()
{
    int no;
    printf("enter a number:");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("EVEN NUMBER");
    }
    else
    {
        printf("ODD NUMBER");
    }
    return 0;

}