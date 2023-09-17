// ABC320B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  int ans = 0;
  for (int i=0; i<(int)s.size(); i++) {
    for (int j=i+1; j<(int)s.size(); j++) {
      string t = s.substr(i, j-i+1);
      string r = t;
      reverse(ALL(t));
      if (t == r) {
        ans = max(ans, j-i+1);
      }
    }
  }

  // output
  if (!ans) cout << 1 << endl;
  else cout << ans << endl;
  return 0;

}