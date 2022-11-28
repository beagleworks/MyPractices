// ABC278E
// https://atcoder.jp/contests/abc278/tasks/abc278_e

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int H, W, N, h, w;
  cin >> H >> W >> N >> h >> w;

  vector field(H, vector<int>(W));
  for (auto& c: field) for (auto& r: c) cin >> r;

  // solve
  vector dp(H, vector(W, vector(N, 0)));
  
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      int target = field[i][j];
      dp[i][j][target-1]++;
      for (int m=0; m<N; m++){
        if (i == 0 && j == 0) continue;

        if (i == 0) dp[i][j][m] += dp[i][j-1][m];
        else if (j == 0) dp[i][j][m] += dp[i-1][j][m];
        else dp[i][j][m] += dp[i-1][j][m] + dp[i][j-1][m] - dp[i-1][j-1][m];
      }
    }
  }

  // output
  for (int i=0; i<=H-h; i++){
    for (int j=0; j<=W-w; j++){
      int ans = 0;
      for (int n=0; n<N; n++){
        if (i == 0 && j == 0){
          if (dp[H-1][W-1][n] - dp[i+h-1][j+w-1][n] >= 1) ans++;
        }
        else if (i == 0){
          if (dp[H-1][W-1][n] - (dp[i+h-1][j+w-1][n] - dp[i+h-1][j-1][n]) >= 1) ans++;
        }
        else if (j == 0){
          if (dp[H-1][W-1][n] - (dp[i+h-1][j+w-1][n] - dp[i-1][j+w-1][n]) >= 1) ans++;
        }
        else {
          if (dp[H-1][W-1][n] - (dp[i+h-1][j+w-1][n] - dp[i-1][j+w-1][n] - dp[i+h-1][j-1][n] + dp[i-1][j-1][n]) >= 1) ans++;
        }
      }
      cout << ans << endl;
    }
  }

  return 0;
  
}