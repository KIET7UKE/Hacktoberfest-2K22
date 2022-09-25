#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve()
{
    ll n,m,sum,x,z,y,cnt=0;
    cin>>n>>m;
    x=n-m;
    if(x<=m+1)
    cout<<x;
    else
    {
        y=x/(m+1);
        z=(x)%(m+1);
        ll cnty=(m+1)-z;
        ll cntx=y+1;
        sum=cnty * (y) * (y+1) /2 + z * (y+1) * (y+2) / 2;
        cout<<sum; 
    }
    cout<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       solve();
   }
   return 0;
}