#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    ll n;
    cin >> n;
    cout <<1<<" ";
    for(ll i=0;i<n;i++){
    ll p=((ll)1<<i);
    cout<<p<<" ";
    }
    cout << "\n";    
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
