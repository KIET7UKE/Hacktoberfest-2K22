#include<stdio.h>
void merge(int arr[], int low, int mid, int hi);
void ms(int arr[], int low, int hi);
void print(int arr[], int n);

int main()
{
    int n, i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    ms(arr,0,n-1);
    print(arr,n);
    return 0;
}

void print(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void ms(int arr[], int low, int hi)
{
    if (low<hi)
    {
        int m=(low+hi)/2;
        ms(arr, low, m);
        ms(arr, m+1, hi);
        merge(arr, low, m, hi);

    }
}

void merge(int arr[], int low, int m, int hi)
{
    int i,j,k,n1=(m-low+1), n2=hi-m;
    int L[n1];
    int R[n2];
    for (i=0;i<n1;i++)
    {
        L[i]=arr[low+i];
    }
    for (j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    
    
    
    
    // print(L,n1);
    // printf("\n*****\n");
    // print(R,n2);
    // printf("\n%d&&&&&&\n",n2);
    
    
    
    i=0;j=0;k=low;
    while(i<n1 &&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    

while(i<n1)
{
    arr[k]=L[i];
    i++;
    k++;
}

while(j<n2)
{
    arr[k]=R[j];
    j++;
    k++;
}
}