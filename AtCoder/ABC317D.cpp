// ABC317D

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

  vector<int> X(n), Y(n), Z(n);
  int tak = 0, aok = 0;

  for (int i=0; i<n; i++) {
    cin >> X[i] >> Y[i] >> Z[i];
    if (X[i] > Y[i]) tak += Z[i];
    else aok += Z[i];
  }

  // solve
  if (tak > aok) {
    cout << 0 << endl;
    return 0;
  }

  vector dp(n+1, vector<int64_t>(100001, LINF));

  for (int i=0; i<=n; i++) dp[i][0] = 0;

  for (int i=0; i<n; i++) {
    for (int j=0; j<=100000; j++) {
      if (X[i] < Y[i]) dp[i+1][j+Z[i]] = min(dp[i+1][j+Z[i]], dp[i][j] + (Y[i]-X[i])/2+1);
      dp[i+1][j] = min(dp[i][j], dp[i+1][j]);
    }
  }

  // output
  int64_t ans = LINF;
  for (int i=(aok-tak)/2+1; i<=100000; i++) {
    ans = min(ans, dp[n][i]);
  }
  cout << ans << endl;
  // for (int i=0; i<=n; i++) {
  //   for (int j=0; j<64; j++) {
  //     cout << dp[i][j] << " ";
  //   } 
  //   cout << endl;
  // }
  return 0;

}