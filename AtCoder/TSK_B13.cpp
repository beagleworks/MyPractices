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
  auto f = [&](long x) { return x <= k; };

  long ans = 0;
  long sum = 0;  // [il, ir) における値を管理する。
  for (int il = 0, ir = 0; il < n; ++il) {
    if (il > ir) ir = il;
    while (ir < n && f(sum + A[ir])) {
      sum += A[ir++];  // 右に一つ追加する
    }
    if (il < ir) {
      sum -= A[il];  // 空区間でなければ左側を一つ捨てる
    }
    ans += ir - il;
  }

  // output
  cout << ans << endl;
  return 0;

}