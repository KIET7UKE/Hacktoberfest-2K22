// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    int even=0;
	    long long pro=1,mx=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        pro=arr[i]*pro;
	   
	        mx=max(pro,mx);
	       if(arr[i]==0)
	       {
	            pro=1;
	       }        
	    }
	    pro=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        pro=arr[i]*pro;
	        mx=max(pro,mx);
	       if(arr[i]==0)
	       {
	            pro=1;
	       }        
	    }
    	 
	    return mx;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
