#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int nt,xt,yt,it,kt=0,cot=1;
        cin>>nt;
        int arr[nt];
        kt=nt;
        arr[nt-1]=nt;
        for(it=1;it<nt;it++){
            if(it%2!=0){
                arr[nt-1-it]=kt-(nt-it);
                kt=arr[nt-1-it];
            }
            else if(it%2==0){
                arr[nt-1-it]=kt+(nt-it);
                kt=arr[nt-1-it];
            }
        }
        for(it=0;it<nt;it++){
            cout<<arr[it]<<" ";
        }
        cout<<endl;

    }
    return 0;
}