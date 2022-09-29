#include<bits/stdc++.h>
using namespace std;
int countOccurence(int A[], int n, int key) {
    int lb = lower_bound(A, A+n, key) - A;
    int ub = upper_bound(A, A+n, key) - A;
    if(lb>=0 && lb<n && ub>0 && ub<n) {
        return ub -lb;
    }
    return 0;
}
int main() {
    int A[] = {1,2,3,3,3,3,3,3,4,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    int key = 3;
    cout<<countOccurence(A, n, key)<<endl;
    return 0;
}