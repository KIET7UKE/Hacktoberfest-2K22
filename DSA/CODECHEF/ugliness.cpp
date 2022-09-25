#include <bits/stdc++.h> 
#define int long long  
  
using namespace std;  
  
void solve(){  
   
    int n, k; cin>>n>>k;  
    std::vector<int> v;  
  
    for(int i = 0;i<n;i++){  
        int x; cin>>x;  
        if(i == 0) v.push_back(x);  
        else if(x != v.back()) v.push_back(x);  
    }  
    
    n = v.size();  
  
    int totalUgliness = 0;  
    for(int i = 0;i<n - 1;i++){  
        if(v[i] != v[i + 1]) totalUgliness++;  
    }  
      
    vector<int>ans(k + 1, totalUgliness);  
    for(int i = 0;i<n;i++){  
        if(i + 1 < n){  
            ans[v[i]]--;  
        }  
        if(i - 1 >= 0){  
            ans[v[i]]--;  
        }  
        if(i - 1 >= 0 && i + 1 < n && v[i + 1] != v[i - 1]) ans[v[i]]++;  
    }  
  
    for(int i = 1;i<=k;i++) cout<<ans[i]<<" ";  
    cout<<"\n";  
  
}  
  
int32_t main(){  
  
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
  
    int t;   
    cin>>t;  
    while(t--){  
        solve();  
    }        
  
}