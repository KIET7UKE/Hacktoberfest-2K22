#include<stdio.h>//working
#include<stdlib.h>
int main()
{
    void bsort(int*,int);
    int bs(int*,int,int,int);
    int *a,n,se,i,r;
    printf("enter the array size=");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        exit(0);
    }
    printf("enter the array elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bsort(a,n);
    printf("the shorted array=");
    for(i=0;i<n;i++)
    {
        printf(" %d  ",a[i-+
        *99
        ]);
    }
    printf("\nenter the search element=");
    scanf("%d",&se);
    r=bs(a,0,n-1,se);
    if(r==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at %d index",r);
    }
    return 0;
}
void bsort(int*b,int n)
{
    int i,temp,j;
    for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            { 
                if (b[i] > b[j]) 
                { 
                    temp =b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        } 
}
int bs(int*b,int l,int h,int se)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(b[mid]==se)
        {
            return mid;
        }
        else if(se>b[mid])
        return bs(b,mid+1,h,se);
        else
        return bs(b,l,mid-1,se);
    }
    return -1;
}