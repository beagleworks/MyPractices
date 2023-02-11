// ABC052C(ARC067A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int n;
  cin >> n;

  auto isPrime = [&](int64_t n) {
  if (n < 2) return false;
  for (int64_t i=2; i*i<=n; i++) {
    if (n%i == 0) return false;
  }
  return true;
};

  // solve
  int64_t ans = 1;
  for (int i=2; i<=n; i++) {
    if (isPrime(i)) {
      int x = i;
      int64_t cnt = 0;
      while (x <= n) {
        cnt += n/x;
        x *= i;
      }
      ans *= cnt+1;
      ans %= MOD;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}