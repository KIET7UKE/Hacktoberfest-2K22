#include<stdio.h>
int main()
{
    int n,i,t,fact=1,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(a=1;a<=n;a++)
        {
            fact = fact*a;
        }
        printf("%d\n",fact);
    }
    return 0;
}