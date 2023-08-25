// ABC243C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> X(n), Y(n);
  for (int i=0; i<n; i++) {
    cin >> X[i] >> Y[i];
  }
  string s;
  cin >> s;

  // solve
  map<int, int> L, R;
  for (int i=0; i<n; i++) {
    if (s[i] == 'L') {
      if (L[Y[i]]) {
        L[Y[i]] = max(L[Y[i]], X[i]);
      }
      else L[Y[i]] = X[i];
    } else {
      if (R[Y[i]]) {
        R[Y[i]] = min(R[Y[i]], X[i]);
      }
      else R[Y[i]] = X[i];
    }
  }

  bool ans = false;
  for (auto [y, x] : R) {
    if (!L[y]) continue;
    if (L[y] >= x) ans = true;
  }


  // output
  cout << (ans ? "Yes" : "No")  << endl;
  return 0;

}