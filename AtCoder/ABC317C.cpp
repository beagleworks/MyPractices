// ABC317C

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

  vector<vector<int>> X(n+1, vector<int>(n+1, 0));
  for (int i=0; i<m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    X[a][b] = c;
    X[b][a] = c;
  }

  // solve
  vector<int> vb(n);
  iota(ALL(vb), 1);
  int64_t ans = 0;
  do{
    int64_t len = 0;
    int pre;
    for(int i=0; i<n; i++) {
      if (i == 0) pre = vb[i];
      else {
        int now = vb[i];
        if (!X[pre][now]) break;
        len += X[pre][now];
        pre = now;
      }
    }
    // for (auto x: vb) cout << x;
    // cout << " " << len << endl;
    ans = max(ans, len);
  }
  while(next_permutation(ALL(vb)));

  // output
  cout << ans << endl;
  return 0;

}