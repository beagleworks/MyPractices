// Typical90_028

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  vector field(1002, vector(1002, 0));
  for (int i=0; i<n; i++) {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    field[x][y]++;
    field[a][b]++;
    field[x][b]--;
    field[a][y]--;
  }

  // output
  vector<int> ans(n+1, 0);

  for (int i=1; i<1002; i++) {
    for (int j=0; j<1002; j++) {
      field[i][j] += field[i-1][j];
    }
  }

  for (int j=1; j<1002; j++) {
    for (int i=0; i<1002; i++) {
      field[i][j] += field[i][j-1];
    }
  }

  for (int i=0; i<1002; i++) {
    for (int j=0; j<1002; j++) {
      ans[field[i][j]]++;
    }
  }

  for (int i=1; i<=n; i++) cout << ans[i] << '\n';
  return 0;

}