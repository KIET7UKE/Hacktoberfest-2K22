#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, ans=0;
    cin>>t;
    while(t--){
        int x;
        cin >> x;
        if(x>0 && x<=1000){
            ans = 100;
        }
        else{
            ans = x/10;
        }
        cout << ans << endl;
    }
    return 0;
}