#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

void dfs(vector<vector<ll>> & graph, vector<ll> & gcd, ll u, ll par){
    for(auto & to:graph[u]){
        if(to == par) continue;
        dfs(graph,gcd,to,u);
        gcd[u] = __gcd(gcd[u],gcd[to]);
    }
}

ll ans=0;

void dfs1(vector<vector<ll>> & graph, vector<ll> & gcd, ll u, ll par, ll exc, vector<ll> & arr){
    ll temp = exc;
    for(auto & to:graph[u]){
        if(to == par) continue;
        temp+=gcd[to];
    }
    ans=max(ans,temp);
    ll transfer = __gcd(arr[u],exc);
    ll n = graph[u].size();
    if(par!=-1){
        n--;
    }
    vector<ll> pref(n+2,transfer),suff(n+2,transfer);
    ll idx=0;
    for(auto & to:graph[u]){
        if(to == par) continue;
        idx++;
        pref[idx]=__gcd(pref[idx],gcd[to]);
        suff[idx]=__gcd(suff[idx],gcd[to]);
    }
    for(ll i=1;i<=n;i++){
        pref[i] = __gcd(pref[i],pref[i-1]);
    }
    for(ll i=n;i>=1;i--){
        suff[i]=__gcd(suff[i],suff[i+1]);
    }
    idx=0;
    for(auto & to:graph[u]){
        if(to == par) continue;
        idx++;
        ll combine = __gcd(pref[idx-1], suff[idx+1]);
        dfs1(graph,gcd,to,u,combine,arr);
    }
}

void solve(){
    ll n;
    cin>>n;
    ans=0;
    vector<vector<ll>> graph(n);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        u--,v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> gcd(arr.begin(),arr.end());
    dfs(graph,gcd,0,-1);
    dfs1(graph,gcd,0,-1,0,arr);
    cout<<ans<<endl;
}

int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}