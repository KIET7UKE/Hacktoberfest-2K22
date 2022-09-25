#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long n,k;
	    cin>>n>>k;
	    vector<long long int>s(n);
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    
	    sort(s.begin(),s.end(),greater<>());
	    long long int kth=s[k-1];
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(s[i]>=kth){
	            count++;
	        }else break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}