// ABC138D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, q;
  cin >> n >> q;

  vector T(n, vector<int>());
  for (int i=0; i<n-1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    T[a].emplace_back(b);
    T[b].emplace_back(a);
  }

  // solve
  vector ans(n, 0);
  for (int i=0; i<q; i++) {
    int p, x;
    cin >> p >> x;
    p--;
    ans[p] += x;
  }

  stack<int> st;
  vector visited(n, false);
  visited[0] = true;
  st.emplace(0);
  while(!st.empty()){
    int p = st.top();
    st.pop();
    for (auto t : T[p]) {
      if (!visited[t]) {
        visited[t] = true;
        st.emplace(t);
        ans[t] += ans[p];
      }
    } 
  }

  // output
  for (auto a : ans) cout << a << endl;
  return 0;

}