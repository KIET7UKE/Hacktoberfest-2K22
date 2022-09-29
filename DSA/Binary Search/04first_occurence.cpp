#include<bits/stdc++.h>
using namespace std;
int firstIndex(int A[], int n, int key) {
    int high = n-1;
    int low = 0;
    while(high>=low) {
        int mid = low + (high - low)/2;
        if(mid == 0 || (A[mid-1]<key && A[mid] == key)) {
            return mid;
        }
        else if(A[mid]>key) {
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    
    return 0;
}