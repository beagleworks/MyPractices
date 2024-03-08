#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  long ans = 0;
  for (int il=0, ir=0; il<n; il++) {
    if (il >= ir) ir = il+1;
    while (ir < n && A[ir] - A[il] <= k) ir++;
    ans += (--ir)-il;
  }

  // output
  cout << ans << endl;
  return 0;

}
