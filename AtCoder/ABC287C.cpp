// ABC287C

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

  vector G(n, vector<int>());
  for (int i=0; i<m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  // solve
  int one = 0;
  bool ans = true;
  for (auto g : G) {
    if (g.size() == 1) one++;
    else if (g.size() == 2) continue;
    else ans = false;
  }

  stack<int> st;
  vector visited(n, false);
  visited[0] = true;
  st.emplace(0);

  while(!st.empty()) {
    int p = st.top();
    st.pop();
    for (auto g : G[p]) {
      if (!visited[g]) {
        st.emplace(g);
        visited[g] = true;
      }
    }
  }

  for (auto v : visited) if (!v) ans = false;

  // output
  cout << (ans && one == 2 ? "Yes" : "No") << endl;
  return 0;

}