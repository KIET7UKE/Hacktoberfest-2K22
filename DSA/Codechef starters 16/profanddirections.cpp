#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n, ans =0;
        cin >> n;
        string str;
        cin >> str;  
        for (int i=0; i< n-1; i++)
        {
            if (str[i] == 'L' && str[i+1] == 'L')
            {
                cout << "YES\n";
                goto cvv;
            }
            else if (str[i] =='R' && str[i+1] == 'R')
            {
                cout << "YES\n";
                goto cvv;
            }
        }
        cout << "NO\n";
        cvv:;
    }
    return 0;
}