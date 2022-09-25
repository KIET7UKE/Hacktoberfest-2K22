#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n; 
        long long int answer =0;
        if(n==3){
            cout<<10<<endl;
        }
        else if(n>3){
            answer = pow(3,(n-3))*8*(n-2);
            
            answer=answer + answer/4;
            
            cout<<answer<<endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}