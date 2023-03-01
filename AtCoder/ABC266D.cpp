// ABC266D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector S(100010, vector<int>(5, 0));
  for (int i=0; i<n; i++) {
    int t, x, a;
    cin >> t >> x >> a;
    S[t][x] = a;
  }

  // solve
  vector dp(100010, vector<int64_t>(5, -1));
  dp[0][0] = 0;

  for (int i=0; i<100000; i++) {
    for (int j=0; j<5; j++) {
      if (dp[i][j] == -1) continue;
      if (j-1 >= 0) dp[i+1][j-1] = max(dp[i+1][j-1], dp[i][j] + S[i+1][j-1]);
      dp[i+1][j] = max(dp[i+1][j], dp[i][j] + S[i+1][j]);
      if (j+1 <= 4) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + S[i+1][j+1]);
    }
  }

  // output
  cout << *max_element(ALL(dp[100000])) << endl;
  return 0;

}