#include<bits/stdc++.h>
#define ll unsigned long long
#define mod 1000000007
using namespace std;

int dp[1000001];
int digit(int n){
    int m=0;
    while(n!=0){
        m=max(m,n%10);
        n/=10;
    }
    return m;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,p,sum=0;
    cin>>n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-digit(i)]+1;
    }
    cout<<dp[n];
    return 0;
}

