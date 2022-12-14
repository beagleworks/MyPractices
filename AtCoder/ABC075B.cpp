// ABC075B

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

  vector<string> field(h);
  for (auto &s: field) cin >> s;

  // solve
  const int ry[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
  const int rx[8] = {0, 1, 1, 1, 0, -1, -1, -1};


  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (field[i][j] == '#') {
        cout << "#";
        continue;
      }
      int cnt = 0;
      for (int k=0; k<8; k++) {
        int Y = i+ry[k], X = j+rx[k];
        if (Y < 0 || X < 0 || Y >= h || X >= w) continue;
        if (field[Y][X] == '#') cnt++;
      }
      cout << cnt;
    }
    cout << endl;
  }

  return 0;

}