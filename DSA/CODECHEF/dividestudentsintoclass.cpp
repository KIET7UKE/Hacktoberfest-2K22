#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,count=0;
        cin >> n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            count++;
        }

        if(count%2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}