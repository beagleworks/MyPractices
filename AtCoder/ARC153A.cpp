// ARC153A

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
  n--;

  // solve
  int ans = 0;
  int dig1 = n / 100000;
  ans += (dig1+1) * 110000000;
  n -= dig1 * 100000;

  int dig2 = n / 1000;
  ans += dig2 * 100000;
  n -= dig2 * 1000;

  int dig3 = n / 100;
  ans += dig3 * 11000;
  n -= dig3* 100;

  int dig4 = n / 10;
  ans += dig4 * 101;
  n -= dig4 * 10;
  ans += n * 10;

  // output
  cout << ans << endl;
  return 0;

}