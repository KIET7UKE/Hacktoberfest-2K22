#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,ans;
    printf("enter the number");
    scanf("%d",&a);
    
    i=1;
    while(i<=a)
    {
        ans+=i;
        i++;
        ans=a*a;
    }

    printf("answer =%d",i);
    return 0;
}