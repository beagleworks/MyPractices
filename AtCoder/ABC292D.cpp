// ABC292D

#include <bits/stdc++.h>
// #include <atcoder/dsu>
using namespace std;
// using namespace atcoder;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector Adj(n, vector<int>());
  vector EN(n, 0);
  for (int i=0; i<m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    Adj[u].emplace_back(v);
    Adj[v].emplace_back(u);
    EN[u]++;
    EN[v]++;
  }

  // solve
  bool ans = true;
  vector visited(n, false);
  int cv = 0, ce = 0;
  stack<int> st;
  auto dfs = [&](int x) {
    cv = 0, ce = 0;
    st.emplace(x);
    while(!st.empty()) {
      auto p = st.top();
      st.pop();
      if (visited[p]) continue;
      visited[p] = true;
      cv++;
      ce += EN[p];
      for (auto q : Adj[p]) {
        if (!visited[q]) {
          st.emplace(q);
        }
      }
    }
  };

  for (int i=0; i<n; i++) {
    if (!visited[i]) {
      dfs(i);
      if (cv != ce/2) ans = false;
      // cout << cv << " / " << ce << endl; 
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}