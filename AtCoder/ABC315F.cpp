// ABC315F

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

  vector<pair<int, int>> CP(n);
  for (int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    CP[i] = {x, y};
  }

  // solve
  vector dp(n, vector<double>(30, INF));
  dp[0][0] = 0;
  for (int i=1; i<n; i++) {
    for (int j=0; j<30; j++) {
      for (int k=1; j-k+1>=0; k++) {
        if (i-k < 0) break; 
        dp[i][j] = min(dp[i][j], dp[i-k][j-k+1]+hypot((CP[i].first-CP[i-k].first), (CP[i].second-CP[i-k].second)));
      }
      
    }
  }

  // output
  double ans = dp[n-1][0];
  for (int i=1; i<31; i++) {
    ans = min(ans, dp[n-1][i]+(1<<(i-1)));
  }

  printf("%.10f\n", ans);
  // for (int i=0; i<n; i++) {
  //   for (int j=0; j<30; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  return 0;

}