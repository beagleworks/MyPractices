// DP_E
// https://atcoder.jp/contests/dp/tasks/dp_e

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N, W;
  cin >> N >> W;
  vector<int> weight(N), value(N);
  for (int i=0; i<N; i++){
    cin >> weight[i] >> value[i];
  }

  // solve
  // vector dp(N+1, vector<long>(W+1, 0));
  // 重量W以下で価値を最大 -> ある価値での最低重量がW以下になっているかどうか
  vector dp(N+1, vector<long>(100001, LINF));
  dp[0][0] = 0;
  for (int i=0; i<N; i++){
    for (int j=0; j<=100000; j++){
      // 品物を選ぶとき
      if (j-value[i] >= 0){
        dp[i+1][j] = min(dp[i+1][j], dp[i][j-value[i]] + weight[i]);
      }
      // 選ばないとき
      dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
    }
  }

  // output
  int ans = 100000;
  for (int j=0; j<=100000; j++){
    if (dp[N][j] <= W) ans = j;
  }

  cout << ans << endl;
  return 0;
  
}