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
  for (int i=0; i<n; i++) {
    vector<string> field(10);
    for (auto &s : field) cin >> s;

    int ans = 0;
    for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) {
        if (field[i][j] == 'X') {
          ans += ((i == 0 || i == 9 || j == 0 || j == 9) ? 1 : (i == 1 || i == 8 || j == 1 || j == 8) ? 2 : (i == 2 || i == 7 || j == 2 || j == 7) ? 3 : (i == 3 || i == 6 || j == 3 || j == 6) ? 4 : 5);
        }
      }
    }

    cout << ans << '\n';
  }

  return 0;

}