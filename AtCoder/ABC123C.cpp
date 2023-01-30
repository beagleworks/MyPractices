// ABC123C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, a, b, c, d, e;
  cin >> n >> a >> b >> c >> d >> e;

  // solve
  long long mn = min({a, b, c, d, e});
  long long ans = 4 + (n+mn-1) / mn;

  // output
  cout << ans << endl;
  return 0;

}