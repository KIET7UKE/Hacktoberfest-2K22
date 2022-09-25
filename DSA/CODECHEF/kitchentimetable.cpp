#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
	    int n, count =0, sumTime =0;
	    cin>>n;
	    int a[n], b[n], c[n];
	    for(int i=0; i<n; i++)
        {
	      cin>>a[i];
	    }
	    for(int i=0; i<n; i++)
        {
	        cin>>b[i];
        }

        for(int i=0; i<n; i++)
        {
            int t = a[i] - sumTime;
            if(t >= b[i])
            count++;
            sumTime =+ a[i];
        }
        cout << count << endl;
    }
    return 0;
}