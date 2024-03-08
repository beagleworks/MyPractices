#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<vector<int>> V(4, vector<int>(n));
  for (int i=0; i<4; i++) for (auto &v : V[i]) cin >> v;
  
  // solve
  bool ans = false;
  vector<set<int>> X(2);
  for (int i=0; i<2; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<n; k++) {
        X[i].emplace(V[i][j] + V[i+2][k]);
      }
    }
  }

  vector<vector<int>> Y(2);
  for (int i=0; i<2; i++) {
    Y[i].resize(X[i].size(), 0);
    copy(ALL(X[i]), Y[i].begin());
  }

  for (int i=0; i<(int)Y[0].size(); i++) {
    auto p = lower_bound(ALL(Y[1]), k-Y[0][i]);
    int d = p - Y[1].begin();
    if (d == (int)Y[1].size()) continue;
    if (*p == k-Y[0][i]) ans = true;
  }
  

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}