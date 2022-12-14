// Typical90_003

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  vector E(n, vector<int>());
  for (int i=0; i<n-1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    E[a].emplace_back(b);
    E[b].emplace_back(a);
  }

  // solve

  auto dfs = [=](int start) -> pair<int, int> {
    vector visited(n, -1);
    stack<int> st;
    st.emplace(start);
    visited[start] = 0;

    while (!st.empty()) {
      int p = st.top();
      st.pop();

      for (auto e: E[p]) {
        if (visited[e] == -1) {
          visited[e] = visited[p] + 1;
          st.emplace(e);
        }
      }
    }

    auto itr = max_element(ALL(visited));

    return {itr - visited.begin(), *itr};
  };


  auto a = dfs(0);
  auto ans = dfs(a.first);

  // output
  cout << ans.second + 1 << endl;
  return 0;

}