// TSK_A09

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

  vector field(h+10, vector(w+10, 0));

  // solve
  for (int i=0; i<n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    field[a][b]++, field[c+1][d+1]++;
    field[a][d+1]--, field[c+1][b]--;
  }

  vector S(h+1, vector(w+1, 0));
  for (int i=1; i<h+1; i++) {
    for (int j=1; j<w+1; j++) {
      S[i][j] = S[i][j-1] + field[i][j];
    }
  }
  for (int j=1; j<w+1; j++) {
    for (int i=1; i<h+1; i++) {
      S[i][j] += S[i-1][j];
    }
  }

  // output
  for (int i=1; i<h+1; i++) {
    for (int j=1; j<w+1; j++) {
      cout << S[i][j] << (j != w ? " " : "");
    }
    cout << endl;
  }

  return 0;

}