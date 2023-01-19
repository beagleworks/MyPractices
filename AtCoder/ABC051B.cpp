// ABC051B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int k, s;
  cin >> k >> s;

  // solve
  int ans = 0;
  for (int i=0; i<=k; i++) {
    for (int j=0; j<=k; j++) {
      int r = s-(i+j);
      if (r < 0 || r > k) continue;
      ans++;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}