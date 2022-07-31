// ABC261D
// https://atcoder.jp/contests/abc261/tasks/abc261_d

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const long long LINF = 1e18;
 
int main(){
 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  // input
  int N, M;
  cin >> N >> M;
 
  vector<long long> X(N);
  for (auto& x: X) cin >> x;
 
  unordered_map<int, long long> Y;
  for (int i=0; i<M; i++){
    int c;
    long long y;
    cin >> c >> y;
    Y[c] = y; 
  }
 
  // solve
  vector dp(N+1, vector(N+1, 0LL));
 
  for (int i=0; i<N; i++){
    for (int j=0; j<=i; j++){
      // 表
      dp[i+1][j+1] = max(dp[i][j]+X[i]+Y[j+1], dp[i+1][j+1]);
      // 裏
      dp[i+1][0] = max(dp[i][j], dp[i+1][0]);
    }
  }
 
  long long ans = 0LL;
  for (auto d: dp[N]) ans = max(d, ans);
  cout << ans << endl;
 
  return 0;
  
}