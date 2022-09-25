#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,ans;
        cin >> n >> k;
        ans = (2*n-k-1)/2;
        cout << 2*ans <<endl;
    }
    return 0;
}