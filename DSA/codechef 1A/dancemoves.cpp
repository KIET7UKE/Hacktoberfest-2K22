#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int s =0;
        
        if(x <= y)
        {
            cout << (y-x+1) / 2+(y-x) % 2 << "\n";
        }
        else
        {
            cout << (x-y) << "\n";
        }
    }
    return 0;
} 