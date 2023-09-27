// TSK_B09

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

  // solve
  vector field(1530, vector<int>(1530, 0));
  for (int i=0; i<n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    field[a][b]++;
    field[c][d]++;
    field[c][b]--;
    field[a][d]--;
  }

  for (int i=0; i<1530; i++) {
    for (int j=1; j<1530; j++) {
      field[i][j] += field[i][j-1];
    }
  }
  for (int j=0; j<1530; j++) {
    for (int i=1; i<1530; i++) {
      field[i][j] += field[i-1][j];
    }
  }

  // output
  int ans = 0;
  for (auto f : field) for (auto ff : f) if (ff) ans++;
  cout << ans << endl;
  return 0;

}