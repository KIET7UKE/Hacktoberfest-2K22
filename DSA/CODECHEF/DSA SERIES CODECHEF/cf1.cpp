#include<bits/stdc++.h>
using namespace std;
int main(){

        int n,num=0;
        cin>>n;
        while(n>0){
        num = n%10;
        n = n/10;
        cout<<num;
        }
        return 0;
}