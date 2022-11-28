// ABC079D
// https://atcoder.jp/contests/abc079/tasks/abc079_d

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int h, w;
  cin >> h >> w;
  vector<vector<int>> c(10, vector<int>(10));
  for (auto& v: c) for (auto& vv: v) cin >> vv;

  vector<vector<int>> wall(h, vector<int>(w));
  for (auto& v: wall) for (auto& vv: v) cin >> vv;

  // solve
  vector dp = c;
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      for (int k=0; k<10; k++){
        dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
      }
    }
  }

  int ans = 0;
  for (auto& v: wall) for (auto& vv: v){
    if (vv == -1 || vv == 1) continue;
    else ans += dp[vv][1];
  }

  cout << ans << endl;
  return 0;
  
}