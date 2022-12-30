// DIVERTA2019_1_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int r, g, b, n;
  cin >> r >> g >> b >> n;

  // solve
  int ans = 0;
  for (int i=0; i*r<=n; i++) {
    for (int j=0; j*g<=n; j++) {
      if (i*r + j*g > n) break;
      if ((n - i*r - j*g) % b == 0) ans++;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}