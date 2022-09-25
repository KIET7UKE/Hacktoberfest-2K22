#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	
	
	
		  ll n;
		  	 cin>>n;
			 vector<vector<ll>> v;
		  	 ll sum=0,i,a;
		  	 ll ar[n];
	        vector<pair<ll,ll>> vp;
	        for(i=0;i<n;i++)
	        {
	        	for(ll j=0;j<2;j++)
	        	{
	        	 					cin>>ar[j];
	        							v[i].push_back(ar[j]);
					
				}
	        }
	        for( i=0;i<v.size();i++)
	        {
	            vp.push_back(make_pair(v[i][0]-v[i][1],i));
	        }
	        sort(vp.begin(),vp.end());
	       
	        for( i=0;i<vp.size()/2;i++)
	        {
	            sum=sum+v[vp[i].second][0];
	        }
	        
	        for(i=v.size()/2;i<vp.size();i++)
	        {
	            sum=sum+v[vp[i].second][1];
	        }
	        cout<<sum;

	
	
	
}
