// ABC107C(ARC101A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<long long> X(n);
  for (auto &x : X) cin >> x;

  // solve
  long long ans = LINF;
  for (int i=0; i+k-1<n; i++) {
    long long cost = abs(X[i+k-1] - X[i]) + min(abs(X[i+k-1]), abs(X[i]));
    ans = min(cost, ans);
  }

  // output
  if (n == 1) cout << abs(X[0]) << endl;
  else cout << ans << endl;
  return 0;

}