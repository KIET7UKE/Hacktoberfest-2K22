#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
{       int N;
        string A,B;
        cin>>N>>A>>B;
        string changed = "";
        unordered_set<char> s;
        for(int i = 0;i<N;i++){
            if(A[i] != B[i]){
                changed += B[i];
            }
        }        
        for (int i = 0; i < changed.size(); i++) {
        s.insert(changed[i]);
        }
        cout<<s.size()<<endl;   
}
return 0;
}