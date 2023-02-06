// ABC288C

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
  int ans = 0;

  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;

    if (d.same(a,b)) ans++;
    d.merge(a,b);
  }

  // output
  cout << ans << endl;
  return 0;

}