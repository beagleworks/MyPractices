// ABC135A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  int ans = (a+b)/2;

  // output
  if ((a+b) % 2 == 0) cout << ans << endl;
  else cout << "IMPOSSIBLE" << endl;
  return 0;

}