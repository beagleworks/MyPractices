// AGC008A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long x, y;
  cin >> x >> y;

  // solve
  long long ans;
  if (x < y && x*y >= 0) ans = y - x;
  else if (x > y && x*y > 0) ans = x - y + 2;
  else ans = abs(abs(y)-abs(x))+1;

  // output
  cout << ans << endl;
  return 0;

}