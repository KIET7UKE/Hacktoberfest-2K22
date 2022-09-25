// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    
        
        //Method 1
        //TIME complexity O(N^2)
        //Space complexity O(N)
        // int sum=0;
        // for(int i=0;i<n-2;i++)
        // {
            
        // unordered_set<int> s;
        // int curr=X-A[i];
        //     for(int j=i+1;j<n;j++)
        //     {
                
        //         if(s.find((curr-A[j]))!=s.end())
        //         {
        //             return 1;
        //         }
        //         else
        //          s.insert(A[j]);
        //     }   
        // }
        // return 0;
    bool find3Numbers(int a[], int n, int x)
    {
        //MMethod 2
        //Expected Time Complexity: O(n2)
        //Expected Auxiliary Space: O(1)
        // sort(a,a+n);
        // int k=0,j=n-1;
        // for(int i=0;i<n;i++)
        // {
        //         int l=i+1,r=n-1;
        //         while(l<r)
        //         {
        //             if(a[i]+a[l]+a[r]==x)
        //              return 1;
        //              else if(a[i]+a[l]+a[r]>x)
        //              r--;
        //              else if(a[i]+a[l]+a[r]<x)
        //              l++;
        //         }    
        // }
        // return 0;
    
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
