#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(0);
int t; cin >> t; while(t--){
    ll n, v;
    cin >> n >> v;
    cout << (ll)((n * (n - 1))/2) << " ";
    if(n - 1 <= v) cout << n - 1 << "\n";
        else{
        ll ans = (ll)(((n - v) * (n - v + 1))/2 + v - 1);
        cout  << ans << "\n";
    }
}
    return 0;
}