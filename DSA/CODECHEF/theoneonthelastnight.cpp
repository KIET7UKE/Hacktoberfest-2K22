#include<bits/stdc++.h>
using namespace std;

void least(int n)
{
    int smallest = 9;
 
    while (n) {
        int r = n % 10;
        smallest = min(r, smallest);
 
        n = n / 10;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int N,K,first=0,last=0;
        cin >> N >> K;
        while(K--){
        if(N ==1){
            N = N*K;
        }
        else if(K > 1){
            least = least+1;
        }
    }
}}