#include<bits/stdc++.h>
using namespace std;
int number_of_time_rotate(int A[], int n) {
    int high = n-1;
    int low = 0;
    while(high>=low) {
        int mid = low + (high-low)/2;
        int prev = (mid-1+n)%n;
        int next = (mid+1)%n;
        if(A[prev]>A[mid] && A[next]>A[mid]) {
            return mid;
        }
        else if(A[mid]<=A[high]) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<number_of_time_rotate(arr, n)<<endl;
    return 0;
}