// ABC144D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  double a, b, x;
  cin >> a >> b >> x;
  x /= a;

  // solve
  double ans;
  if (x > a*b/2) {
    ans = (atan2((a*b-x)*2, a*a) * 180) / M_PI;
  }
  else {
    ans = (atan2(b*b, x*2) * 180) / M_PI;
  }

  // output
  printf("%.10f\n", ans);
  return 0;

}