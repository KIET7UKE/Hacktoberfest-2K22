#include<bits/stdc++.h>
using namespace std;
int binary_search_asc(int A[], int n, int key, int high, int low) {
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

int binary_search_desc(int A[], int n, int key, int low, int high) {
    while(high>=low) {
        int mid = low + (high-low)/2;
        if(A[mid] == key) {
            return mid;
        }
        else if(A[mid]>key) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}

int binary_search_order_not_know(int A[], int n, int key, int high, int low) {
    if(A[0]>A[n-1]) {
        return binary_search_desc(A, n, key, low, high);
    }
    return binary_search_asc(A, n, key, high, low);
}

int main(){
    
    return 0;
}