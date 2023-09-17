// ABC319E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, x, y;
  cin >> n >> x >> y;

  vector<int> P(n-1), T(n-1);
  for (int i=0; i<n-1; i++) cin >> P[i] >> T[i];

  // solve
  int lc = lcm(lcm(lcm(lcm(lcm(lcm(2,3),4),5),6),7),8);
  vector<long> lst(lc);
  for (int i=0; i<lc; i++) {
    lst[i] = i;
    for (int u=0; u<n-1; u++) {
      lst[i] += (P[u] - lst[i]%P[u])%P[u] + T[u];
    }
    lst[i] -= i;
  }

  // output
  int q;
  cin >> q;
  for (int i=0; i<q; i++) {
    long m;
    cin >> m;
    m += x;
    m += lst[m%lc] + y;
    cout << m << '\n';
  }
  
  return 0;

}