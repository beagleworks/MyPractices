// ABC002A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x, y;
  cin >> x >> y;

  // solve
  int ans = max(x, y);

  // output
  cout << ans << endl;
  return 0;

}