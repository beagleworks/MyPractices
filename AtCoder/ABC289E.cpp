// ABC289E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> color(n);
  for (int i=0; i<n; i++) cin >> color[i];
  vector Adj(n, vector<int>());
  for (int i=0; i<m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    Adj[u].emplace_back(v);
    Adj[v].emplace_back(u);
  }
  vector phase(n, vector(n, -1));
  phase[0][n-1] = 0;

  queue<pair<int, int>> ph;
  ph.emplace(0, n-1);
  while (!ph.empty()) {
    auto p = ph.front();
    ph.pop();
    for (auto x : Adj[p.first]) {
      for (auto y : Adj[p.second]) {
        if (color[y] != color[x] && phase[x][y] == -1) {
          ph.emplace(x, y);
          phase[x][y] = phase[p.first][p.second] + 1;
        }
      }
    }
  } 

  cout << phase[n-1][0] << '\n';
  return;
}

int main(){

  // input
  int t;
  cin >> t;

  // solve
  for (int i=0; i<t; i++) {
    solve();
  }
  return 0;

}