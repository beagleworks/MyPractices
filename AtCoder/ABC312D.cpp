// ABC312D

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define mint modint998244353
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  int n = s.size();
  vector dp(n+1, vector<mint>(n+1, 0));
  dp[0][0] = 1;

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (s[i] == '(' || s[i] == '?') dp[i+1][j+1] += dp[i][j];
      if (j == 0 || dp[i][j] == 0) continue;
      if (s[i] == ')' || s[i] == '?') dp[i+1][j-1] += dp[i][j];
    }
  }

  // output
  cout << dp[n][0].val() << endl;
  // for (auto x : dp) {
  //   for (auto y : x) {
  //     cout << y.val() << " ";
  //   }
  //   cout << endl;
  // }
  return 0;

}