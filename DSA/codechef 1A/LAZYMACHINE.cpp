#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define vll         vector<ll>
#define pb          push_back
#define endl        '\n'


signed main(){
    
    int tc; cin >> tc;
    while (tc--)
    {
        
        ll n, k;
        cin>>n>>k;
        if(k==0){
            cout<<"YES"<<endl;
            cout<<0<<endl;
            continue;
        }
        if(k%2==0){
            cout<<"NO"<<endl;;
            continue;
        }
        ll sz=0;
        for(ll i=31;i>=0;i--){
            if(((1<<i)&k)!=0){
                sz=i+1;
                break;
            }
        }
        k=(k+(1<<sz)-1)/2;
        cout<<"YES"<<endl;
        cout<<sz<<endl;
        int ans=1;
        vector<int> a;
        for(int i=sz-2;i>=0;i--){
            if(((1<<i)&k)!=0){
                a.push_back(ans);
                ans+=(1<<i);
            }
            else{
                ans-=(1<<i);
                a.push_back(ans);
            }
        }
        for(int i=sz-2;i>=0;i--)
            cout<<a[i]<<endl;
        cout<<ans<<endl;
        
        
    }

    return 0;
}