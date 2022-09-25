#include <bits/stdc++.h>
using namespace std;
 
#define ll int   
#define int long long 

void solve() 
{  
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<1<<'\n';
    cout<<1<<" "<<1<<'\n';
    return;
  }
  if(n==2)
  {  cout<<2<<'\n';
    cout<<3<<" "<<1<<'\n';
    cout<<4<<" "<<1<<'\n';
    return;
  }
  if(n==3)
  {
    cout<<2<<'\n';
     cout<<1<<" "<<n-2<<'\n';
    cout<<2<<" "<<2<<'\n';
   
    return;
  }
  if(n==4)
  {
    cout<<1<<'\n';
    cout<<1<<" "<<4<<'\n';
    return;
  }
  if(n%2==0)
  { 

    cout<<2<<'\n';
    cout<<1<<" "<<n-1<<'\n';
    cout<<(n/2-1)<<" "<<1<<'\n';
  }
  else
  { 
    cout<<3<<'\n';
    cout<<1<<" "<<n-2<<'\n';
    cout<<2<<" "<<1<<'\n';
    cout<<(n+1)/2<<" "<<1<<'\n';
  }

}

     
int32_t main()
{
int T=1;
cin>>T;
while(T--)
{  
 solve(); 
}
 
 }
