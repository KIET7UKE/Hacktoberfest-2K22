#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
	    int n, N, X, Y;
	    cin >> n >> X >> Y;
        N = n+1;
        if(N*Y >= X)
        cout << "YES";
        else
        cout << "NO";
        cout << '\n';
    }
    return 0;
}