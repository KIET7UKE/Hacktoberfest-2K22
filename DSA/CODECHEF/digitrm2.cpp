#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int New =n, rem, ans =0, c =0;
        while(New > 0)
        {
            rem = New % 10;
            New = New/10;
            c++;
            if(rem == d)
            {
                New = New*pow(10,c) + (rem + 1)*pow(10,c-1);
                ans = New-n;
                c =0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}