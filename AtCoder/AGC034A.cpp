// AGC034A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, b, c, d;
  string s;
  cin >> n >> a >> b >> c >> d >> s;
  a--, b--, c--, d--;

  // solve
  vector<int> dp(n, -1);
  for (int i=0; i<n; i++) {
    if (s[i] == '.') dp[i] = i;
  }

  for (int i=n-1; i-2>=0; i--) {
    if (s[i] == '#') continue;
    if (s[i-1] == '.') dp[i-1] = max(dp[i], dp[i-1]);
    if (s[i-2] == '.') dp[i-2] = max(dp[i], dp[i-2]);
  }

  bool ans = (dp[a] >= c && dp[b] >= d);
  if (ans && c > d) {
    bool f = false;
    for (int i=b; i<=d; i++) {
      if (s[i-1] == s[i] && s[i] == s[i+1] && s[i] == '.') f = true;
    }
    if (!f) ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}