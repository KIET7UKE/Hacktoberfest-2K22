#include<bits/stdc++.h>
using namespace std;
int floor_val(vector<int> &v, int key) {
    int n = v.size();
    int idx = lower_bound(v.begin(), v.end(), key) - v.begin();
    if(idx>=0 && v[idx] == key) {
        return v[idx];
    }
    idx--;
    if(idx>=0) {
        return v[idx];
    }
    return -1;
}
int main() {
    
    return 0;
}