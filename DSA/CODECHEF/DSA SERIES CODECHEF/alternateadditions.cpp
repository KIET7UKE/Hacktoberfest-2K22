#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        if((B-A)%3==2){
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    return 0;
}