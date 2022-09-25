#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int m,n,t,c = 0;
        cin >> n;
        int x[n];
        for(int i=0; i<n; i++){
            cin >> x[i];
        }
        if (n==1){
        m = 0;
        cout << m << endl;
        }
        else if (n>1){
            for (int i=0; i<n; i++){
                if(x[i]%2!=0){
                    c = c+1;
                }
            }
        }
m = c/2;
}
cout << "1";
return 0;
}