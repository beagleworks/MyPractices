// Typical90_006

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, k;
  string s;
  cin >> n >> k >> s;

  // solve
  vector dp(n+1, vector<int>(26, INF));
  for (int i=n-1; i>=0; i--) {
    dp[i] = dp[i+1];
    dp[i][s[i] - 'a'] = i;
  }

  string ans = "";
  int d = 0;
  for (int i=0; i<k; i++) {
    for (char c = 'a'; c <= 'z'; c++) {
      int p = dp[d][c-'a'];
      if (p == INF) continue;
      if (n-p >= k-i) {
        ans += c;
        d = p+1;
        break;
      }
    }
  }


  // output
  cout << ans << endl;
  return 0;

}