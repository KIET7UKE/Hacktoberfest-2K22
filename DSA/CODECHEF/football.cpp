#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	     int n;
	     cin>>n;
	     int a[n], b[n], c[n];
	     for(int i=0; i<n; i++){
	          cin>>a[i];
	     }
	     for(int i=0; i<n; i++){
	          cin>>b[i];
	     }
	     for(int i=0; i<n; i++){
	          c[i]=a[i]*20-b[i]*10;
	     }
	     sort(c,c+n);
	     if(c[n-1]>0)
	     cout<<c[n-1]<<endl;
	     else
	     cout<<"0"<<endl;
	}
	return 0;
}