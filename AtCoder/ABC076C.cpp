// ABC076C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s, t;
  cin >> s >> t;

  // solve
  int pos = -1;
  for (int i=0; i<(int)s.size(); i++) {
    if (s[i] == t[0] || s[i] == '?') {
      bool f = true;
      for (int j=1; j<(int)t.size(); j++) {
        if (i+j >= (int)s.size()) {
          f = false;
          break;
        }
        if (s[i+j] != t[j] && s[i+j] != '?') f = false;
      }
      if (f) pos = i;
    }
  }

  // output
  if (pos == -1) s = "UNRESTORABLE";
  else s.replace(pos, t.size(), t);
  for (auto c : s) {
    if (c == '?') cout << 'a';
    else cout << c;
  }
  cout << endl;
  return 0;

}