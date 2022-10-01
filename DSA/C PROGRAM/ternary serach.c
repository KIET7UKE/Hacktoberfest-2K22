#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ts(int*,int,int,int);
    void bsort(int*,int);
    int *a,n,se,i,r;
    printf("enter the array size=");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        exit(0);
    }
    printf("enter array elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bsort(a,n);
    printf("the sorted array=");
    for(i=0;i<n;i++)
    {
        printf(" %d  ",a[i]);
    }
    printf("\nenter search elements=");
    scanf("%d",&se);
    r=ts(a,0,n-1,se);
    if(r==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found is at %d index",r);
    }
}
void bsort(int*b,int s)
{
    int i,temp;
    do
    {
        for(i=1;i<s;i++)
        {
            if(b[i]<b[i-1])
            {
                temp=b[i];
                b[i]=b[i-1];
                b[i-1]=temp;
            }
        } 
        s--;
    }while(s>0);
}
int ts(int*b,int l,int h, int se)
{
    int m1,m2;
    if(l<=h)    
    {
        m1=(l+(h-l)/3);
        m2=(m1+(h-l)/3);
        if(b[m1]==se)
            return m1;
        else if(b[m2]==se)
            return m2;
        else if(se<b[m1])
            return ts(b,l,m1-1,se);    
        else if(se>b[m1] && se<b[m2])
            return ts(b,m1+1,m2-1,se);
        else
            return ts(b,m2+1,h,se);
    }
    return -1;
}
