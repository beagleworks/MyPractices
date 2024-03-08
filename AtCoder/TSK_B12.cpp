#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  double ok = 0, ng = 50.0;
  while (ng - ok > 0.0001) {
    double mid = (ok + ng) / 2.0;
    if (mid*mid*mid+mid <= n) ok = mid;
    else ng = mid;
  }

  // output
  printf("%.10f\n", ok);
  return 0;

}