#include<stdio.h>
int main()
{
    int i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int sum=0;
        scanf("%ld",&x);
        do
        {
            sum = sum+(x%10);
            x=x/10;
        }
        while(x!=0);
        printf("%ld\n",sum);
    }
    return 0;

}