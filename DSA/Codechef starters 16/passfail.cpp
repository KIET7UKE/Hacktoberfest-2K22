#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
	    int N, X, P;
        cin >> N >> X >> P;
        int c =3,n =1,ans=0;
        ans = (X*c) - (N-X)*n;
        if (ans >= P )
        cout << "PASS";
        else
        cout << "FAIL";
        cout << '\n';
    }
    return 0;
}