// ABC302A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int64_t a, b;
  cin >> a >> b;

  // solve
  int64_t ans = a / b;

  // output
  cout << ans + min(a % b, 1L) << endl;
  return 0;

}