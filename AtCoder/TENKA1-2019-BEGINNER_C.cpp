// TENKA1-2019-BEGINNER_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  int ans = 0;

  // search first black
  int memo = -1;
  for (int i=0; i<n; i++) {
    if (s[i] == '#') {
      memo = i;
      break;
    }
  }

  if (memo == -1) {
    cout << ans << endl;
    return 0;
  }

  int w = 0, b = 0;
  for (int i=memo; i<n; i++) {
    if (s[i] == '.') w++;
    else b++;
  }
  ans = min(b, w);

  int ww = 0, bb = 0;
  int cb = 0;
  for (int i=memo; i<n; i++) {
    if (s[i] == '#' && ww == 0) bb++;
    else if (s[i] == '#' && ww > 0) {
      w -= ww;
      cb += bb;
      ans = min(ans, w+cb);
      ww = 0, bb = 1;
    }
    else ww++;
  }

  // final op
  if (ww > 0) {
    cb += bb;
    ans = min(ans, cb);
  }

  // output
  cout << ans << endl;
  return 0;

}