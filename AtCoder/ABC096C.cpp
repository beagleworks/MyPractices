// ABC096C

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
  for (auto &s : S) cin >> s;

  // solve
  const int dy[4] = {-1, 0, 1, 0};
  const int dx[4] = {0, 1, 0, -1};

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (S[i][j] == '.') continue;
      bool f = false;
      for (int k=0; k<4; k++) {
        int I = i+dy[k], J = j+dx[k];
        if (0 <= I && I < h && 0 <= J && J < w)
          if (S[I][J] == '#') f = true;
      }
      if (!f) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  // output
  cout << "Yes" << endl;
  return 0;

}