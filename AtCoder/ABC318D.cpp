// ABC318D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector D(n, vector<int>(n, 0));
  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
      int d;
      cin >> d;
      D[i][j] = d;
      D[j][i] = d;
    }
  }

  // solve
  vector dp(1 << n, 0l);
  for (int i=0; i<1<<n; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<n; k++) {
        if (!(i & 1 << j) && !(i & 1 << k)) {
          if (j == k) dp[i+(1<<j)] = max(dp[i+(1<<j)], dp[i]);
          else dp[i+(1<<j)+(1<<k)] = max(dp[i+(1<<j)+(1<<k)], dp[i]+D[j][k]);
        }
      }
    }
  }

  // output

  cout << dp[(1 << n) - 1] << endl;
  return 0;

}