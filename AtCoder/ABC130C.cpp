// ABC130C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  double w, h, x, y;
  cin >> w >> h >> x >> y;

  // solve
  double ans = w*h/2.0;
  bool multi = (w/2 == x && h/2 == y);

  // output
  printf("%.10f %d\n", ans, multi);
  return 0;

}