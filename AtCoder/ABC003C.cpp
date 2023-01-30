// ABC003C

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

  vector<double> R(n);
  for (auto &r : R) cin >> r;

  // solve
  sort(ALL(R));
  double ans = 0.0;
  for (int i=n-k; i<n; i++) {
    ans = (ans + R[i]) / 2.0;
  }

  // output
  printf("%.10f\n", ans);
  return 0;

}