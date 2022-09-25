#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, valA=0,valB=0;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        valA = (a/10)*100;
        valB = (b/20)*100;
        if(valA == valB){
            cout<<"ANY"<<endl;
        }
        else if(valA > valB){
            cout<<"FIRST"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }
    }
    return 0;
}