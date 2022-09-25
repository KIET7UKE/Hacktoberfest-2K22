#include<stdio.h>
#include<math.h>
int main()
{
    int X;
    float y,rm;
    scanf("%d",&X);
    scanf("%f",&y);
    if(X%5==0 && (y-X)>=0.50)
    {
        rm = y-(X+0.50);
        printf("%.2f",rm);
    }
    else if(X%5!=0)
    {
        printf("%.2f",y);
    }
    else
    {
        printf("%.2f",y);
    }
    return 0;
}