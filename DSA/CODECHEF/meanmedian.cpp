#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a[n],temp=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
			    if(a[i]>a[j]){
                    temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
	            }
		    }
	    }

        int sum=0,mean =0;
        for(int i=0; i<n; i++){
            sum = sum+a[i];
        }
        mean = sum/n;

        int m;
        if(n%2==0){
            m = n/2;
        }
        else{
            m = (n+1)/2;
        }
        int k;
        for(int i=0;i<n;i++){
            if(a[i] == a[m-1]){
                k = a[i];
            }
        }
        int l = k+(m+1);
        if(k == mean){
            cout << 0;
        }
        else{
            cout<< l;
        }
        
        
    }

    
    return 0;
}