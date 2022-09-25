// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    // Expected Time Complexity: O(N*Log(N))
    // Expected Auxiliary Space: O(1)
        long long mn=LONG_MAX;
        sort(a.begin(),a.end());
        //0 1 2 3 4 5  6 7    
        //1 3 4 7 9 9 12 56
        //1 3 4 7 9
        //diff=9-1=8 
        //3 4 7 9 9
        //diff=9-3=6
        //4 7 9 9 12
        //diff=12-4=8
        //7 9 9 12 56
        //diff=56-7=49
        //therefore min=6
        for(int i=0;i+m-1<n;i++)
        {
            long long diff=a[i+m-1]-a[i];
            mn=min(mn,diff);
        }
        return mn;
        
            
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends
