// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    
    long long  finalmerge(long long  arr[],long long temp[],long long  l,long long mid,long long r){
        long long  i=l,j=mid+1,k=l;
        long long int total=0;  // Here
        while(i<=mid and j<=r){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }else{
                total+=mid-i+1;
                temp[k++]=arr[j++];
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=r){
            temp[k++]=arr[j++];
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i];
        }
        return total;
    }
    
     long long  merge(long long arr[],long long temp[],long long l,long long r)
     {  
        long long  mid=(l+r)/2;
        long long int  inv=0;
        if(l<r){
            inv+=merge(arr,temp,l,mid);
            inv+=merge(arr,temp,mid+1,r);
            inv+=finalmerge(arr,temp,l,mid,r);
        }
        return inv;
        
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        return merge(arr,temp,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
