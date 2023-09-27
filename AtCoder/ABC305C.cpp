// ABC305C

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

  vector<string> field(h);
  for (auto &f : field) cin >> f;

  // solve
  int a = -1, c = -1;
  for (int i=0; i<h; i++) {
    bool f = false;
    for (int j=0; j<w; j++) {
      if (field[i][j] == '#') {
        a = i, c = j;
        if (j-1 >= 0) {
          if (field[i+1][j-1] == '#') {
            cout << i+1 << " " << j << endl;
            return 0;
          }
        }
        f = true;
        break;
      }
    }
    if (f) break;
  }

  int b = -1, d = -1;
  for (int i=h-1; i>=0; i--) {
    bool f = false;
    for (int j=w-1; j>=0; j--) {
      if (field[i][j] == '#') {
        b = i, d = j;
        if (j+1 <= w-1) {
          if (field[i-1][j+1] == '#') {
            cout << i+1 << " " << j+2 << endl;
            return 0;
          }
        }
        f = true;
        break;
      }
    }
    if (f) break;
  }

  for (int i=a; i<=b; i++) {
    for (int j=c; j<=d; j++) {
      if (field[i][j] == '.') {
        cout << i+1 << " " << j+1 << endl;        
        return 0;
      }
    }
  }
}