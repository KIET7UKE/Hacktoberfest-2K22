
#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        pair<int,int>
     priority_queue< pair<int,int>,vector< pair<int,int>>,greater< pair<int,int>>> pq;
          
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<k;j++)
            {
                pq.push(arr[i][j]);
            }
        }
        vector<int> idx(k,0);
        vector<int> ans;
        while(!pq.empty())
        {
        	auto x=pq.top();
        	pq.pop();
        	ans.push_back(x.first);
        	if(idx[x.second]+1<arr[x.second].size())
        	{
        		pq.push(a[x.second][idx[x.second]+1],x.second);
			}
			idx[x.second]+=1;
		}
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(N, vector<int> (N, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends
