// ABC318E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector hin(n+1, vector<int>());
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    hin[a].emplace_back(i);
  }
  
  // solve
  long ans = 0;
  for (int i=1; i<=n; i++) {
    for (int u=1; u<(int)hin[i].size(); u++) {
      // 今回見るjの個数 * iの個数 * kの個数
      long now = (long)(hin[i][u] - hin[i][u-1] - 1) * u * ((int)hin[i].size()-u);
      ans += now;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}