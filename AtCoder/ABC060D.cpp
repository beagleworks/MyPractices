// ABC060D(ARC073B)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, w;
  cin >> n >> w;
  vector<int> W(n), V(n);
  for (int i=0; i<n; i++) {
    cin >> W[i] >> V[i];
  }

  // solve
  int bw = W[0];
  for (auto &w : W) w -= bw;
  vector dp(n+1, vector(n+1, vector<int>(301, -1)));
  dp[0][0][0] = 0;

  for (int i=0; i<n; i++) {
    for (int j=0; j<=i; j++) {
      for (int k=0; k<=300; k++){
        if (dp[i][j][k] == -1) continue;
        dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k]);
        if (k+W[i] <= 300) dp[i+1][j+1][k+W[i]] = max(dp[i+1][j+1][k+W[i]], dp[i][j][k]+V[i]);
      }
    }
  }

  // output
  int ans = 0;
  for (int j=0; j<=n; j++) {
    for (int k=0; k<=300; k++) {
      if ((long long)bw*j+k > w) continue;
      ans = max(ans, dp[n][j][k]);
    }
  }

  cout << ans << endl;
  return 0;

}