// ABC280E

#include <bits/stdc++.h>
using namespace std;
// ACL
#include <atcoder/all>
using namespace atcoder;
// mint (ACL)
#define mint modint998244353
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, p;
  cin >> n >> p;

  // solve
  vector dp(n+1, mint(0));
  //dp[0] = mint(1);
  mint ca = mint(p) / 100, na = 1 - ca;
  for (int i=1; i<=n; i++) {
    dp[min(n,i+1)] = (1+dp[i-1]) * ca + (1+dp[i]) * na;
  }

  // output
  cout << dp[n].val() << endl;
  // for (auto x : dp) {
  //   cout << x.val() << " ";
  // }
  // cout << endl;
  return 0;

}