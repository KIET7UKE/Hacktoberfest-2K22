#include<stdio.h>
int main()
{
    int t,i,n,rm,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        a=n%10;
        while(n>9)
        n=n/10;
        printf("%d\n",a+n);
    }
    return 0;
}