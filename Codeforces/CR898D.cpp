#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int t;
  cin >> t;

  // solve
  for (int i=0; i<t; i++) {
    int n, k;
    string s;
    cin >> n >> k >> s;

    vector ans(n+1, 0);
    for (int j=0; j<n; j++) {
      if (s[j] == 'W') ans[j+1] = ans[j];
      else {
        for (int u=0; u<k; u++) {
          if (j+u >= n) break;
          s[j+u] = 'W';
        }
        ans[j+1] = ans[j] + 1;
      }
    }

    cout << ans[n] << '\n';

  }

  return 0;

}