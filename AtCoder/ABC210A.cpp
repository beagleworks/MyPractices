// ABC210A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, x, y;
  cin >> n >> a >> x >> y;

  // solve
  int ans = x * min(n, a) + y * max(0, n-a);

  // output
  cout << ans << endl;
  return 0;

}