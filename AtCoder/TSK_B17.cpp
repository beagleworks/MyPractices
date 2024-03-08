#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> H(n+1, 0);
  for (int i=1; i<=n; i++) {
    cin >> H[i];
  }

  // solve
  vector<int> dp(n+1, INF);
  dp[1] = 0;

  for (int i=1; i<n; i++) {
    dp[i+1] = min(dp[i+1], dp[i]+abs(H[i+1]-H[i]));
    if (i+2 <= n) dp[i+2] = min(dp[i+2], dp[i]+abs(H[i+2]-H[i]));
  }

  // output
  int now = n;
  vector<int> ans = {n};
  while (now > 1) {
    if (dp[now] - abs(H[now] - H[now-1])  == dp[now-1]) {
      ans.emplace_back(--now);
    }
    else {
      now -= 2;
      ans.emplace_back(now);
    }
  }

  reverse(ALL(ans));
  cout << ans.size() << endl;
  for (auto x : ans) cout << x << endl;
  return 0;

}