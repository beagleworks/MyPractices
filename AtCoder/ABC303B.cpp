// ABC303B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector A(m, vector<int>(n));
  for (auto &a: A) for (auto &b : a) cin >> b;

  // solve
  set<pair<int, int>> st;
  for (int i=0; i<m; i++) {
    for (int j=0; j<n-1; j++) {
      st.emplace(min(A[i][j], A[i][j+1]), max(A[i][j], A[i][j+1]));
    }
  }

  // output
  int ans = 0;
  for (int i=1; i<=n; i++) {
    for (int j=i+1; j<=n; j++) {
      if (!st.count({i, j})) ans++;
    }
  }
  cout << ans << endl;
  return 0;

}