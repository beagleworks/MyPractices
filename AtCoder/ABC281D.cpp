// ABC281D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, k, d;
  cin >> n >> k >> d;

  vector<int> A(n);
  for (auto& a: A) cin >> a;

  // solve
  vector dp(n+1, vector(k+1, vector(d, -1LL)));
  dp[0][0][0] = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<=k; j++) {
      for (int l=0; l<d; l++) {
        if (j > i) continue;
        if (dp[i][j][l] == -1) continue;
        if (j < k) dp[i+1][j+1][(A[i]%d+l)%d] = max(dp[i][j][l]+A[i], dp[i+1][j+1][(A[i]%d+l)%d]);
        dp[i+1][j][l] = max(dp[i][j][l], dp[i+1][j][l]);
      }
    }
  }

  // output
  cout << dp[n][k][0] << endl;
  return 0;

}



