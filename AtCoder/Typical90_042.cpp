// Typical90_042

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int k;
  cin >> k;

  // solve
  vector<int64_t> dp(k+1, 0);
  if (k % 9 == 0) {
    dp[0] = 1;
    for (int i=1; i<=k; i++) {
      for (int j=1; j<=9; j++) {
        if (i-j >= 0) {
          dp[i] += dp[i-j];
          dp[i] %= MOD;
        }
      }
    }
  }

  // output
  cout << dp[k] << endl;
  return 0;

}