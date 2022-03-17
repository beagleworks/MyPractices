// ABC240C
// https://atcoder.jp/contests/abc240/tasks/abc240_c

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N, X;
  cin >> N >> X;
  vector<int> A(N+1), B(N+1);
  A[0] = 0;
  B[0] = 0;
  for (int i=1; i<=N; i++){
    cin >> A[i] >> B[i];
  }

  // solve
  //vector<vector<bool>> dp(N,)
  vector<vector<char>> dp(N+1, vector<char>(X+1, false));
  dp[0][0] = true;

  for (int i=0; i<N; i++){
    for (int j=0; j<=X; j++){
      if (!dp[i][j]) continue;
      if (j+A[i+1] <= X) dp[i+1][j+A[i+1]] = true;
      if (j+B[i+1] <= X) dp[i+1][j+B[i+1]] = true; 
    }
  }

  // output
  if (dp[N][X]) cout << "Yes" << '\n';
  else cout << "No" << '\n';
  return 0;
  
}