// ABC307B

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

  vector<string> S(n);
  for (auto &a : S) cin >> a;

  // solve
  bool ans = false;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (i == j) continue;
      string s = S[i] + S[j];
      string t = s;
      reverse(ALL(t));
      if (s == t) ans = true;
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}