// ABC065C(ARC076A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  long long ans = 1;
  if (abs(n-m) <= 1) {
    for (int i=1; i<=n; i++) ans = (ans * i) % MOD;
    for (int i=1; i<=m; i++) ans = (ans * i) % MOD;
    if (n == m) ans = (ans * 2) % MOD;
  }
  else ans = 0; 

  // output
  cout << ans << endl;
  return 0;

}