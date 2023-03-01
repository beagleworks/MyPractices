// ABC268B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int64_t n;
  cin >> n;

  // solve
  int64_t ans = n%MOD;
  if (ans < 0) ans = (ans+MOD)%MOD;

  // output
  cout << ans << endl;
  return 0;

}