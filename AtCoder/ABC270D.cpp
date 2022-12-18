// ABC270

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, k;
  cin >> n >> k;
  vector<int> A(k);
  for (auto &a : A) cin >> a;

  // solve
  vector<int> dp(n+1, 0);
  for (int i=1; i<=n; i++) {
    for (auto a : A) {
      if (i-a < 0) break;
      dp[i] = max(dp[i], i-dp[i-a]);
    }
  }

  // output
  cout << dp[n] << endl;
  return 0;

}