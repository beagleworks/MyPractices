// ABC339B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int h, w, n;
  cin >> h >> w >> n;

  // solve
  vector Field(h, vector<int>(w));
  int dir = 0;
  int ph = 0, pw = 0;
  constexpr int dh[4] = {-1, 0, 1, 0};
  constexpr int dw[4] = {0, 1, 0, -1};

  for (int i=0; i<n; i++) {
    if (Field[ph][pw] == 0) {
      Field[ph][pw] = 1;
      dir++;
    }
    else {
      Field[ph][pw] = 0;
      dir += 3;
    }
    ph += dh[dir%4], pw += dw[dir%4];
    if (ph < 0) ph = h-1;
    if (pw < 0) pw = w-1;
    ph %= h, pw %= w;
  }

  // output
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      cout << (Field[i][j] == 0 ? '.' : '#');
    }
    cout << endl;
  }
  
  return 0;

}