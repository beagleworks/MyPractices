// ABC117A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int t, x;
  cin >> t >> x;

  // solve
  double ans = (double)t / x;

  // output
  printf("%.10f\n", ans);
  return 0;

}