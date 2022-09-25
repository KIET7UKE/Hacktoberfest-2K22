#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0; i<strlen(str); i++){
        if(str[i]==str[i+1]){
            cout<<"yes";
        }
    }
    return 0;
}