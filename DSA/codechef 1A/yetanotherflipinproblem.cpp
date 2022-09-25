#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(k==0)
    {
      cout<<"YES"<<endl;
      cout<<0<<endl;
      return;
    }
    int x=0;
    ll k3=k;
    while((k3>>1)>0)
    {
      x++;
      k3=k3>>1;
    }
    int start=1,finish=k;
    vector<int>ans;
    while(x>=0)
    { 
      int segment_length=(1ll<<x);
      x--;
      if(finish-start+1>=segment_length)
      {  
         ans.push_back(start);
         start+=segment_length;
      }
      else
      { 
        int start1=start;
        start-=(segment_length-(finish-start+1));
        ans.push_back(start);
        finish-=((finish-start1+1));
      }
       if(start>finish&&x>=0)
       {
         cout<<"NO"<<endl;
         return;
       }
    }
     reverse(ans.begin(),ans.end());
    if(start>finish)
    {
      cout<<"YES"<<endl;
      cout<<ans.size()<<endl;
      for(int child:ans)
        cout<<child<<endl;
    }
    else
      cout<<"NO"<<endl;
}  
int main()
{    
    int t;
    cin>>t;
    while(t--)
     {   
         solve();
     }
    return 0;
}