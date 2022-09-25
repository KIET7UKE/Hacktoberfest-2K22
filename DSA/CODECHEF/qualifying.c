#include<stdio.h>
int main()
{
    int t,i,n,a,b,s,j;
    int arr[1000],found,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[j]);
        }
    }
    found =0;
    for(k=0;k<a;k++)
    {
        if(arr[j] == b)
        {
            found =1;
            break;
        }
    }
    if(found == 1)
    {
        printf("%d",b);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}