// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here
        //0 1 2  3 4 5
        //1 4 45 6 0 19
        //sum=1+4+45+6=56
		//1 3 4 7 10 10 8 10
		// 5 15
		// 7 6 5 9 1
        int low=0,high=0,sum=0,mn=INT_MAX;
        while(low<=high&&high<n)
        {
            while(sum<=x&&high<n)
            {
                sum+=arr[high++];
            }
            while(sum>x&&low<high)
            {
                mn=min(mn,high-low);
                sum-=arr[low++];
                
            }
            
        }
        return mn;
        
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends
