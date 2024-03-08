// ABC300C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector<string> C(h);
  for (auto &c : C) cin >> c;

  // solve
  vector<int> ans(105, 0);
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (C[i][j] == '#') {
        int sz = 0;
        for (int u=0; 1; u++) {
          if (i+u >= h || j+u >= w) {
            sz = u;
            break;
          }
          if (C[i+u][j+u] == '.') {
            sz = u;
            break;
          }
          else C[i+u][j+u] = '.';
        }
        sz = (sz-1)/2;
        ans[sz]++;
        for (int k=0; k<sz; k++) {
          C[i+sz*2-k][j+k] = '.';
        }
      }
    }
  }

  // output
  for (int i=1; i<=min(h,w); i++) cout << ans[i] << " ";
  cout << endl;
  return 0;

}