// Typical90_050

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int n, l;
  cin >> n >> l;

  // solve
  vector<int64_t> dp(n+1, 0);
  dp[0] = 1;

  for (int i=0; i<n; i++) {
    if (i+1 <= n) {
      dp[i+1] += dp[i];
      dp[i+1] %= MOD;
    }
    if (i+l <= n) {
      dp[i+l] += dp[i];
      dp[i+l] %= MOD;
    }
  }

  // output
  cout << dp[n] << endl;
  return 0;

}