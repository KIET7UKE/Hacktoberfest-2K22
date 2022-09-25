#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int x,y;
        cin >> x >> y;
        if(x % 2==0){
            if(x == 0 && y % 2==0)
                cout << "YES\n";
            else if(x==0 && y%2!=0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
            else
                cout << "NO\n";
    }
}