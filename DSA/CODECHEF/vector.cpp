#include<bits/stdc++.h>
using namespace std;
#include<vector>
 
int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;

    cout<<v.size()<<endl;

    cout<<v.at(2)<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.pop_back();
    for(int i:v){
        cout <<i<<endl;
    }

v.clear();
for(int i:v){
        cout <<i<<endl;
    }
    cout <<v.size();



}