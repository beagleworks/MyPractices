// Typical90_012

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w, q;
  cin >> h >> w >> q;

  // solve
  vector Red(h*w, false);
  dsu uf(h*w);

  constexpr int dr[4] = {-1, 0, 1, 0};
  constexpr int dc[4] = {0, 1, 0, -1};
  for (int i=0; i<q; i++) {
    int t, r, c;
    cin >> t >> r >> c;
    r--, c--;
    int st = r*w+c;
    if (t == 1) {
      Red[st] = true;
      for (int j=0; j<4; j++) {
        int R = r+dr[j], C = c+dc[j];
        if (R < 0 || C < 0 || R >= h || C >= w) continue;
        int dst = R*w+C;        
        if (!Red[dst]) continue;
        uf.merge(st, dst);
      }      
    }
    else {
      int r2, c2;
      cin >> r2 >> c2;
      r2--, c2--;
      int dst = r2*w+c2;
      if (Red[st] && Red[dst]) {
        cout << (uf.same(st, dst) ? "Yes" : "No") << endl;
      }
      else cout << "No" << endl;
    }
  }
  return 0;

}