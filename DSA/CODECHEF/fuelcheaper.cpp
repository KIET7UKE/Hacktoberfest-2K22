#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int pet=0,dsl=0,x,y,days=30,a=0,b=0,k=0;
        cin >> x >> y >> a >> b >> k;
        pet = x;
        dsl = y;
        
        pet = ((x*k)+a);
        dsl = ((y*k)+b);
        if(pet < dsl){
            cout << "PETROL\n";
        }
        else if(dsl < pet){
            cout << "DIESEL\n";
        }
        else{
            cout << "SAME PRICE\n";
        }
    }
    return 0;
}