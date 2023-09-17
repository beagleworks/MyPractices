// ABC320C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int m;
  cin >> m;
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  // solve
  int ans = 9999;
  s1 += s1 + s1;
  s2 += s2 + s2;
  s3 += s3 + s3;
  for (int i=0; i<3*m; i++) {
    for (int j=0; j<3*m; j++) {
      if (i == j) continue;
      for (int k=0; k<3*m; k++) {
        if (j == k || i == k) continue;
        if (s1[i] == s2[j] && s2[j] == s3[k] && s3[k] == s1[i]) ans = min(ans, max({i,j,k}));
      }
    }
  }

  if (ans == 9999) cout << -1 << endl;
  else cout << ans << endl;
  return 0;


}