// ABC095C(ARC096A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, ab, x, y;
  cin >> a >> b >> ab >> x >> y;

  // solve
  int miab = min(x, y), mxab = max(x, y);
  int ans = min({a*x+b*y, ab*2*miab+a*(x-miab)+b*(y-miab), ab*2*mxab});

  // output
  cout << ans << endl;
  return 0;

}