#include<bits/stdc++.h>
using namespace std;
int binary_search_helper(int A[], int n, int key, int high, int low) {
    while(high>=low) {
        int mid = low + (high-low)/2;
        if(A[mid] == key) {
            return mid;
        }
        else if(A[mid]>key) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return -1;
}
int binary_search(int A[], int n, int key) {
    return binary_search_helper(A, n, key, n-1,0);
} 
int main() {
    int A[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    int key = 6;
    cout<<binary_search(A, n, key)<<endl;
    return 0;
}