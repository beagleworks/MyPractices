// ABC211A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  double ans = (a - b) / 3.0 + b;

  // output
  printf("%.10f\n", ans);
  return 0;

}