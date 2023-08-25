// ABC311E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w, n;
  cin >> h >> w >> n;

  vector Field(h, vector<int>(w, 1));
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    Field[a-1][b-1] = 0;
  }

  // solve
  vector dp(h, vector<int>(w));
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (!Field[i][j]) dp[i][j] = 0;
      else if (i == 0 || j == 0) dp[i][j] = 1;
      else {
        dp[i][j] = min({dp[i-1][j], dp[i-1][j-1], dp[i][j-1]}) + 1;
      }
    }
  }

  // output
  int64_t ans = 0;
  for (auto v : dp) for (auto vv : v) ans += vv;
  cout << ans << endl;
  return 0;

}