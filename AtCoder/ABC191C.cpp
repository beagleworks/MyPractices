// ABC191C

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

  vector<string> S(h);
  for (auto &s: S) cin >> s;

  // solve
  const int dh[] = {0, 0, 1, 1}, dw[] = {0, 1, 1, 0};
  int ans = 0;
  for (int i=0; i+1<h; i++) {
    for (int j=0; j+1<w; j++) {
      int cnt = 0;
      for (int k=0; k<4; k++) {
        int I = i+dh[k], J =j+dw[k];
        if (S[I][J] == '#') cnt++;
      }
      if (cnt%2 == 1) ans++;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}