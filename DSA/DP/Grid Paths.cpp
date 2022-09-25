#include <bits/stdc++.h>
using namespace std;

int main() {
  int mod = 1e9+7;
  int n;
  cin >> n;
  int dp[n][n],i,j;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	dp[i][j]=0;
  }
  //vector<vector<int>> dp(n, vector<int>(n, 0));
  dp[0][0] = 1;
  for (int i = 0; i < n; i++) {
    string row;
    cin >> row;
    for (int j = 0; j < n; j++) {
      if (row[j] == '.') {
	if (i > 0) {
	  (dp[i][j] += dp[i-1][j]) %= mod;
	}
	if (j > 0) {
	  (dp[i][j] += dp[i][j-1]) %= mod;
	}
      } else {
	dp[i][j] = 0;
      }
    }
  }
  cout << dp[n-1][n-1] << endl;
}
