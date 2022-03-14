// DP_C
// https://atcoder.jp/contests/dp/tasks/dp_c

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;

  vector<vector<int>> H(N, vector<int>(3));
  for (int i=0; i<N; i++){
    for (int j=0; j<3; j++){
      cin >> H[i][j];
    }
  }

  // solve
  vector<vector<int>> dp(N, vector<int>(3));
  for (int i=0; i<N; i++){
    for (int j=0; j<3; j++){
      if (i == 0) dp[i][j] = H[i][j];
      else dp[i][j] = max(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]) + H[i][j];
    }
  }

  // output
  cout << max({dp[N-1][0], dp[N-1][1], dp[N-1][2]}) << '\n';
  return 0;
  
}