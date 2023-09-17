// TSK_B08

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector field(1510, vector(1510, 0));
  for (int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    field[x][y]++;
  }

  // solve
  vector S(1510, vector(1510, 0));
  for (int i=0; i<=1500; i++) {
    for (int j=1; j<=1500; j++) {
      S[i][j] = S[i][j-1] + field[i][j];
    }
  }

  for (int j=0; j<=1500; j++) {
    for (int i=1; i<=1500; i++) {
      S[i][j] += S[i-1][j];
    }
  }

  int q;
  cin >> q;
  for (int i=0; i<q; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << S[c][d] + S[a-1][b-1] - S[c][b-1] - S[a-1][d] << endl;
  }

  return 0;

}