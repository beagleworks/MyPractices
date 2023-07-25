// ABC002C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  c -= a, e -= a;
  d -= b, f -= b;

  // solve
  double ans = abs(c*f-d*e) / 2.0;

  // output
  printf("%.10f\n", ans);
  return 0;

}