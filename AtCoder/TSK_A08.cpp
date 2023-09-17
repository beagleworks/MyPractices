// TSK_A08

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

  vector field(h, vector<int>(w));
  for (auto &f : field) for (auto &g : f) cin >> g;

  // solve
  vector S(h, vector<int>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (j == 0) S[i][j] = field[i][j];
    else S[i][j] = S[i][j-1] + field[i][j];
  }

  for (int j=0; j<w; j++) for (int i=1; i<h; i++) {
    S[i][j] += S[i-1][j];
  }

  // output
  int q;
  cin >> q;
  for (int i=0; i<q; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--, b--, c--, d--;
    int ans = S[c][d];
    if (a && b) ans += S[a-1][b-1];
    if (a) ans -= S[a-1][d];
    if (b) ans -= S[c][b-1];
    cout << ans << endl;
  }

  return 0;

}