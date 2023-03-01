// ABC259B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  double a, b, d;
  cin >> a >> b >> d;

  // solve
  double rd = M_PI * d / 180.0;
  double ansx = cos(rd)*a - sin(rd)*b;
  double ansy = sin(rd)*a + cos(rd)*b;

  // output
  printf("%.10f %.10f\n", ansx, ansy);
  return 0;

}