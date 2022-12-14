// AGC029A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  int w = 0;
  long long ans = 0LL;

  for (auto c: s) {
    if (c == 'W') w++;
  }

  for (int i=0; i<(int)s.size(); i++) {
    if (i < w && s[i] == 'B') ans -= i;
    else if (i >= w && s[i] == 'W') ans += i;
  }

  // output
  cout << ans << endl;
  return 0;

}