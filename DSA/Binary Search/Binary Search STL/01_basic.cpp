#include<bits/stdc++.h>
using namespace std;
int main() {
    // Binary search in Arrays
    int A[] = {2,4,8,9,10,15,18,19,20,28,30};
    int n = sizeof(A)/sizeof(A[0]);
    int key = 9;
    bool ans = binary_search(A, A+n, key);
    cout<<ans<<endl;

    // Binary search in vector
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int n = v.size();
    int key = 2;
    bool ans = binary_search(v.begin(), v.end(), key);
    cout<<ans<<endl;


    // Lower bound in Arrays
    int A[] = {2,4,8,9,9,9,9,9,9,10,15,18,19,20,28,30};
    int n = sizeof(A)/sizeof(A[0]);
    int key = 9;
    int idx = lower_bound(A, A+n, key) - A;
    cout<<idx<<endl;

    // Lower bound in vector
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int n = v.size();
    int key = 2;
    int idx = lower_bound(v.begin(), v.end(), key) - v.begin();
    cout<<idx<<endl;


    // upper bound in arrays
    int A[] = {2,4,8,9,9,9,9,9,9,10,15,18,19,20,28,30};
    int n = sizeof(A)/sizeof(A[0]);
    int key = 9;
    int idx = upper_bound(A, A+n, key) - A;
    idx--;
    cout<<idx<<endl;

    // upper bound in vectors
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int n = v.size();
    int key = 2;
    int idx = upper_bound(v.begin(), v.end(), key) - v.begin();
    idx--;
    cout<<idx<<endl;



    return 0;
}