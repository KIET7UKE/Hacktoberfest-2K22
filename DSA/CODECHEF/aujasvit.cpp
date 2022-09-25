#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <chrono>
#include <complex>
using namespace std;
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned ll
const ll MOD = 1000000007;
const ll mod = 998244353;
ld PI = 3.1415926535897;
const ll N = 1000010;
void solve();
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
 freopen("input1.txt", "r", stdin);
 freopen("error1.txt", "w", stderr);
 freopen("output1.txt", "w", stdout);
#endif
 ll t; cin >> t;
 while (t--)
 {
  solve();
  cout << "\n";
 }

 cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
 return 0;
}
void solve() {
 ll m, x;
 cin >> m >> x;
 ll store[x + 1];
 store[1] = 1;
 for (int i = 2; i < x + 1; i++)
 {
  ll temp = (m % i);
  if (temp == 0) temp = i;
  store[i] = store[i - 1];
  if (store[i] >= temp)store[i]++;




 }
 for (int i = 1; i <= x; i++) cout << store[i] << " ";
 cout << endl;
}