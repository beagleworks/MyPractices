// ABC286D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;

  vector<pair<int, int>> V(n);
  for (auto &[a, b] : V) {
    cin >> a >> b;
  }

  // solve
  vector dp(n+1, vector(x+1, false));
  dp[0][0] = true;

  for (int i=0; i<n; i++) {
    for (int j=0; j<=x; j++) {
      if (!dp[i][j]) continue;
      auto [c, m] = V[i];
      for (int k=0; k<=m; k++) {
        if (j+k*c > x) continue;
        dp[i+1][j+k*c] = true;
      }
    }
  }

  // output
  cout << (dp[n][x] ? "Yes" : "No") << endl;
  return 0;

}