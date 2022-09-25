#include<iostream>
#include<cmath>
using namespace std;

typedef long long int ll;

int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >>n;

        int minp;
        for(minp=2; minp<n; minp++){
            if(n%minp ==0){
                break;
            }
        }

        ll x = n+n/minp;

        if(minp==n){
            ll x = n+1;
        }
        cout << x << endl;
    }



    return 0;
}