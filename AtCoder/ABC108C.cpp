// ABC108C(ARC102A)

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
  int64_t ans;
  int64_t xsame = n/k;
  ans = xsame * xsame * xsame;

  if (k % 2 == 0) {
    if (k*xsame+k/2 <= n) xsame++;
    ans += xsame * xsame * xsame;
  }

  // output
  cout << ans << endl;
  return 0;

}