#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, s;
  cin >> n >> s;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  vector dp(n+1, vector<bool>(s+1, false));
  dp[0][0] = true;

  for (int i=0; i<n; i++) {
    for (int j=0; j<=s; j++) {
      if (dp[i][j]) {
        dp[i+1][j] = true;
        if (j+A[i] <= s) dp[i+1][j+A[i]] = true; 
      }
    }
  }

  // output
  cout << (dp[n][s] ? "Yes" : "No") << endl;
  return 0;

}