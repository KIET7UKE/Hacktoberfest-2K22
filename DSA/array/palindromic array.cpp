// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
bool checkpalindrom(int n)
{
    int nn=n,rev=0;
    while(nn!=0)
    {
        rev=rev*10+nn%10;
        nn/=10;
    }
    if(n==rev)
    return true;
    return false;
}
int PalinArray(int a[], int n)
{  //add code here.
    for(int i=0;i<n;i++)
    {
        if(!checkpalindrom(a[i]))
            return 0;
    }
    return 1;
}
