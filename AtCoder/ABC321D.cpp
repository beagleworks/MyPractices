// ABC321D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  long p;
  cin >> n >> m >> p;

  vector<long> A(n), B(m);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  long ans = 0;
  sort(ALL(B));
  vector<long> Bsum(m+1, 0);
  for (int i=0; i<m; i++) {
    Bsum[i+1] = Bsum[i] + B[i];
  }

  for (int i=0; i<n; i++) {
    auto ok = lower_bound(ALL(B), p-A[i]);

    long xxx = A[i]*(ok - B.begin()) + Bsum[ok - B.begin()] + p*(m-(ok - B.begin()));
    ans += xxx;
  }

  // output
  cout << ans << endl;
  return 0;

}