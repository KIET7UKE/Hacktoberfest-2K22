#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,target;
    cin >> n >> target;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
        {
            if(a[i] + a[j] == target)
                return (i+1,j+1);
        }
        
}