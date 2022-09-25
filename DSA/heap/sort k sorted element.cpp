#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n,k;
	    cin>>n>>k;
	    vector<int> ar(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    priority_queue<int,vector<int>,greater<int>> pq;
	    
	    vector<int> ans;
	    
	    int i=0,j=0;
	    while(j<n)
	    {
	        pq.push(ar[j]);
	        if(pq.size()>k)
	        {
	            int mn=pq.top();
	            ans.push_back(mn);
	            pq.pop();
	        }
	        j++;
	    }
	    while(pq.size()!=0)
	    {
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    for(int i=0;i<ans.size();i++)
	        cout<<ans[i]<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
