#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
const ll N=1e5+1;
int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    ll dp[N];
    dp[1]=1;
    dp[2]=0;
    for(ll i=3;i<N;i++){
        dp[i]=min(dp[i-1],dp[i-2])^1;
    }
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        char x='2';
        ll ct=0;
        for(auto i:s){
            if(i!=x){
                x=i;
                ct++;
            }
        }
        if(dp[ct]==1){
            cout<<"SAHID"<<endl;
        }
        else{
            cout<<"RAMADHIR"<<endl;
        }
    }
}