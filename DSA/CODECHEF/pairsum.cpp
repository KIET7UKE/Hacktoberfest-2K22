#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x=0,y=0,z=0;
        cin >> n;
        int A[n];
        for (int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        for (int i=0; i<n; i++)
        {
            x = (A[i] - A[i+1]);
        }
        cout << x;
        
    }
    return 0;
}