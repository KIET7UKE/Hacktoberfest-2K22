#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
    {
	    int n,k;
	    cin >> n >> k;
        string s;
        cin >> s;
        int c =0;
        string an;
        for(int i=0;i<n;i++){
            if(s[i]=='*')
            c++;
            else if(s[i]!='*'){
                c=0;
            }
            if(c==k)
            break;

        }
        if(c==k)
        an="YES";
        else
        an="NO";
        cout << an << endl;
        t--;
        
    }
    return 0;
}