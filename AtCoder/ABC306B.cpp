// ABC306B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  uint64_t ans = 0;

  // solve
  for (int i=0; i<64; i++) {
    uint64_t a;
    cin >> a;
    ans += a << i;
  }

  // output
  cout << ans << endl;
  return 0;

}