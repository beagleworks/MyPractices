// ABC131C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  a--;

  // solve
  auto f = [](long long n, long long m) {
    return n - n/m;
  };

  long long e = lcm(c, d);

  long long ans = f(b, c) + f(b, d) - f(b, e) - f(a, c) - f(a, d) + f(a, e);

  // output
  cout << ans << endl;
  return 0;

}