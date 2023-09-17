// ABC320D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;


int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  vector<vector<pair<long, long>>> Len(n+1, vector<pair<long, long>>());
  Len[1].emplace_back(0, 0);
  vector<vector<int>> P(n+1, vector<int>());
  P[1].emplace_back(0);


  vector<long> A(m), B(m), X(m), Y(m);
  for (int i=0; i<m; i++) {
    cin >> A[i] >> B[i] >> X[i] >> Y[i];
    P[A[i]].emplace_back(B[i]);
    Len[A[i]].emplace_back(-X[i], -Y[i]);
    P[B[i]].emplace_back(A[i]);
    Len[B[i]].emplace_back(X[i], Y[i]);
  }

  // output  
  vector<bool> visited(n+1, false);
  stack<int> st;
  vector<pair<long, long>> ans(n+1, {LINF, LINF});
  ans[1] = {0, 0};
  st.emplace(1);
  visited[1] = true;
  while (!st.empty()){
    auto q = st.top();
    st.pop();
    for (int i=0; i<(int)P[q].size(); i++) {
      int r = P[q][i];
      if (visited[r]) continue;
      visited[r] = true;
      st.emplace(r);
      auto pos = Len[q][i];
      ans[r] = {ans[q].first-pos.first, ans[q].second-pos.second};      
    }
  }

  for (int i=1; i<=n; i++) {
    if (ans[i] == make_pair(LINF, LINF)) cout << "undecidable" << "\n";
    else {
      cout << ans[i].first << " " << ans[i].second << "\n";
    }
  }

  return 0;

}