// ABC284C

#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
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
    int u, v;
    cin >> u >> v;
    u--, v--;
    d.merge(u, v);
  }

  // output
  vector<vector<int>> ans = d.groups();
  cout << ans.size() << endl;

  return 0;

}