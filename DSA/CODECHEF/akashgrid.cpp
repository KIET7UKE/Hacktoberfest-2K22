#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int ans=0;
        ans = x+y;
        if(ans%2==0){
            cout << 0;
        }
        else{
            cout << 1;
        }
        cout << endl;
    }
    return 0;
}