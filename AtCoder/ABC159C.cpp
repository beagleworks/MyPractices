// ABC159C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  double l;
  cin >> l;

  // solve
  double ans = (l/3.0)*(l/3.0)*(l/3.0);

  // output
  printf("%.10f\n", ans);
  return 0;

}