// AGC019A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long q, h, s, d, n;
  cin >> q >> h >> s >> d >> n;

  // solve
  long long one = min({q*4, h*2, s});
  long long two = min(one*2, d);
  long long ans = (n / 2) * two + (n % 2) * one;

  // output
  cout << ans << endl;
  return 0;

}