#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        for(ll i=0;i<n;i++){
            ll val=0;
            if(i>0)
                val=max(val,arr[i]&arr[i-1]);
            if(i<n-1)
                val=max(val,arr[i]&arr[i+1]);
            cout<<val<<" ";
        }
        cout<<endl;
    }
}