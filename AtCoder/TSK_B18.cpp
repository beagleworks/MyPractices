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
      if (!dp[i][j]) continue;
      dp[i+1][j] = true;
      if (j+A[i] <= s) dp[i+1][j+A[i]] = true;
    }
  }

  vector<int> ans;
  int now = s;
  for (int i=n-1; i>=0; i--) {
    if (now - A[i] < 0) continue;
    if (!dp[i][now-A[i]]) continue;
    ans.emplace_back(i);
    now -= A[i];
  }

  // output
  reverse(ALL(ans));
  if (!ans.size()) cout << -1 << endl;
  else {
    cout << ans.size() << endl;
    for (auto a : ans) cout << a+1 << endl;
  }
  return 0;

}