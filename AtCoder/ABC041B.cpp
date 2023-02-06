// ABC041B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  long long a, b, c;
  cin >> a >> b >> c;

  // solve
  long long ans = (a*b) % MOD;
  ans *= c;
  ans %= MOD;

  // output
  cout << ans << endl;
  return 0;

}