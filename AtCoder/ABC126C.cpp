// ABC126C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  double ans = .0;
  for (int i=n; i>0; i--) {
    if (i >= k) ans += 1.0 / n;
    else {
      for (int j=1; j<=17; j++) {
        if (i*pow(2,j) >= k) {
          ans += 1.0/n * pow(0.5, j);
          break;
        }
      }
    }
  }

  // output
  printf("%.10f\n", ans);
  return 0;

}