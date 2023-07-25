// ABC292C

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

  // solve
  int64_t ans = 0;
  auto f = [&](int x) -> int64_t {
    int64_t ret = 0;
    for (int i=1; i*i<=x; i++) {
      if (x%i == 0) {
        if (i*i == x) ret++;
        else ret += 2;
      }
    }
    return ret;
  };

  for (int i=1; i<n; i++) {
    ans += f(i) * f(n-i);
  }

  // output
  cout << ans << endl;
  return 0;

}