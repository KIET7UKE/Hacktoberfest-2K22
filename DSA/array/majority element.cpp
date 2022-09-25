// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int ar[], int n)
    {
        // Expected Time Complexity: O(N).
        // Expected Auxiliary Space: O(1).
        int majority=ar[0];
        if(n==1)
        return ar[0];
        int count=1;
        
        for(int i=1;i<n;i++)
        {
            if(majority==ar[i])
            {
                count++;
            }
            else
            {
                count-=1;
                if(count==0)
                {
                    majority=ar[i];
                    count=1;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==majority)
            c++;
        }
        if(c>n/2)
            return majority;
        
            return -1;
        // your code here
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
