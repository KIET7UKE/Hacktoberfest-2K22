#include<bits/stdc++.h>
using namespace std;
int lastIndex(int A[], int n, int key) {
    int high = n-1;
    int low = 0;
    while(high>=low) {
        int mid = low + (high - low)/2;
        if(mid == n-1 || (A[mid] == key && A[mid+1]>key)) {
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