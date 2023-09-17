// ABC284E

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

  vector E(n, vector<int>());
  for (int i=0; i<m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    E[u].emplace_back(v);
    E[v].emplace_back(u);
  }

  // solve
  vector visited(n, false);
  int64_t ans = 0;
  stack<int> st;
  st.emplace(0);
  visited[0] = true;
  while (!st.empty()) {
    int v = st.top();
    st.pop();
    ans++;
    visited[v] = true;
    for (auto p : E[v]) {
      if (visited[p]) continue;
      st.emplace(p);
    }
    //if (v != 0) visited[v] = false;
  }

  // output
  cout << ans << endl;
  return 0;

}