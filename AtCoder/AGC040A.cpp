// AGC040A

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
  // int n = s.size();
  vector<int> V;
  char pre = 0;
  int cnt = 0;
  for (auto c: s) {
    if (c == pre || pre == 0) cnt++;
    else {
      V.emplace_back(cnt*(61-pre));
      cnt = 1;
    }
    pre = c; 
  }
  V.emplace_back(cnt*(61-pre));

  long long ans = 0;
  auto f = [](int x) -> long long {
    long long ret = 0LL;
    for (int i=0; i<=x; i++) ret += i;
    return ret;
  };

  int prev = 0;
  for (auto v: V) {
    if (v > 0) ans += f(v);
    else if (prev >= abs(v)) ans += f(-v-1);
    else ans += f(-v) - prev;
    prev = v;
  }

  // output
  cout << ans << endl;
  return 0;

}