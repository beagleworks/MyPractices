// ABC097B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x;
  cin >> x;

  // solve
  int ans = 1;
  for (int i=2; i<=x; i++) {
    for (int j=2; j<=9; j++) {
      int y = pow(i, j);
      if (y <= x) {
        ans = max(y, ans);
      }
      else break;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}