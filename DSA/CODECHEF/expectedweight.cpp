#include<iostream>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;

        ll p=1,q;
        const ll mod = 998244353LL;
        if(n%2==0)
        {
            if(n%4 == 0){
                q=1;

                p=n/4;
                p%=mod;

                p*=(n+1);
                p%=mod;

                p*=(n+1);
                p%=mod;
            } 
            else{
            q=2;

                p=n/2;
                p%=mod;

                p*=(n+1);
                p%=mod;

                p*=(n+1);
                p%=mod;
            }
        } 
        else{
            q=1; 
            p*=(n+1)/2;
            p%=mod;
            p*=(n+1)/2;
            p%=mod;

            p*= n;
            p%=mod;
        }

        ll inv =0;

        if(q==1){
            inv =1;
        }
        else if(q==2){
            inv =499122177;
        }

        ll ans;
        ans = p * inv;
        ans %= mod;

        cout << ans << endl;


    }
    return 0;
}