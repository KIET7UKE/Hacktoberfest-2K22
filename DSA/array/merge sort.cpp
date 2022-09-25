// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         
        
        int i=0,j=0;
    	int n1=m-l+1;
	    int n2=r-m;
	    int L[n1],R[n2];
	    for(i=0;i<n1;i++)
	    {
	        L[i]=arr[l+i];
	    }
	    for(j=0;j<n2;j++)
	    {
	        R[j]=arr[m+1+j];
	    }
	    i=0;j=0;
	    int k=l;
	    while(i<n1&&j<n2)
	    {
	        if(L[i]<R[j])
	        {
	            arr[k++]=L[i++];
	            
	        }
	        else
	        {
	            arr[k++]=R[j++];
	            
	        }
	    }
	    while(i<n1)
	    {
	        arr[k++]=L[i++];
	        
	    }
	    while(j<n2)
	    {
	        arr[k++]=R[j++];
	    }
	        
         
    }
    public:
    void mergeSort(int arr[], int left, int right)
    {
        //code here
        if(left<right)
        {
        
           int mid=left+(right-left)/2;
            mergeSort(arr,left,mid);
            
            mergeSort(arr,mid+1,right);
            merge(arr,left,mid,right);
        }
        
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
