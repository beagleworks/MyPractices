// ABC133B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, d;
  cin >> n >> d;

  vector X(n, vector<int>(d));
  for (auto &x : X) for (auto &xx : x) cin >> xx;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      double len = 0.0;
      for (int k=0; k<d; k++) {
        len += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
      }
      if ((int)sqrt(len) * (int)sqrt(len) == (int)len && len != 0) ans++;
    }
  }

  // output
  cout << ans/2 << endl;
  return 0;

}