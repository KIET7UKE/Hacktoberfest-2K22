// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
// int nextGap(int gap)
// {
//     if (gap <= 1)
//         return 0;
//     return (gap / 2) + (gap % 2);
// }

//             // int i, j, gap = n + m;
//             // for (gap = nextGap(gap);gap > 0; gap = nextGap(gap))
//             // {
//             //     // comparing elements in the first array.
//             //     for (i = 0; i + gap < n; i++)
//             //         if (arr1[i] > arr1[i + gap])
//             //             swap(arr1[i], arr1[i + gap]);
//             //     // comparing elements in both arrays.
//             //     for (j = gap > n ? gap - n : 0;i < n && j < m;i++, j++)
//             //         if (arr1[i] > arr2[j])
//             //             swap(arr1[i], arr2[j]);
//             //         if (j < m) {
//             //             // comparing elements in the second array.
//             //             for (j = 0; j + gap < m; j++)
//             //                 if (arr2[j] > arr2[j + gap])
//             //                     swap(arr2[j], arr2[j + gap]);
//             //         }
//             // }
        
	void merge(int arr1[], int arr2[], int n, int m) {
	   
	   //method 2
// Expected Time Complexity: O((n+m)*log(n+m))
// Expected Auxiliary Space: O(1)
	    int i=0,k=n-1,j=0;
	    while(i<=k&&j<m)
	    {
	        if(arr1[i]<arr2[j])
	            i++;
	       else
	            swap(arr2[j++],arr1[k--]);
	    }
	    sort(arr1,arr1+n);
	    
	    sort(arr2,arr2+m);
	}
	

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
