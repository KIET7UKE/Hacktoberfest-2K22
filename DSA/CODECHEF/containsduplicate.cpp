#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int count =0;
    for(int i=0; i<n-1; i++){
        if(num[0] == num[i+1])
            count++;
        else
            count +=0;
    }
    
    if(count > 0)
    cout << "true";
    else
    cout << "false";

}