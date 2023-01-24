// Typical90_021

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// for debug
#define COUT(a) cout << a << endl
#define VIEW(x) do{cout << "--" << #x << "--" << endl; view(x);}while(0)
template<typename T> void view(T e){COUT(e);}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector V(n, vector<int>()), rV(n, vector<int>());
  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    V[a].emplace_back(b);
    rV[b].emplace_back(a);
  }

  // solve
  vector visited(n, false);
  stack<int> st;
  auto dfs = [&](auto self, int p) -> void{
    visited[p] = true;
    for (auto e : V[p]) {
      if (!visited[e]) self(self, e);
    }
    st.emplace(p);   
  };

  for (int i=0; i<n; i++) {
    if (!visited[i]) dfs(dfs, i);
  }

  vector visited2(n, false);
  int cnt = 0;
  auto rdfs = [&](auto self, int p) -> void{
    visited2[p] = true;
    cnt++;
    for (auto e : rV[p]) {
      if (!visited2[e]) self(self, e);
    }
  };

  long long ans = 0;
  while (!st.empty()) {
    int p = st.top();
    st.pop();
    if (!visited2[p]) {
      cnt = 0;
      rdfs(rdfs, p);
      ans += (long long)cnt * (cnt-1) / 2; 
    }

  }

  // output
  cout << ans << endl;
  return 0;

}