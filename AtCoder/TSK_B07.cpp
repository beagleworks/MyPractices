// TSK_B07

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int t, n;
  cin >> t >> n;

  // solve
  vector<int> E(t+1, 0);
  for (int i=0; i<n; i++) {
    int l, r;
    cin >> l >> r;
    E[l]++;
    E[r]--;
  }

  // output
  int ans = 0;
  for (int i=0; i<t; i++) {
    ans += E[i];
    cout << ans << "\n";
  }

  return 0;

}