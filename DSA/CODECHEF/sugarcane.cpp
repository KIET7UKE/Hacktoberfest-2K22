#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,gc=50,ans=0,sc=0,sh=0,sr=0,fa=0;
        cin>>n;
        ans = (n*gc);
        sc = (ans*20)/100;
        sh = (ans*20)/100;
        sr = (ans*30)/100;
        fa = ans-(sc+sh+sr);
        cout<<fa<<endl;
    }
    return 0;
}