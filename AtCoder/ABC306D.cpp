// ABC306D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> X(n), Y(n);
  for (int i=0; i<n; i++) {
    cin >> X[i] >> Y[i];
  }

  // solve
  vector dp(n+1, vector<long>(2, 0));
  for (int i=1; i<=n; i++) {
    if (X[i-1] == 0) {
      dp[i][0] = max({dp[i][0], dp[i-1][0]+Y[i-1], dp[i-1][1]+Y[i-1], dp[i-1][0]});
      dp[i][1] = max(dp[i][1], dp[i-1][1]);
    }
    else {
      dp[i][0] = max(dp[i][0], dp[i-1][0]);
      dp[i][1] = max({dp[i][1], dp[i-1][0]+Y[i-1], dp[i-1][1], dp[i-1][1]});
    }
  }
  

  // output
  cout << max(dp[n][0], dp[n][1]) << endl;
  return 0;

}