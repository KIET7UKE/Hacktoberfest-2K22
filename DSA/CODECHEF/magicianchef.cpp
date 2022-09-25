#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 100005
#define MAX 1000006
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,s;
        cin>>n>>x>>s;
        
        int a[N];
        int ans=x;
        while(s--)
        {
            int A,B;
            cin>>A>>B;
            if(A == ans)
            ans=B;
            else if(B == ans)
            ans=A;
        }
        cout<<ans<<endl;
    }
    return 0;
} 