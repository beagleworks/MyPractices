// ABC274B
// https://atcoder.jp/contests/abc274/tasks/abc274_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  // solve
  vector ans(w, 0);
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      char c;
      cin >> c;
      if (c == '#') ans[j]++;
    }
  }

  // output
  for (auto a: ans) cout << a << endl;
  return 0;
  
}