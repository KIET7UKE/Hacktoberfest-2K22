#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

    vector<int> b(2*n);
    for(int &i : b) cin>>i;

    if(n==1){
        if(b[0]==b[1]){
            cout << b[0] << endl;
        }
        else{
            cout << -1 << endl;
        }
        continue;
    }

    map<int, int> freq;

    for(int i: b){
        freq[i]++;
    }

    vector<int> uniqs;

    for(auto pii : freq){
        uniqs.push_back(pii.first);
    }
    sort(uniqs.begin(), uniqs.end());

    bool ans =true;
    if(uniqs.size() != n){
        ans = false;
    }
    int mid;
    if(n%2==0){
        mid = n/2 -1;
    }
    else{
        mid = n/2;
    }

    if(ans && freq[uniqs[mid]]!=3){
        ans = false;
    }
    if(ans && freq[uniqs[n-1]]!=1){
        ans = false;
    }

    for(int i=0; i<n-1 && ans; i++){
        if(i!=mid && freq[uniqs[i]]!=2){
            ans = false;
        }
    }
    if(ans){
        for(int i : uniqs){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }



    }

    return 0;
}