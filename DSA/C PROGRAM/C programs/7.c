#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THREE NUMBERS");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A IS GREATER");
    }
    else if(b>a && b>c)
    {
        printf("B IS GREATER");
    }
    else if(c>a && c>b)
    {
        printf("C IS GREATER");
    }
    return 0;
}