// ABC326E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
#include <atcoder/all>
using namespace atcoder;
#define mint modint998244353

int main(){

  // input
  int n;
  cin >> n;

  vector<mint> A(n+1, 0);
  for (int i=1; i<=n; i++) {
    int a; cin >> a;
    A[i] = a;
  }

  // solve
  vector<mint> dp(n+1, 0);
  dp[n] = A[n];

  vector<mint> S(n+1);
  S[n] = A[n];

  for (int i=n-1; i>=0; i--) {
    dp[i] = S[i+1]/n;
    S[i] = S[i+1] + A[i] + dp[i]; 
  }

  cout << dp[0].val() << endl;
  return 0;

}