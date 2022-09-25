#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;
        int moneyHave = z-y;
        int totalCost = a+b+c;

        if(totalCost <= moneyHave){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;


    }
    return 0;
}