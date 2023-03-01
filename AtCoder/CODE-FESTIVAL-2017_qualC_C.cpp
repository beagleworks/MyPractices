// CODE-FESTIVAL-2017_qualC_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve

  // 操作せずにわかるもの
  string ss = s;
  reverse(ALL((ss)));
  if (ss == s) {
    cout << 0 << endl;
    return 0;
  }

  if (!count(ALL(s), 'x')) {
    cout << -1 << endl;
    return 0;
  }

  // xを取り除いたものが回文になっていれば良い
  string t = "";
  for (auto c : s) {
    if (c != 'x') t += c;
  }

  string u = t;
  reverse(ALL(u));
  if (u != t) {
    cout << -1 << endl;
    return 0;
  }

  int n = s.size();
  int ans = 0;
  int i = 0, j = 0;
  while (i + j + 2 <= n) {
    if (i < n && j < n && s[i] == ss[j]) {
      i++;
      j++;
    }
    else if (s[i] == 'x') {
      ans++;
      i++;
    }
    // ss[j] == xのとき
    else {
      ans++;
      j++;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}
