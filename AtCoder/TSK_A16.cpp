#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n+1, 0), B(n+1, 0);
  for (int i=2; i<=n; i++) cin >> A[i];
  for (int i=3; i<=n; i++) cin >> B[i];

  // solve
  vector dp(n+5, INF);
  dp[1] = 0;
  for (int i=1; i<=n; i++) {
    dp[i+1] = min(dp[i+1], dp[i]+A[i+1]);
    dp[i+2] = min(dp[i+2], dp[i]+B[i+2]); 
  }

  // output
  cout << dp[n] << endl;
  return 0;

}