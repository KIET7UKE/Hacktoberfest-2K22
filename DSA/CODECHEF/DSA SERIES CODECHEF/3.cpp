#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,c,candies=0,finalvalue=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>c;
            candies = candies+c;
        }
        finalvalue = candies%m;
        cout<<finalvalue<<endl;
    }
    return 0;
}