#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,ans=0,sub=6,X1=0,X2=0;
        cin>>x>>y;
        if(x<=6){
            ans = y;
        }
        else if(x>6){
            X1=x/6;
            X2=x%6;
            if(X2 != 0){
                X1=X1+1;
                ans = X1*y;
            }
            else if(X1!=0){
                ans = X1*y;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}