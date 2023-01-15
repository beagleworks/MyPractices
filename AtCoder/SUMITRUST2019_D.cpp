// SUMITRUST2019_D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  vector dp(n+1, vector(4, vector(1000, false)));
  dp[0][0][0] = true;
  for (int i=0; i<n; i++) {
    for (int j=0; j<4; j++) {
      for (int k=0; k<1000; k++) {
        if (dp[i][j][k]) {
          dp[i+1][j][k] = true;
          if (j < 3) dp[i+1][j+1][k*10+s[i]-'0'] = true;
        }
      }
    }
  }

  // output
  int ans = 0;
  for (int i=0; i<1000; i++) {
    if (dp[n][3][i]) ans++;
  }
  cout << ans << endl;
  //VIEW(dp);
  return 0;

}

// 全探索も間に合う