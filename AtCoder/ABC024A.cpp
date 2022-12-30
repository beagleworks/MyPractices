// ABC024A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c, k, s, t;
  cin >> a >> b >> c >> k >> s >> t;

  // solve
  int ans = a*s+b*t - (s+t >= k ? (s+t)*c : 0);

  // output
  cout << ans << endl;
  return 0;

}