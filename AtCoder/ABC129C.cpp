// ABC129C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int MOD = 1000000007;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<bool> A(n+1, true);
  for (int i=0; i<m; i++) {
    int a;
    cin >> a;
    A[a] = false;
  }

  // solve
  vector dp(n+1, 0LL);
  dp[0] = 1;

  for (int i=1; i<=n; i++) {
    if (i-1 >= 0 && A[i-1]) dp[i] = (dp[i] + dp[i-1]) % MOD;
    if (i-2 >= 0 && A[i-2]) dp[i] = (dp[i] + dp[i-2]) % MOD;
  }

  // output
  cout << dp[n] << endl;
  return 0;

}