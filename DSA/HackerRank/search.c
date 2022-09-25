#include<stdio.h>
int main()
{
    int j,n,a[10000],i,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}