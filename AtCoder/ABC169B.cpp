// ABC169B

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
  
  vector<long> A(n);
  for (auto &a : A) cin >> a;

  // solve
  if (count(ALL(A), 0)) {
    cout << 0 << endl;
    return 0;
  }
  long ans = 1;
  const long LINF = 1e18;
  for (int i=0; i<n; i++) {
    if (A[i] > LINF/ans) {
      cout << -1 << endl;
      return 0;
    }
    ans *= A[i];
  }

  // output
  cout << ans << endl;
  return 0;

}