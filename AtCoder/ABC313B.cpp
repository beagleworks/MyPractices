// ABC313B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<vector<int>> G(n, vector<int>());
  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[b].emplace_back(a);
  }

  // solve
  vector<int> dg(n);
  int ans = -INF;
  for (int i=0; i<n; i++) {
    if (G[i].size() == 0) {
      if (ans == -INF) ans = i;
      else ans = -2;
    }
  }

  // output
  cout << ans+1 << endl;
  return 0;

}