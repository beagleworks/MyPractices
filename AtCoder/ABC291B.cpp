// ABC291B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;
  vector<double> X(n*5);
  for (auto &x : X) cin >> x;

  // solve
  sort(ALL(X));
  double ans = 0.0;
  for (int i=n; i<4*n; i++) {
    ans += X[i];
  }

  // output
  printf("%.10f\n", ans/(3.0*n));
  return 0;

}