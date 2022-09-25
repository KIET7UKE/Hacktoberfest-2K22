#include<stdio.h>
int main()
{
    int t,i,n,num,rem,tn;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int digit = 4;
        int count=0;
        scanf("%d",&n);
        tn=n;
        while(tn>0)
        {
            rem = tn%10;
            if(rem==digit)
            count++;
            tn = tn/10;
        }
        printf("%d\n",count);
    }
    return 0;
}