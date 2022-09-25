#include <bits/stdc++.h>
#define ll long long
using namespace std;
string removeDuplicates(const string &s){
    string art;
    unordered_set<char> exists;

    for(const auto&el:s)
        if(exists.insert(el).second) art+=el;

    return art;
}
int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL);
  ll nt;
  cin >> nt;
  for(ll j=1; j<=nt; j++){
      string it, p;
      cin >> it >> p;
      sort(it.begin(), it.end());
      sort(p.begin(), p.end());
      ll d = p.size(), c = it.size();
      if(removeDuplicates(p) == removeDuplicates(it) && d >= c){
        cout << "Case #" << j << ": " << d - c << endl;
      }else{
        cout << "Case #" << j << ": "<< "IMPOSSIBLE" << endl;
      }
    }
    return 0;
}