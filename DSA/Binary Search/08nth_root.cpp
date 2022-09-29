#include<bits/stdc++.h>
using namespace std;
double multiply(double num, int n) {
    double ans = 1;
    for(int i=0;i<n;i++) {
        ans *=num;
    }
    return ans;
}

double nthRoot(int n, int m) {
    double low = 1;
    double high = m;
    double limit = 1e-6;
    while((high - low)>limit) {
        double mid = (low+high)/2;
        if(multiply(mid, n)<m) {
            low = mid;
        }
        else {
            high = mid;
        }
    }
    return low;
}

int main(){
    cout<<nthRoot(4, 81)<<endl;
    return 0;
}