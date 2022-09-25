// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nums[], int N)
    {
      //Your code here
      int i=0;
        if(N==0)
            return 0;
        if(N==1)
            return 1;
        map<int,int> mp;
        int c=0,mx=0;
        
        for(int i=0;i<N;i++)
        {
            mp[nums[i]]++;
        }
        auto it=mp.begin();
        
        auto it1=mp.begin();
        it1++;
        while(it1!=mp.end())
        {
            if(it1->first-1==it->first)
            {
                c++;
            }
            else
            {
                mx=max(c+1,mx);
                c=0;
            }
            it1++;
            it++;
                
        }
        mx=max(c+1,mx);
       return mx;         
        
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
