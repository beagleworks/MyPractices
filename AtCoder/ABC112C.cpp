// ABC112C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, q;
  string s;
  cin >> n >> q >> s;

  // solve
  vector dp(n, 0);
  char pre = s[0];
  for (int i=1; i<n; i++) {
    if (pre == 'A' && s[i] == 'C') dp[i] = dp[i-1] + 1;
    else dp[i] = dp[i-1];

    pre = s[i];
  }

  // output
  for (int i=0; i<q; i++) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    cout << dp[r]-dp[l] << endl;
  }

  return 0;

}