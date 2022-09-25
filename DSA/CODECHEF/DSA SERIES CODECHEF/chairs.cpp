#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,ans=0;
        cin>>x>>y;
        if(x>y){
            ans = x-y;
        }
        else if(x<y){
            ans = x-x;
        }
        else{
            ans = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}