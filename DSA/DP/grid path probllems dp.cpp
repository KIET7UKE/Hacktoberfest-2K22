#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef  long long int lli;
//typedef long double ld;
typedef unsigned long long ull;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
//order_of_key(x) : number of items less than x
//find_by_order(x) : iterator to x
#define REP(i,n) for(long long i=1;i<=n;i++)
#define mem(dp,a)           memset(dp,a,sizeof dp)
#define rep(i,a,b)          for(ll i=a;i<b;i++)
#define pb(x)               push_back(x)
#define mp(x,y)             make_pair(x,y)
#define fastio              ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F                   first
#define S                   second
#define all(v)              (v).begin(),(v).end()

//const ld pi=3.14159265359;
ll INF=1e18+10;
ll MOD=998244353;
ll mod=1e9+7;
int main()
{
		ll n,m,j,i;
		cin>>n>>m;
		ll dp[n+1][m+1],ar[n+1][m+1];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cin>>ar[i][j];
			}
		}
		for(i=1;i<=m+1;i++)
          dp[n+1][i]=LONG_MAX;
		for(i=1;i<=n+1;i++)
		dp[i][m+1]=LONG_MAX;
		
		dp[n+1][m]=dp[n][m+1]=0;
		for(i=n;i>=1;i--)
		{
			for(j=m;j>=1;j--)
			{
		 	dp[i][j]=ar[i][j]+min(dp[i][j+1],dp[i+1][j]);
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		

}
