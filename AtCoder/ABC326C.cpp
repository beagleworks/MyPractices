// ABC326C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A));
  int lt = 0, rt = 0;
  int ans = 0;

  while (rt < n) {

    while (rt < n && A[rt] - A[lt] < m) rt++;
    ans = max(ans, rt-lt);
    lt++;
  }

  // output
  cout << ans << endl;
  return 0;

}