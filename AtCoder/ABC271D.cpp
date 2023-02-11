// ABC271D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, s;
  cin >> n >> s;
  vector<int> A(n), B(n);
  for (int i=0; i<n; i++) {
    cin >> A[i] >> B[i];
  }

  // solve
  vector dp(n+1, vector<string>(10201, ""));
  dp[0][0] = "x";
  for (int i=1; i<=n; i++) {
    for (int j=0; j<=s; j++) {
      if ((int)dp[i-1][j].size() == i) {
        dp[i][j+A[i-1]] = dp[i-1][j] + "H";
        dp[i][j+B[i-1]] = dp[i-1][j] + "T";
      }
    }
  }

  // output
  string ans = dp[n][s];
  cout << ((int)ans.size() > 0 ? "Yes" : "No") << endl;
  if ((int)ans.size() > 0) {
    ans = ans.substr(1);
    cout << ans << endl;
  }
  // for (int u=0; u<=n; u++) for (int i=0; i<=s; i++) cout << u << " " << i << " : " << dp[u][i] << endl;
  return 0;

}