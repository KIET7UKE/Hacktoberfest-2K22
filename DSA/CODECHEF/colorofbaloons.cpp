#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int count1=0,count2=0;
	    char str[100];
	    cin>>str;
	    for (int i=0;i<strlen(str);i++) {
	        if(str[i]=='a'){
	            count1++;
	        }
	        else
	        count2++;
	    }
	    if(count1<count2)
	    {
	        cout<<count1<<endl;
	    }
	    else
	    cout<<count2<<endl;
	}
	return 0;
}