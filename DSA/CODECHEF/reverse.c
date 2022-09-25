#include<stdio.h>
int main()
{
    int rem,reverse =0,t,n,i;
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
        scanf("%d",&n);
        while(n!=0)
        {
            rem = n%10;
            reverse = reverse*10+rem;
            n/= 10;
        }
        printf("%d\n",reverse);
    }

    return 0;
}