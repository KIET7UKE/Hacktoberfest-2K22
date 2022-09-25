#include<iostream>
#include<vector>
#include<climits>
#include<cassert>
using namespace std;

typedef long long int ll;

ll cost_(int i, int j, vector<ll>&a){
    assert(j>i);
    ll d = j-j+i;

    return d*a[i] - a[j];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<ll> a(n);
        for(ll &i :a) cin >> i;

        vector<int> dp(n,0);
        dp[0] =0;
        dp[1] = cost_(0,1,a);
 
        for(int i=2; i<n; i++){
            dp[i] = INT64_MAX;
            for(int k=1; k<i; i++){
                ll curcost = dp[k]+cost_(k,i,a);
                
                if(dp[i] > curcost){
                    dp[i] = curcost;
                }
            }

            if(dp[i]<0){
                dp[i] =0;
            }
        }

        cout << dp[n-1] << endl;


    }
}