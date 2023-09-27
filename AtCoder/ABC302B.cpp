// ABC302B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

constexpr int dh[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
constexpr int dw[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector<string> S(h);
  for (auto &a : S) cin >> a;

  // solve
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      for (int k=0; k<8; k++) {
        string s = "";        
        for (int z=0; z<5; z++) {
          int I = i + z*dh[k], J = j + z*dw[k];
          if (I < 0 || J < 0 || I >= h || J >= w) continue;
          s += S[I][J];
        }
        if (s == "snuke") {
          for (int z=0; z<5; z++) {
            int I = i + z*dh[k], J = j + z*dw[k];
            cout << I+1 << " " << J+1 << endl;
          }
        }
      }
    }
  }

  return 0;

}