// ABC001B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int m;
  cin >> m;

  // solve
  int ans = 0;
  if (m > 70000) ans = 89;
  else if (m >= 35000) ans = (m - 30000) / 5000 + 80;
  else if (m >= 6000) ans  = m / 1000 + 50;
  else if (m >= 100) ans = m / 100;

  // output
  if (ans < 10) cout << 0;
  cout << ans << endl;
  return 0;

}