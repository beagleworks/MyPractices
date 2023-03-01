// ARC032B

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  dsu d(n);
  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    d.merge(a, b);
  }

  int ans = 0;
  for (int i=1; i<n; i++) {
    if (!d.same(0, i)) {
      ans++;
      d.merge(0, i);
    }
  }

  // output
  cout << ans << endl;
  return 0;

}