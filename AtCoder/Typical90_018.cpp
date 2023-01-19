// Typical90_018

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long double t, l, x, y, q;
  cin >> t >> l >> x >> y >> q;

  vector<int> E(q);
  for (auto &e : E) cin >> e;

  // solve
  for (auto e : E) {
    long double dig = 360.0*e/t;
    long double cy = (-l/2)*sin(dig*M_PI/180);
    long double cz = l/2-l/2*cos(dig*M_PI/180);
    long double ans = atan2(cz, sqrt(x*x+(cy-y)*(cy-y))) * 180 / M_PI;
    printf("%.10LF\n", ans);
  }

  return 0;

}