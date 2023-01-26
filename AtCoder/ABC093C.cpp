// ABC093C(ARC094A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // solve
  int m = max({a, b, c});
  int d = m-a + m-b + m-c;
  int ans = d / 2;
  if (d % 2 == 1) ans += 2;

  // output
  cout << ans << endl;
  return 0;

}