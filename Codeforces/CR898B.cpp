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

  // solve
  for (int i=0; i<n; i++) {
    int m;
    cin >> m;

    vector<int> A(m);
    for (auto &a : A) cin >> a;
    
    int ans = -1;
    for (int j=0; j<m; j++) {
      int tmp = 1;
      for (int k=0; k<m; k++) {
        if (j == k) tmp *= A[k] + 1;
        else tmp *= A[k];
      }
      ans = max(ans, tmp);
    }

    cout << ans << '\n';

  }

  return 0;

}