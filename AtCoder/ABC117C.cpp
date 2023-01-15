// ABC117C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> X(m);
  for (auto &x : X) cin >> x;

  // solve
  sort(ALL(X));
  int ans = 0;
  if (n < m) {
    vector<int> D(m-1);
    for (int i=0; i<m-1; i++) {
      D[i] = X[i+1] - X[i];
    }
    sort(ALL(D), greater<int>());
    for (int i=n-1; i<m-1; i++) ans += D[i];
  }

  // output
  cout << ans << endl;
  return 0;

}